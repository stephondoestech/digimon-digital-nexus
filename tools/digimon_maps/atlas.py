#!/usr/bin/env python3
"""Render a labelled metatile atlas: atlas.py PRIMARY SECONDARY out.png [first] [count]."""
import sys
from PIL import Image, ImageDraw
from render import Renderer

primary, secondary, out = sys.argv[1:4]
first = int(sys.argv[4]) if len(sys.argv) > 4 else 0
count = int(sys.argv[5]) if len(sys.argv) > 5 else 512
renderer = Renderer(primary, secondary)
columns, scale = 16, 2
image = Image.new("RGB", (columns * 16 * scale, (count + columns - 1) // columns * (16 * scale + 10)), "white")
draw = ImageDraw.Draw(image)
for offset in range(count):
    tile = renderer.metatile(first + offset).resize((16 * scale, 16 * scale), Image.Resampling.NEAREST)
    x, y = offset % columns * 16 * scale, offset // columns * (16 * scale + 10)
    image.paste(tile, (x, y + 10), tile)
    draw.text((x + 1, y), f"{first + offset:x}", fill="black")
image.save(out)
