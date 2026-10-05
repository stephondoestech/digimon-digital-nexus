#!/usr/bin/env python3
"""Render a map layout's metatiles to a PNG for review (no emulator needed).

Usage: render.py LAYOUT_ID [out.png] [--grid]
--grid overlays metatile coordinates every 5 tiles and marks impassable tiles.
"""
from pathlib import Path
import json
import re
import struct
import sys

from PIL import Image, ImageDraw

ROOT = Path(__file__).resolve().parents[2]
PRIMARY_TILES = 512
PRIMARY_METATILES = 512
PRIMARY_PALS = 6


def tileset_dir(symbol):
    """gTileset_RusturfTunnel -> data/tilesets/secondary/rusturf_tunnel (looked up, not guessed)."""
    for header in (ROOT / "src/data/tilesets").glob("*.h"):
        text = header.read_text()
        match = re.search(rf"const struct Tileset {symbol}\s*=\s*\{{(.*?)\}};", text, re.S)
        if match:
            tiles = re.search(r"\.tiles\s*=\s*(\w+)", match[1])[1]
            break
    else:
        raise KeyError(symbol)
    for graphics in [ROOT / "src/graphics.c", *(ROOT / "src/data/tilesets").glob("*.h")]:
        found = re.search(rf"{tiles}\[\]\s*=\s*INCGFX_\w+\(\"(data/tilesets/[^\"]+)/tiles\.png\"", graphics.read_text())
        if found:
            return ROOT / found[1]
    raise KeyError(tiles)


def load_tileset(path):
    tiles = Image.open(path / "tiles.png")
    tile_pixels = []
    for index in range((tiles.width // 8) * (tiles.height // 8)):
        x, y = index % (tiles.width // 8) * 8, index // (tiles.width // 8) * 8
        tile_pixels.append(tiles.crop((x, y, x + 8, y + 8)))
    palettes = []
    for number in range(16):
        lines = (path / "palettes" / f"{number:02}.pal").read_text().split("\n")[3:19]
        palettes.append([tuple(int(v) for v in line.split()) for line in lines if line.strip()])
    data = (path / "metatiles.bin").read_bytes()
    metatiles = [struct.unpack_from("<8H", data, offset) for offset in range(0, len(data), 16)]
    return tile_pixels, palettes, metatiles


class Renderer:
    def __init__(self, primary, secondary):
        self.primary = load_tileset(tileset_dir(primary))
        self.secondary = load_tileset(tileset_dir(secondary))
        # Rows 0-5 come from the primary palettes, 6-12 from the secondary.
        self.palettes = self.primary[1][:PRIMARY_PALS] + self.secondary[1][PRIMARY_PALS:13]
        self.cache = {}

    def tile(self, entry):
        index, hflip, vflip, pal = entry & 0x3FF, entry & 0x400, entry & 0x800, entry >> 12
        tiles = self.primary[0] if index < PRIMARY_TILES else self.secondary[0]
        index = index if index < PRIMARY_TILES else index - PRIMARY_TILES
        if index >= len(tiles) or pal >= len(self.palettes):
            return None
        palette = self.palettes[pal]
        source = tiles[index]
        image = Image.new("RGBA", (8, 8))
        pixels = image.load()
        for y in range(8):
            for x in range(8):
                value = source.getpixel((x, y))
                if value:
                    pixels[x, y] = palette[value] + (255,)
        if hflip:
            image = image.transpose(Image.Transpose.FLIP_LEFT_RIGHT)
        if vflip:
            image = image.transpose(Image.Transpose.FLIP_TOP_BOTTOM)
        return image

    def metatile(self, metatile_id):
        if metatile_id in self.cache:
            return self.cache[metatile_id]
        if metatile_id < PRIMARY_METATILES:
            entries = self.primary[2][metatile_id] if metatile_id < len(self.primary[2]) else None
        else:
            local = metatile_id - PRIMARY_METATILES
            entries = self.secondary[2][local] if local < len(self.secondary[2]) else None
        image = Image.new("RGBA", (16, 16), self.palettes[0][0] + (255,))
        if entries:
            for layer in (entries[:4], entries[4:]):
                for position, entry in enumerate(layer):
                    tile = self.tile(entry)
                    if tile:
                        image.alpha_composite(tile, (position % 2 * 8, position // 2 * 8))
        self.cache[metatile_id] = image
        return image


def layout(layout_id):
    for entry in json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"]:
        if entry.get("id") == layout_id:
            return entry
    raise KeyError(layout_id)


def render_blocks(entry, blocks, grid=False):
    renderer = Renderer(entry["primary_tileset"], entry["secondary_tileset"])
    width, height = entry["width"], entry["height"]
    image = Image.new("RGBA", (width * 16, height * 16))
    draw = ImageDraw.Draw(image)
    for index, block in enumerate(blocks):
        x, y = index % width * 16, index // width * 16
        image.alpha_composite(renderer.metatile(block & 0x3FF), (x, y))
        if grid and block & 0xC00:
            draw.line((x, y, x + 15, y + 15), fill=(255, 0, 0, 160))
    if grid:
        for x in range(0, width, 5):
            draw.text((x * 16 + 1, 1), str(x), fill="yellow")
        for y in range(0, height, 5):
            draw.text((1, y * 16 + 1), str(y), fill="yellow")
    return image


def main():
    layout_id = sys.argv[1]
    out = Path(sys.argv[2]) if len(sys.argv) > 2 and not sys.argv[2].startswith("--") else Path(f"{layout_id}.png")
    entry = layout(layout_id)
    data = (ROOT / entry["blockdata_filepath"]).read_bytes()
    blocks = struct.unpack(f"<{len(data) // 2}H", data)
    render_blocks(entry, blocks, "--grid" in sys.argv).save(out)
    print(out)


if __name__ == "__main__":
    main()
