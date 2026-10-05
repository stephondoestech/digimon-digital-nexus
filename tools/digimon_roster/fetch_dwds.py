#!/usr/bin/env python3
"""Fetch Digimon World DS battle sheets and cut each Digimon's first battle pose.

Sheets are ripped by redblueyellow for The Spriters Resource; see ASSET_SOURCES.md.
"""
from collections import Counter
import re
import sys
from urllib.request import Request, urlopen

from PIL import Image

from catalog import ROOT, UPSTREAM
from curated import ART_ONLY, CURATED

SITE = "https://www.spriters-resource.com"
GAME = "/ds_dsi/dgmnworldds/asset/{}/"
CACHE = UPSTREAM / "dwds"


def get(url, referer=SITE):
    request = Request(url, headers={"User-Agent": "Mozilla/5.0", "Referer": referer})
    with urlopen(request, timeout=45) as response:
        return response.read()


def sheet(asset):
    path = CACHE / f"{asset}.png"
    if not path.exists():
        page_url = SITE + GAME.format(asset)
        page = get(page_url).decode("utf-8", "replace")
        media = re.search(rf"/media/assets/\d+/{asset}\.png[^\"' ]*", page)
        if not media:
            raise ValueError(f"No sheet image on {page_url}")
        data = get(SITE + media[0], page_url)
        if not data.startswith(b"\x89PNG\r\n\x1a\n"):
            raise ValueError(f"Not a PNG: {page_url}")
        CACHE.mkdir(parents=True, exist_ok=True)
        path.write_bytes(data)
    return Image.open(path).convert("RGB")


def regions(image, background):
    """Bounding boxes of 4-connected areas that are not the sheet background."""
    width, height = image.size
    pixels = image.load()
    seen = bytearray(width * height)
    boxes = []
    for start in range(width * height):
        x, y = start % width, start // width
        if seen[start] or pixels[x, y] == background:
            continue
        seen[start] = 1
        stack, box, area = [start], [x, y, x, y], 0
        while stack:
            index = stack.pop()
            px, py = index % width, index // width
            area += 1
            box = [min(box[0], px), min(box[1], py), max(box[2], px), max(box[3], py)]
            for nx, ny in ((px + 1, py), (px - 1, py), (px, py + 1), (px, py - 1)):
                if 0 <= nx < width and 0 <= ny < height:
                    neighbour = ny * width + nx
                    if not seen[neighbour] and pixels[nx, ny] != background:
                        seen[neighbour] = 1
                        stack.append(neighbour)
        boxes.append((area, (box[0], box[1], box[2] + 1, box[3] + 1)))
    return boxes


def first_pose(image, box=None):
    """The sheets lay battle poses on coloured panels; the first panel is the idle pose."""
    background = image.getpixel((image.width - 1, image.height - 1))
    if box is None:
        panels = sorted(regions(image, background), reverse=True)[:5]
        top = min(box[1] for _, box in panels)
        _, box = min((item for item in panels if item[1][1] < top + 30), key=lambda item: item[1][0])
    crop = image.crop(box).convert("RGBA")
    panel = Counter(crop.convert("RGB").getdata()).most_common(1)[0][0]
    pixels = crop.load()
    for y in range(crop.height):
        for x in range(crop.width):
            if pixels[x, y][:3] in (panel, background):
                pixels[x, y] = (0, 0, 0, 0)
    crop = crop.crop(crop.getbbox())
    # Area-average down to portrait size here; fit() uses nearest-neighbour, which
    # drops the thin limbs and outlines of these large DS sprites.
    if max(crop.size) > 62:
        crop.thumbnail((62, 62), Image.Resampling.BOX)
        crop.putalpha(crop.getchannel("A").point(lambda value: 255 if value >= 110 else 0))
    return crop


def main(only=()):
    for row in list(CURATED) + list(ART_ONLY):
        if only and row["key"] not in only:
            continue
        destination = ROOT / "graphics/pokemon" / row["slug"] / "source_front.png"
        destination.parent.mkdir(parents=True, exist_ok=True)
        first_pose(sheet(row["asset"]), row.get("box")).save(destination)
        print(f"Cut {row['name']} from asset {row['asset']}", flush=True)


if __name__ == "__main__":
    main(set(sys.argv[1:]))
