#!/usr/bin/env python3
"""Build Digimon NPC overworld sprites from Digimon World DS field-sprite grids.

redblueyellow's battle sheets end in a 3x5 grid of 32x32 (or 32x64 for big
Digimon, placed on 64x64 frames) field frames:
rows face front-left, front-right, back-right, back-left, then emotes;
columns are stand, step, step. Gen 3 NPCs use nine frames (down, up, left,
then two walk frames each); right is the mirrored left. Front-left serves as
both down and left, back-left as up. Also draws two small original sprites
(the Digivice and a data-chip item pickup).

Writes graphics/object_events/pics/digimon/*.png + palettes and the generated
C headers listed in HEADERS. Sheets are cached by fetch_dwds.py.
"""
from collections import Counter
from pathlib import Path
import sys

from PIL import Image, ImageDraw

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "digimon_roster"))
from fetch_dwds import regions, sheet  # noqa: E402
from render import ROOT  # noqa: E402

# Constant suffix: (asset id, credit). All from redblueyellow sheets.
NPCS = {
    "JIJIMON": 48452, "LEOMON": 48597, "DIGITAMAMON": 48324, "MONZAEMON": 41256,
    "ANDROMON": 48685, "KUWAGAMON": 41254,
}
FRAME = 32
ORDER = [(0, 0), (3, 0), (0, 0), (0, 1), (0, 2), (3, 1), (3, 2), (0, 1), (0, 2)]
PICS = ROOT / "graphics/object_events/pics/digimon"
PALS = ROOT / "graphics/object_events/palettes"
TAG_BASE = 0x1180  # free range below OBJ_EVENT_PAL_TAG_NONE (0x11FF)


def field_cells(image):
    """The 3x5 grid of square panels on the right side of the sheet."""
    background = image.getpixel((image.width - 1, image.height - 1))
    cells = [box for _, box in regions(image, background)
             if 28 <= box[2] - box[0] <= 40 and 28 <= box[3] - box[1] <= 70]
    cells = [box for box in cells if box[0] > image.width * 0.6]
    cells.sort(key=lambda box: (box[1], box[0]))
    rows = []
    for box in cells:
        if rows and abs(rows[-1][0][1] - box[1]) < 8:
            rows[-1].append(box)
        else:
            rows.append([box])
    rows = [sorted(row)[:3] for row in rows if len(row) >= 3]
    if len(rows) < 4:
        raise ValueError(f"Field grid not found ({len(rows)} rows)")
    return rows


