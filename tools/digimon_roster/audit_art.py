#!/usr/bin/env python3
"""Produce labeled contact sheets for manual identification of imported portraits."""
import json
from pathlib import Path
from PIL import Image, ImageDraw

ROOT = Path(__file__).resolve().parents[2]


def main():
    rows = json.loads((ROOT / "tools/digimon_roster/manifest.json").read_text())["species"]
    output = ROOT / "build/digimon-art-audit"
    output.mkdir(parents=True, exist_ok=True)
    for offset in range(0, len(rows), 56):
        page = Image.new("RGB", (8 * 128, 7 * 146), "#d2d7dd")
        draw = ImageDraw.Draw(page)
        for index, row in enumerate(rows[offset:offset + 56]):
            sprite = Image.open(ROOT / "graphics/pokemon" / row["slug"] / "front.png").convert("RGBA")
            x, y = index % 8 * 128, index // 8 * 146
            page.paste(sprite.resize((128, 128), Image.Resampling.NEAREST), (x, y),
                       sprite.resize((128, 128), Image.Resampling.NEAREST))
            draw.text((x + 2, y + 130), f"{offset+index+1}: {row['name']}", fill="black")
        page.save(output / f"{offset // 56:02}.png")
    print(output)


if __name__ == "__main__":
    main()
