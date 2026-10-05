"""Dragon Eye Lake, Freezeland and the Freeze Cavern below it."""
from .common import CAVE, OUTDOOR, SIZE, STAMPS, TREE_BORDER, Canvas, item, opening


def dragon_eye_lake():
    c = Canvas(SIZE, SIZE).border_forest(2)
    opening(c, "up")
    opening(c, "right")
    c.rect("~", 8, 8, 23, 21).rect(".", 14, 4, 17, 7)
    c.rect(",", 4, 22, 13, 27).rect(",", 20, 22, 27, 27).rect(",", 4, 4, 7, 11)
    return {
        "name": "FileIsland_DragonEyeLake", "mapsec": "MAPSEC_DRAGON_EYE_LAKE", "mapsec_name": "DRAGON EYE LAKE",
        "primary": "gTileset_General", "secondary": "gTileset_Fortree", "legend": OUTDOOR,
        "learn_from": ("gTileset_Petalburg",), "ascii": c.ascii(), "border": TREE_BORDER,
        "music": "MUS_ROUTE120", "weather": "WEATHER_SUNNY_CLOUDS",
        "connections": [("up", "MAP_FILE_ISLAND_FREEZELAND", 0), ("right", "MAP_FILE_ISLAND_NATIVE_FOREST", 0)],
        "wild": {
            "land_mons": (["SWIMMON", "OTAMAMON", "GIZAMON", "MODBETAMON", "KAMEMON", "SYAKOMON", "CRABMON",
                           "SANGOMON", "JELLYMON"], 16, 21),
            "water_mons": ([("SWIMMON", 18, 22), ("GEKOMON", 24, 26), ("OTAMAMON", 18, 22), ("GESOMON", 24, 27),
                            ("JELLYMON", 20, 23)], 18, 22),
        },
    }


def freezeland():
    c = Canvas(SIZE, SIZE).border_forest(2)
    opening(c, "down")
    opening(c, "right")
    c.forest(4, 4, 9, 7).forest(20, 22, 27, 27).forest(12, 20, 15, 23)
    c.rect(",", 18, 4, 27, 11).rect(",", 4, 18, 9, 27)
    return {
        "name": "FileIsland_Freezeland", "mapsec": "MAPSEC_FREEZELAND", "mapsec_name": "FREEZELAND",
        "primary": "gTileset_General", "secondary": "gTileset_Fallarbor", "legend": OUTDOOR,
        "learn_only": ("LAYOUT_ROUTE113", "LAYOUT_FALLARBOR_TOWN", "LAYOUT_ROUTE114"),
        "ascii": c.ascii(), "border": TREE_BORDER, "stamp_defs": STAMPS,
        "music": "MUS_ROUTE113", "weather": "WEATHER_SNOW", "stamps": [("mound_small", 7, 9)],
        "connections": [("down", "MAP_FILE_ISLAND_DRAGON_EYE_LAKE", 0), ("right", "MAP_FILE_ISLAND_OVERDELL", 0)],
        "warps": [(8, 11, "MAP_FILE_ISLAND_FREEZE_CAVERN", 0)],
        "wild": {"land_mons": (["PENGUINMON", "BULUCOMON", "PSYCHEMON", ("FRIGIMON", 25, 28), "PENGUINMON",
                                "BULUCOMON", ("GARURUMON", 26, 28)], 22, 26)},
    }


def freeze_cavern():
    c = Canvas(30, 24, "#").rect(".", 3, 3, 26, 20)
    c.rect("i", 6, 5, 23, 14)
    return {
        "name": "FileIsland_FreezeCavern", "mapsec": "MAPSEC_FREEZE_CAVERN", "mapsec_name": "FREEZE CAVERN",
        "primary": "gTileset_General", "secondary": "gTileset_Cave", "legend": CAVE,
        "ascii": c.ascii(), "border": [0x381] * 4, "stamp_defs": STAMPS,
        "map_type": "MAP_TYPE_UNDERGROUND", "music": "MUS_CAVE_OF_ORIGIN", "escape": True,
        "stamps": [("cave_exit", 13, 21)],
        "warps": [(14, 21, "MAP_FILE_ISLAND_FREEZELAND", 0)],
        "objects": [item(24, 4, "ITEM_DIGI_EGG_KNOWLEDGE", "FLAG_ITEM_FREEZE_CAVERN_DIGI_EGG_KNOWLEDGE")],
        "wild": {"land_mons": ([("FRIGIMON", 27, 30), "PENGUINMON", "BULUCOMON", "PSYCHEMON",
                                ("GARURUMON", 28, 30)], 24, 28)},
    }


def maps():
    return [dragon_eye_lake(), freezeland(), freeze_cavern()]