def cut(image, box, size):
    cell = image.crop(box).convert("RGBA")
    panel = Counter(cell.convert("RGB").getdata()).most_common(1)[0][0]
    pixels = cell.load()
    for y in range(cell.height):
        for x in range(cell.width):
            if pixels[x, y][:3] == panel:
                pixels[x, y] = (0, 0, 0, 0)
    frame = Image.new("RGBA", (size, size))
    bbox = cell.getbbox()
    if bbox:
        sprite = cell.crop(bbox)
        sprite.thumbnail((size, size), Image.Resampling.NEAREST)
        frame.paste(sprite, ((size - sprite.width) // 2, size - sprite.height), sprite)
    return frame


def indexed(strip):
    """Quantize to 15 colours plus transparent index 0."""
    alpha = strip.getchannel("A")
    rgb = Image.new("RGB", strip.size, (0, 0, 0))
    rgb.paste(strip, mask=alpha)
    quantized = rgb.quantize(15, dither=Image.Dither.NONE)
    palette = quantized.getpalette()[:45]
    out = Image.new("P", strip.size, 0)
    out.putpalette([0, 0, 0] + palette + [0] * (45 - len(palette)))
    data = [0 if a < 128 else index + 1 for index, a in zip(quantized.getdata(), alpha.getdata())]
    out.putdata(data)
    return out


def write_pal(path, image):
    colors = image.getpalette()[:48]
    lines = ["JASC-PAL", "0100", "16"] + [f"{colors[i]} {colors[i + 1]} {colors[i + 2]}" for i in range(0, 48, 3)]
    path.write_text("\n".join(lines) + "\n")


def draw_small(name):
    """16x16 original sprites: a Digivice and a glowing data chip."""
    image = Image.new("RGBA", (16, 16))
    draw = ImageDraw.Draw(image)
    if name == "DIGIVICE":
        draw.rounded_rectangle((3, 2, 12, 14), 3, fill=(232, 232, 240), outline=(40, 40, 56))
        draw.rectangle((5, 4, 10, 9), fill=(64, 168, 216), outline=(24, 56, 96))
        draw.point([(6, 11), (9, 11)], fill=(216, 64, 64))
        draw.line((7, 13, 8, 13), fill=(96, 96, 112))
    else:
        draw.polygon([(8, 2), (14, 8), (8, 14), (2, 8)], fill=(80, 200, 240), outline=(24, 72, 136))
        draw.polygon([(8, 5), (11, 8), (8, 11), (5, 8)], fill=(216, 248, 255))
    return image


def build():
    PICS.mkdir(parents=True, exist_ok=True)
    entries = []
    for index, (key, asset) in enumerate(NPCS.items()):
        image = sheet(asset)
        rows = field_cells(image)
        size = FRAME if rows[0][0][3] - rows[0][0][1] <= 40 else 2 * FRAME
        strip = Image.new("RGBA", (size * len(ORDER), size))
        for position, (row, column) in enumerate(ORDER):
            strip.paste(cut(image, rows[row][column], size), (position * size, 0))
        entries.append((key, size, len(ORDER), indexed(strip)))
    for key in ("DIGIVICE", "DATA_CHIP"):
        entries.append((key, 16, 1, indexed(draw_small(key))))
    for key, size, _, image in entries:
        image.save(PICS / f"{key.lower()}.png", bits=4, transparency=0)
        write_pal(PALS / f"digimon_{key.lower()}.pal", image)
    write_headers(entries)
    print(f"Built {len(entries)} Digimon object sprites.")


def symbol(key):
    return "Digimon" + "".join(part.capitalize() for part in key.split("_"))


def write_headers(entries):
    header = "// Generated by tools/digimon_maps/npc_sprites.py\n"
    gfx, tables, pointers, palettes, constants, tags = [], [], [], [], [], []
    for index, (key, size, frames, _) in enumerate(entries):
        name, tiles = symbol(key), size // 8
        tag = f"OBJ_EVENT_PAL_TAG_DIGIMON_{key}"
        gfx.append(f'const u32 gObjectEventPic_{name}[] = INCGFX_U32("graphics/object_events/pics/digimon/'
                   f'{key.lower()}.png", ".4bpp", "-mwidth {tiles} -mheight {tiles}");')
        gfx.append(f'const u16 gObjectEventPal_{name}[] = INCGFX_U16("graphics/object_events/palettes/'
                   f'digimon_{key.lower()}.pal", ".gbapal");')
        frame_list = "".join(f"    overworld_frame(gObjectEventPic_{name}, {tiles}, {tiles}, {i}),\n"
                             for i in range(frames))
        anims = "sAnimTable_Standard" if frames == 9 else "sAnimTable_Inanimate"
        tables.append(f"static const struct SpriteFrameImage sPicTable_{name}[] = {{\n{frame_list}}};\n\n"
                      f"const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_{name} = {{\n"
                      f"    .tileTag = TAG_NONE, .paletteTag = {tag}, .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,\n"
                      f"    .size = {size * size // 2}, .width = {size}, .height = {size}, .paletteSlot = PALSLOT_NPC_1,\n"
                      f"    .shadowSize = SHADOW_SIZE_{'M' if size == 32 else 'S'}, .inanimate = {'FALSE' if frames == 9 else 'TRUE'},\n"
                      f"    .compressed = FALSE, .tracks = TRACKS_FOOT,\n"
                      f"    .oam = &gObjectEventBaseOam_{size}x{size}, .subspriteTables = sOamTables_{size}x{size},\n"
                      f"    .anims = {anims}, .images = sPicTable_{name},\n}};\n")
        pointers.append(f"    [OBJ_EVENT_GFX_DIGIMON_{key}] = &gObjectEventGraphicsInfo_{name},")
        palettes.append(f"    {{gObjectEventPal_{name}, {tag}}},")
        constants.append(f"    OBJ_EVENT_GFX_DIGIMON_{key},")
        tags.append(f"#define {tag} 0x{TAG_BASE + index:04X}")
    out = ROOT / "src/data/object_events"
    externs = [f"extern const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_{symbol(key)};"
               for key, *_ in entries]
    # Included after object_event_graphics.h, before the pointer table.
    (out / "digimon_object_pics.h").write_text(header + "\n".join(gfx + externs) + "\n")
    # Included after object_event_graphics_info.h (needs anims, OAM and subsprite tables).
    (out / "digimon_object_info.h").write_text(header + "\n".join(tables))
    (out / "digimon_object_pointers.h").write_text(header + "\n".join(pointers) + "\n")
    (out / "digimon_object_palettes.h").write_text(header + "\n".join(palettes) + "\n")
    (ROOT / "include/constants/digimon_object_gfx.h").write_text(
        header + "#ifndef GUARD_CONSTANTS_DIGIMON_OBJECT_GFX_H\n#define GUARD_CONSTANTS_DIGIMON_OBJECT_GFX_H\n\n"
        + "\n".join(tags) + "\n\n// Enum members, expanded inside the OBJ_EVENT_GFX enum.\n#define DIGIMON_OBJECT_GFX \\\n"
        + " \\\n".join("    " + c.strip() for c in constants) + "\n\n#endif\n")


def build_intro():
    """New-game guide portrait: Jijimon's first battle pose in Birch's 64x64 slot."""
    from fetch_dwds import first_pose
    pose = first_pose(sheet(NPCS["JIJIMON"]))
    pose.thumbnail((62, 62), Image.Resampling.BOX)
    pose.putalpha(pose.getchannel("A").point(lambda value: 255 if value >= 110 else 0))
    canvas = Image.new("RGBA", (64, 64))
    canvas.paste(pose, ((64 - pose.width) // 2, 64 - pose.height), pose)
    indexed(canvas).save(ROOT / "graphics/birch_speech/birch.png", bits=4, transparency=0)


if __name__ == "__main__":
    build()
    build_intro()
