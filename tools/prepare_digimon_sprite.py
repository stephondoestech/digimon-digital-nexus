#!/usr/bin/env python3
"""Generate Agumon's overworld and battle graphics from source PNGs."""

from pathlib import Path

from PIL import Image


ROOT = Path(__file__).resolve().parents[1]
ASSET_DIR = ROOT / "graphics" / "pokemon" / "agumon"
SOURCE_PATH = ASSET_DIR / "source.png"
SOURCE_BATTLE_PATH = ASSET_DIR / "source_battle.png"
SPRITE_PATH = ASSET_DIR / "overworld.png"
FRONT_PATH = ASSET_DIR / "front.png"
BACK_PATH = ASSET_DIR / "back.png"
ICON_PATH = ASSET_DIR / "icon.png"
PALETTE_PATHS = (ASSET_DIR / "overworld_normal.pal", ASSET_DIR / "overworld_shiny.pal")
SOURCE_SIZE = (48, 64)
SOURCE_FRAME_SIZE = (16, 16)
FRAME_SIZE = (32, 32)
PALETTE_COLORS = 16
FRAME_COORDINATES = ((0, 0), (1, 0), (2, 0), (0, 1), (1, 1), (2, 1))
BATTLE_SIZE = (64, 64)
BATTLE_SPRITE_SIZE = (48, 63)
ICON_SIZE = (32, 32)


def require_binary_alpha(image: Image.Image) -> None:
    alpha_values = set(image.getchannel("A").getdata())
    if not alpha_values <= {0, 255}:
        raise ValueError("source.png must use fully transparent or fully opaque pixels")


def make_indexed_spritesheet(source: Image.Image) -> Image.Image:
    spritesheet = Image.new("RGBA", (FRAME_SIZE[0] * len(FRAME_COORDINATES), FRAME_SIZE[1]), (0, 0, 0, 0))
    for output_index, (column, row) in enumerate(FRAME_COORDINATES):
        left = column * SOURCE_FRAME_SIZE[0]
        top = row * SOURCE_FRAME_SIZE[1]
        frame = source.crop((left, top, left + SOURCE_FRAME_SIZE[0], top + SOURCE_FRAME_SIZE[1]))
        frame = frame.resize(FRAME_SIZE, Image.Resampling.NEAREST)
        spritesheet.paste(frame, (output_index * FRAME_SIZE[0], 0))

    alpha = spritesheet.getchannel("A")
    colors = spritesheet.convert("RGB").quantize(
        colors=PALETTE_COLORS - 1,
        method=Image.Quantize.MEDIANCUT,
        dither=Image.Dither.NONE,
    )

    indexed = Image.new("P", spritesheet.size, 0)
    indexed.putpalette([0, 0, 0] + colors.getpalette()[: (PALETTE_COLORS - 1) * 3])
    indexed.putdata(
        [color + 1 if opacity else 0 for color, opacity in zip(colors.getdata(), alpha.getdata())]
    )
    indexed.info["transparency"] = 0
    return indexed


def write_palette(frame: Image.Image, path: Path) -> None:
    palette = frame.getpalette()
    lines = ["JASC-PAL", "0100", str(PALETTE_COLORS)]
    for index in range(PALETTE_COLORS):
        start = index * 3
        lines.append("{} {} {}".format(*palette[start : start + 3]))
    path.write_text("\n".join(lines) + "\n", encoding="ascii")


def load_rgba_source(path: Path) -> Image.Image:
    image = Image.open(path)
    if image.mode == "P":
        transparent_index = image.info.get("transparency", 0)
        alpha = Image.new("L", image.size)
        alpha.putdata([0 if index == transparent_index else 255 for index in image.getdata()])
        image = image.convert("RGBA")
        image.putalpha(alpha)
        return image
    return image.convert("RGBA")


