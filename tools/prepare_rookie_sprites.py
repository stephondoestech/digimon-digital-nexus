#!/usr/bin/env python3
"""Convert pinned Digimon portraits to GBA battle art and shared-palette icons."""
from pathlib import Path

from PIL import Image

from prepare_digimon_sprite import load_rgba_source, to_indexed_4bpp

ROOT = Path(__file__).resolve().parents[1]
NAMES = ("gabumon", "biyomon", "tentomon", "palmon", "gomamon", "patamon", "salamon")


def fit(source, size, bounds):
    opaque = source.getchannel("A").getbbox()
    if opaque is None:
        raise ValueError("Portrait is empty")
    sprite = source.crop(opaque)
    scale = min(bounds[0] / sprite.width, bounds[1] / sprite.height)
    sprite = sprite.resize((max(1, round(sprite.width * scale)),
                            max(1, round(sprite.height * scale))), Image.Resampling.NEAREST)
    canvas = Image.new("RGBA", size)
    canvas.paste(sprite, ((size[0] - sprite.width) // 2, size[1] - sprite.height), sprite)
    return canvas


def icon_palette():
    lines = (ROOT / "graphics/pokemon/icon_palettes/pal0.pal").read_text().splitlines()
    return [int(value) for line in lines[3:19] for value in line.split()]


def main():
    shared_icon_palette = icon_palette()
    for name in NAMES:
        directory = ROOT / "graphics/pokemon" / name
        source = load_rgba_source(directory / "source_front.png")
        if source.size != (64, 64):
            raise ValueError(f"Unexpected source dimensions for {name}: {source.size}")
        front = to_indexed_4bpp(fit(source, (64, 64), (62, 62)))
        front.save(directory / "front.png", bits=4, transparency=0)
        # The approved front-as-back policy applies to this initial roster too.
        front.save(directory / "back.png", bits=4, transparency=0)
        icon = to_indexed_4bpp(fit(source, (32, 32), (30, 30)), shared_icon_palette)
        # The icon engine reads two 32x32 frames using a global icon palette.
        sheet = Image.new("P", (32, 64), 0)
        sheet.putpalette(icon.getpalette())
        sheet.paste(icon, (0, 0))
        sheet.paste(icon, (0, 32))
        sheet.save(directory / "icon.png", bits=4, transparency=0)


if __name__ == "__main__":
    main()
