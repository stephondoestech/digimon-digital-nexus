#!/usr/bin/env python3
"""Generate File Island maps from tools/digimon_maps/island specs.

Writes layouts (map.bin/border.bin + layouts.json), map.json files, the
gMapGroup_FileIsland group, MAPSEC names and wild encounter tables. Hand-written
scripts.inc files are created once with a stub and never overwritten.
Run in the dev container: python3 tools/digimon_maps/build.py [--preview DIR]
"""
from pathlib import Path
import json
import re
import struct
import sys

from autotile import Learned, tree_blocks, TREE
from render import ROOT, render_blocks

GROUP = "gMapGroup_FileIsland"
_learned = {}


def learned(primary, secondary, extra, only=None):
    key = (primary, secondary, tuple(extra), tuple(only or ()))
    if key not in _learned:
        _learned[key] = Learned(primary, secondary, extra, only)
    return _learned[key]


def stamp_blocks(layout_id, x, y, width, height):
    entry = next(e for e in json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"]
                 if e.get("id") == layout_id)
    data = (ROOT / entry["blockdata_filepath"]).read_bytes()
    blocks = struct.unpack(f"<{len(data) // 2}H", data)
    return [[blocks[(y + dy) * entry["width"] + x + dx] for dx in range(width)] for dy in range(height)]


def paint(spec):
    """ASCII rows + legend -> list of raw block values."""
    rows = spec["ascii"].strip("\n").split("\n")
    height, width = len(rows), len(rows[0])
    assert all(len(row) == width for row in rows), f"{spec['name']}: ragged ascii"
    legend = spec["legend"]
    trees = {(x, y) for y in range(height) for x in range(width) if rows[y][x] == "T"}
    grid = [[TREE if rows[y][x] in "Tt" else legend[rows[y][x]] for x in range(width)] for y in range(height)]
    for x, y in trees:
        assert rows[y + 1][x] == "t" and rows[y + 1][x + 1] == "t" and rows[y][x + 1] in "Tt", \
            f"{spec['name']}: tree at {x},{y} must be 'T?' over 'tt'"
        grid[y][x + 1] = TREE
    tiles = learned(spec["primary"], spec["secondary"], spec.get("learn_from", ()), spec.get("learn_only"))
    blocks = [[0 if grid[y][x] == TREE else tiles.block(grid, x, y) for x in range(width)] for y in range(height)]
    for (x, y), block in tree_blocks(trees, width, height).items():
        if 0 <= y < height and 0 <= x < width:
            blocks[y][x] = block
    for name, x, y in spec.get("stamps", []):
        source = {**STAMPS, **spec.get("stamp_defs", {})}[name]
        for dy, row in enumerate(stamp_blocks(*source)):
            for dx, block in enumerate(row):
                blocks[y + dy][x + dx] = block
    for (x, y), block in spec.get("blocks", {}).items():
        blocks[y][x] = block
    return width, height, [block for row in blocks for block in row]


# Building/feature stamps copied from Hoenn maps: (layout, x, y, width, height).
STAMPS = {
    "house": ("LAYOUT_OLDALE_TOWN", 3, 3, 5, 5),          # door at (+2, +4)
    "center": ("LAYOUT_OLDALE_TOWN", 4, 12, 5, 5),        # door at (+2, +4)
    "mart": ("LAYOUT_OLDALE_TOWN", 12, 3, 5, 4),          # door at (+2, +3)
}


def write_layout(spec, width, height, blocks):
    name = spec["name"]
    directory = ROOT / "data/layouts" / name
    directory.mkdir(parents=True, exist_ok=True)
    (directory / "map.bin").write_bytes(struct.pack(f"<{len(blocks)}H", *blocks))
    (directory / "border.bin").write_bytes(struct.pack("<4H", *spec["border"]))
    path = ROOT / "data/layouts/layouts.json"
    data = json.loads(path.read_text())
    layout_id = "LAYOUT_" + upper(name)
    entry = {"id": layout_id, "name": name + "_Layout", "width": width, "height": height,
             "primary_tileset": spec["primary"], "secondary_tileset": spec["secondary"],
             "border_filepath": f"data/layouts/{name}/border.bin",
             "blockdata_filepath": f"data/layouts/{name}/map.bin", "layout_version": "emerald"}
    layouts = [e for e in data["layouts"] if e.get("id") != layout_id]
    index = next((i for i, e in enumerate(data["layouts"]) if e.get("id") == layout_id), len(layouts))
    layouts.insert(index, entry)
    data["layouts"] = layouts
    path.write_text(json.dumps(data, indent=2) + "\n")
    return layout_id