def make_battle_sprite(source: Image.Image) -> Image.Image:
    opaque = source.getchannel("A").getbbox()
    if opaque is None:
        raise ValueError("battle source must contain opaque pixels")
    sprite = source.crop(opaque).resize(BATTLE_SPRITE_SIZE, Image.Resampling.NEAREST)
    canvas = Image.new("RGBA", BATTLE_SIZE, (0, 0, 0, 0))
    canvas.paste(sprite, ((BATTLE_SIZE[0] - BATTLE_SPRITE_SIZE[0]) // 2, 1), sprite)
    return canvas


def make_icon(source: Image.Image) -> Image.Image:
    opaque = source.getchannel("A").getbbox()
    if opaque is None:
        raise ValueError("battle source must contain opaque pixels")
    sprite = source.crop(opaque).resize((28, 30), Image.Resampling.NEAREST)
    canvas = Image.new("RGBA", ICON_SIZE, (0, 0, 0, 0))
    canvas.paste(sprite, ((ICON_SIZE[0] - sprite.width) // 2, 1), sprite)
    return canvas


def to_indexed_4bpp(image: Image.Image, palette: list[int] | None = None) -> Image.Image:
    alpha = image.getchannel("A")
    if palette is None:
        colors = image.convert("RGB").quantize(
            colors=PALETTE_COLORS - 1,
            method=Image.Quantize.MEDIANCUT,
            dither=Image.Dither.NONE,
        )
        palette = [0, 0, 0] + colors.getpalette()[: (PALETTE_COLORS - 1) * 3]
        pixels = [color + 1 for color in colors.getdata()]
    else:
        palette_colors = [tuple(palette[index : index + 3]) for index in range(3, PALETTE_COLORS * 3, 3)]
        pixels = []
        for color, opacity in zip(image.convert("RGB").getdata(), alpha.getdata()):
            if not opacity:
                pixels.append(0)
                continue
            pixels.append(min(
                range(len(palette_colors)),
                key=lambda index: sum((component - palette_colors[index][channel]) ** 2 for channel, component in enumerate(color)),
            ) + 1)

    indexed = Image.new("P", image.size, 0)
    indexed.putpalette(palette + [0] * (256 * 3 - len(palette)))
    indexed.putdata([pixel if opacity else 0 for pixel, opacity in zip(pixels, alpha.getdata())])
    indexed.info["transparency"] = 0
    return indexed


def main() -> None:
    source = Image.open(SOURCE_PATH).convert("RGBA")
    if source.size != SOURCE_SIZE:
        raise ValueError(f"expected {SOURCE_PATH} to be {SOURCE_SIZE}, got {source.size}")
    require_binary_alpha(source)

    spritesheet = make_indexed_spritesheet(source)
    spritesheet.save(SPRITE_PATH, bits=4, transparency=0)

    for path in PALETTE_PATHS:
        write_palette(spritesheet, path)

    battle_source = load_rgba_source(SOURCE_BATTLE_PATH)
    require_binary_alpha(battle_source)
    front = to_indexed_4bpp(make_battle_sprite(battle_source))
    front.save(FRONT_PATH, bits=4, transparency=0)
    shared_palette = front.getpalette()[: PALETTE_COLORS * 3]
    # A proper rear-facing battle asset is still pending; use the verified
    # front portrait for both orientations instead of shipping malformed art.
    back = front.copy()
    back.save(BACK_PATH, bits=4, transparency=0)
    # Party icons use the engine's shared icon palette, not the battle palette.
    icon_lines = (ROOT / "graphics/pokemon/icon_palettes/pal0.pal").read_text().splitlines()
    icon_palette = [int(value) for line in icon_lines[3:19] for value in line.split()]
    icon = to_indexed_4bpp(make_icon(battle_source), icon_palette)
    icon_sheet = Image.new("P", (32, 64), 0)
    icon_sheet.putpalette(icon.getpalette())
    icon_sheet.paste(icon, (0, 0))
    icon_sheet.paste(icon, (0, 32))
    icon_sheet.save(ICON_PATH, bits=4, transparency=0)


if __name__ == "__main__":
    main()
