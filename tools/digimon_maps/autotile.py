"""Turn a grid of terrain classes into metatiles, using rules learned from Hoenn maps.

Every metatile in the existing maps that share a tileset pair is classified
(floor, wall, water, tall grass, sand, ice, tree). For each 3x3 neighbourhood of
classes we record which raw block value (metatile + collision + elevation) the
original designers used, and reuse the most common one. Trees use the explicit
rules measured from ~12,000 tree tiles (see tree_blocks).
"""
from collections import Counter, defaultdict
import json
import re
import struct

from render import ROOT, tileset_dir

BEHAVIORS = re.findall(r"^\s+(MB_\w+)", (ROOT / "include/constants/metatile_behaviors.h").read_text(), re.M)
WATER = {"MB_POND_WATER", "MB_DEEP_WATER", "MB_OCEAN_WATER", "MB_INTERIOR_DEEP_WATER", "MB_SOOTOPOLIS_DEEP_WATER"}
TREE_IDS = {0x1CE, 0x1CF, 0x1D4, 0x1D5, 0x1D6, 0x1D7, 0x1DC, 0x1DD, 0x1E4, 0x1E5, 0x1E6, 0x1E7}
GRASS, TALL, WATER_CLASS, SAND, ICE, FLOOR, WALL, TREE, PATH = "grass tall water sand ice floor wall tree path".split()
# Light dirt path (General): a 3x3 edge set around the centre tile 0x1D9.
PATH_IDS = {0x1D0, 0x1D1, 0x1D2, 0x1D8, 0x1D9, 0x1DA, 0x1E0, 0x1E1, 0x1E2}
WALKABLE = 0x3000  # elevation 3, no collision
BLOCKED = 0x0400   # elevation 0, collision 1


def attributes(symbol):
    data = (tileset_dir(symbol) / "metatile_attributes.bin").read_bytes()
    return [BEHAVIORS[value & 0xFF] if (value & 0xFF) < len(BEHAVIORS) else "?"
            for value in struct.unpack(f"<{len(data) // 2}H", data)]


class Tiles:
    def __init__(self, primary, secondary):
        self.primary, self.secondary = primary, secondary
        self.behaviors = attributes(primary)[:512] + attributes(secondary)

    def classify(self, block):
        metatile, blocked = block & 0x3FF, block & 0xC00
        behavior = self.behaviors[metatile] if metatile < len(self.behaviors) else "?"
        if self.primary == "gTileset_General" and metatile in TREE_IDS - {0x1CE, 0x1CF}:
            return TREE
        if self.primary == "gTileset_General" and metatile in PATH_IDS:
            return PATH
        if behavior in WATER:
            return WATER_CLASS
        if behavior == "MB_TALL_GRASS":
            return TALL
        if behavior in ("MB_SAND", "MB_DEEP_SAND"):
            return SAND
        if behavior in ("MB_ICE", "MB_THIN_ICE"):
            return ICE
        return WALL if blocked else FLOOR


def layouts_for(primary, secondary, only=None):
    for entry in json.loads((ROOT / "data/layouts/layouts.json").read_text())["layouts"]:
        if only is not None and entry.get("id") not in only:
            continue
        if entry.get("primary_tileset") == primary and entry.get("secondary_tileset") == secondary:
            data = (ROOT / entry["blockdata_filepath"]).read_bytes()
            yield entry["width"], entry["height"], struct.unpack(f"<{len(data) // 2}H", data)


OFFSETS = ((-1, -1), (0, -1), (1, -1), (-1, 0), (1, 0), (-1, 1), (0, 1), (1, 1))


def context(grid, x, y, full=True):
    height, width = len(grid), len(grid[0])
    own = grid[y][x]
    around = []
    for dx, dy in OFFSETS if full else ((0, -1), (-1, 0), (1, 0), (0, 1)):
        nx, ny = x + dx, y + dy
        around.append(grid[ny][nx] if 0 <= nx < width and 0 <= ny < height else own)
    return (own, *around)


class Learned:
    def __init__(self, primary, secondary, extra_sources=(), only=None):
        self.tiles = Tiles(primary, secondary)
        self.full, self.cross, self.single = defaultdict(Counter), defaultdict(Counter), defaultdict(Counter)
        sources = list(layouts_for(primary, secondary, only))
        for source in extra_sources:
            sources += list(layouts_for(primary, source))
        for width, height, blocks in sources:
            grid = [[self.tiles.classify(blocks[y * width + x]) for x in range(width)] for y in range(height)]
            for y in range(height):
                for x in range(width):
                    block = blocks[y * width + x]
                    self.full[context(grid, x, y)][block] += 1
                    self.cross[context(grid, x, y, False)][block] += 1
                    self.single[grid[y][x]][block] += 1

    def block(self, grid, x, y, prefer=None):
        # Rare full contexts are often one-off decorations; prefer a better-attested rule.
        for table, key, minimum in ((self.full, context(grid, x, y), 3), (self.cross, context(grid, x, y, False), 2),
                                    (self.single, grid[y][x], 1)):
            if key in table and sum(table[key].values()) >= minimum:
                return table[key].most_common(1)[0][0]
        raise KeyError(f"No learned tile for class {grid[y][x]!r}")


def tree_blocks(trees, width, height):
    """trees: set of (x, y) top-left corners of 2x2 trees. Returns {(x, y): block}.

    Rules measured from the Hoenn maps: tops use the edge variant only when the
    side, diagonal-up and up cells are all open; bottoms continue into a tree
    below or show the trunk-on-grass edge. A passable canopy cap sits above.
    """
    solid = set()
    for x, y in trees:
        solid |= {(x, y), (x + 1, y), (x, y + 1), (x + 1, y + 1)}

    def at(x, y):
        return (x, y) in solid or not (0 <= x < width and 0 <= y < height)

    out = {}
    for x, y in trees:
        out[(x, y)] = 0x1D4 if at(x - 1, y) or at(x - 1, y - 1) or at(x, y - 1) else 0x1D6
        out[(x + 1, y)] = 0x1D5 if at(x + 2, y) or at(x + 2, y - 1) or at(x + 1, y - 1) else 0x1D7
        if at(x, y + 2):
            out[(x, y + 1)], out[(x + 1, y + 1)] = 0x1DC, 0x1DD
        else:
            out[(x, y + 1)] = 0x1E4 if at(x - 1, y + 1) else 0x1E6
            out[(x + 1, y + 1)] = 0x1E5 if at(x + 2, y + 1) else 0x1E7
    blocks = {cell: tile | BLOCKED for cell, tile in out.items()}
    for x, y in trees:
        for cx, tile in ((x, 0x1CE), (x + 1, 0x1CF)):
            if (cx, y - 1) not in solid and y - 1 >= 0:
                blocks[(cx, y - 1)] = tile | WALKABLE
    return blocks