def upper(name):
    """FileIsland_NativeForest -> FILE_ISLAND_NATIVE_FOREST (matches mapjson's naming)."""
    return re.sub(r"(?<=[a-z])(?=[A-Z])", "_", name).upper().replace("__", "_")


def write_map(spec, layout_id):
    name = spec["name"]
    directory = ROOT / "data/maps" / name
    directory.mkdir(parents=True, exist_ok=True)
    data = {
        "id": "MAP_" + upper(name), "name": name, "layout": layout_id,
        "music": spec.get("music", "MUS_ROUTE101"), "region": "REGION_HOENN",
        "region_map_section": spec["mapsec"], "requires_flash": False,
        "weather": spec.get("weather", "WEATHER_SUNNY"), "map_type": spec.get("map_type", "MAP_TYPE_ROUTE"),
        "allow_cycling": spec.get("map_type") != "MAP_TYPE_INDOOR", "allow_escaping": spec.get("escape", False),
        "allow_running": True, "show_map_name": spec.get("show_name", True),
        "battle_scene": "MAP_BATTLE_SCENE_NORMAL",
        "connections": [{"map": target, "offset": offset, "direction": direction}
                        for direction, target, offset in spec.get("connections", [])] or None,
        "object_events": spec.get("objects", []),
        "warp_events": [{"x": x, "y": y, "elevation": 0, "dest_map": dest, "dest_warp_id": str(warp)}
                        for x, y, dest, warp in spec.get("warps", [])],
        "coord_events": spec.get("coords", []),
        "bg_events": spec.get("signs", []),
    }
    if spec.get("shared_scripts"):
        data["shared_scripts_map"] = spec["shared_scripts"]
    (directory / "map.json").write_text(json.dumps(data, indent=2) + "\n")
    scripts = directory / "scripts.inc"
    if not scripts.exists():
        scripts.write_text(f"{name}_MapScripts::\n\t.byte 0\n")
    return data["id"]


def register(specs):
    path = ROOT / "data/maps/map_groups.json"
    groups = json.loads(path.read_text())
    if GROUP not in groups["group_order"]:
        groups["group_order"].append(GROUP)
    groups[GROUP] = [spec["name"] for spec in specs]
    path.write_text(json.dumps(groups, indent=2) + "\n")

    path = ROOT / "src/data/region_map/region_map_sections.json"
    sections = json.loads(path.read_text())
    known = {section["id"] for section in sections["map_sections"]}
    for spec in specs:
        if spec["mapsec"] not in known:
            # Off the Hoenn region map until File Island gets its own region map.
            sections["map_sections"].append({"id": spec["mapsec"], "name": spec["mapsec_name"],
                                             "x": 0, "y": 0, "width": 0, "height": 0})
            known.add(spec["mapsec"])
    path.write_text(json.dumps(sections, indent=2) + "\n")


BEGIN, END = "\t@ File Island maps (generated by tools/digimon_maps)\n", "\t@ End File Island maps\n"


def include_scripts(specs):
    path = ROOT / "data/event_scripts.s"
    text = path.read_text()
    block = BEGIN + "".join(f'\t.include "data/maps/{spec["name"]}/scripts.inc"\n' for spec in specs) + END
    if BEGIN in text:
        start, end = text.index(BEGIN), text.index(END) + len(END)
        text = text[:start] + block + text[end:]
    else:
        anchor = '\t.include "data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc"\n'
        text = text.replace(anchor, anchor + block, 1)
    path.write_text(text)


def main():
    from island import MAPS
    preview = Path(sys.argv[sys.argv.index("--preview") + 1]) if "--preview" in sys.argv else None
    for spec in MAPS:
        if "layout" in spec:
            layout_id = spec["layout"]
        else:
            width, height, blocks = paint(spec)
            layout_id = write_layout(spec, width, height, blocks)
            if preview:
                preview.mkdir(parents=True, exist_ok=True)
                entry = {"primary_tileset": spec["primary"], "secondary_tileset": spec["secondary"],
                         "width": width, "height": height}
                render_blocks(entry, blocks, True).save(preview / f"{spec['name']}.png")
        spec["map_id"] = write_map(spec, layout_id)
    register(MAPS)
    include_scripts(MAPS)
    from encounters import write_encounters
    write_encounters(MAPS)
    print(f"Built {len(MAPS)} File Island maps.")


if __name__ == "__main__":
    main()
