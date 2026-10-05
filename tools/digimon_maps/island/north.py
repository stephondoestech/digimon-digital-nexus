"""Overdell, Mt. Infinity and the cave inside it (end of File Island)."""
from .common import CAVE, OUTDOOR, SIZE, STAMPS, TREE_BORDER, Canvas, item, opening


def overdell():
    c = Canvas(SIZE, SIZE).border_forest(2)
    for side in ("up", "down", "left", "right"):
        opening(c, side)
    c.forest(8, 8, 11, 11).forest(20, 8, 23, 11).forest(8, 20, 11, 23).forest(20, 20, 23, 23)
    c.rect(",", 4, 4, 7, 11).rect(",", 24, 20, 27, 27)
    return {
        "name": "FileIsland_Overdell", "mapsec": "MAPSEC_OVERDELL", "mapsec_name": "OVERDELL",
        "primary": "gTileset_General", "secondary": "gTileset_Facility", "legend": OUTDOOR,
        "learn_only": ("LAYOUT_MT_PYRE_EXTERIOR", "LAYOUT_MT_PYRE_SUMMIT"),
        "ascii": c.ascii(), "border": TREE_BORDER, "music": "MUS_MT_PYRE_EXTERIOR", "weather": "WEATHER_FOG_HORIZONTAL",
        "objects": [item(5, 26, "ITEM_DIGI_EGG_SINCERITY", "FLAG_ITEM_OVERDELL_DIGI_EGG_SINCERITY")],
        "connections": [("up", "MAP_FILE_ISLAND_MT_INFINITY", 0), ("down", "MAP_FILE_ISLAND_NATIVE_FOREST", 0),
                        ("left", "MAP_FILE_ISLAND_FREEZELAND", 0), ("right", "MAP_FILE_ISLAND_FACTORIAL_TOWN", 0)],
        "wild": {"land_mons": (["BAKOMON", "GHOSTMON", "TSUKAIMON", ("BAKEMON", 24, 27), "DEMIDEVMON",
                                ("DEXDORUMON", 25, 27), "PHASCOMON", ("EYESMON", 25, 27)], 20, 24)},
    }


def mt_infinity():
    c = Canvas(SIZE, 40, "#").rect(".", 4, 4, 27, 35)
    opening(c, "down")
    c.rect("#", 4, 4, 11, 13).rect("#", 20, 4, 27, 13).rect("#", 4, 22, 11, 27).rect("#", 20, 18, 27, 27)
    return {
        "name": "FileIsland_MtInfinity", "mapsec": "MAPSEC_MT_INFINITY", "mapsec_name": "MT. INFINITY",
        "primary": "gTileset_General", "secondary": "gTileset_Lavaridge", "legend": OUTDOOR,
        "learn_only": ("LAYOUT_JAGGED_PASS", "LAYOUT_MT_CHIMNEY"),
        "ascii": c.ascii(), "border": [0x271] * 4, "stamp_defs": STAMPS, "music": "MUS_MT_CHIMNEY",
        "weather": "WEATHER_SHADE", "stamps": [("mound_small", 14, 4)],
        "connections": [("down", "MAP_FILE_ISLAND_OVERDELL", 0)],
        "warps": [(15, 6, "MAP_FILE_ISLAND_MT_INFINITY_CAVE", 0)],
        "wild": {"land_mons": ([("DEVIDRAMON", 30, 34), ("AIRDRAMON", 30, 34), ("DIATRYMON", 30, 33),
                                ("AKATORIMON", 30, 33), ("GARGOYLMON", 31, 34), ("BOOGIEMON", 31, 34)], 30, 34)},
    }


def mt_infinity_cave():
    c = Canvas(28, 28, "#").rect(".", 3, 20, 24, 24).rect(".", 3, 3, 6, 24).rect(".", 3, 3, 24, 6)
    c.rect(".", 21, 6, 24, 16).rect(".", 10, 10, 21, 16)
    return {
        "name": "FileIsland_MtInfinityCave", "mapsec": "MAPSEC_MT_INFINITY", "mapsec_name": "MT. INFINITY",
        "primary": "gTileset_General", "secondary": "gTileset_Cave", "legend": CAVE,
        "ascii": c.ascii(), "border": [0x2D9] * 4, "stamp_defs": STAMPS,
        "map_type": "MAP_TYPE_UNDERGROUND", "music": "MUS_SEALED_CHAMBER", "escape": True,
        "stamps": [("cave_exit", 12, 25)],
        "warps": [(13, 25, "MAP_FILE_ISLAND_MT_INFINITY", 0)],
        "objects": [item(12, 12, "ITEM_DIGI_EGG_MIRACLES", "FLAG_ITEM_MT_INFINITY_CAVE_DIGI_EGG_MIRACLES")],
        "wild": {"land_mons": ([("DEVIMON", 33, 37), ("DEVIDRAMON", 33, 37), ("DARKTYRMON", 34, 37),
                                ("BOOGIEMON", 33, 36), ("GARGOYLMON", 33, 36), ("FANGMON", 33, 36)], 33, 37)},
    }


def maps():
    return [overdell(), mt_infinity(), mt_infinity_cave()]
