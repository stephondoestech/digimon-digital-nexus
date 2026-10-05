"""Native Forest and the Ancient Ruins dungeon (the playtest slice route)."""
from .common import (CAVE, LADDER_DOWN, LADDER_UP, OUTDOOR, SIZE, STAMPS, TREE_BORDER, Canvas,
                     gate, item, obj, opening)

F = "FileIsland_NativeForest"
CAVE_TILES = {"primary": "gTileset_General", "secondary": "gTileset_Cave", "legend": CAVE,
              "border": [0x2D9] * 4, "stamp_defs": STAMPS, "map_type": "MAP_TYPE_UNDERGROUND",
              "music": "MUS_SEALED_CHAMBER", "escape": True, "mapsec": "MAPSEC_ANCIENT_RUINS",
              "mapsec_name": "ANCIENT RUINS"}


def native_forest():
    c = Canvas(SIZE, SIZE).forest()
    for side in ("up", "down", "left", "right"):
        opening(c, side)
    c.rect(".", 14, 0, 17, 31).rect(".", 0, 14, 31, 17)          # crossroads
    c.rect(".", 18, 8, 21, 11).rect(".", 20, 4, 29, 11)           # path to the ruins clearing
    c.rect(",", 6, 18, 13, 27).rect(",", 18, 20, 27, 27)          # southern grass
    c.rect(",", 4, 8, 11, 13).rect(",", 22, 4, 29, 5)
    c.rect(".", 10, 18, 13, 21).rect(".", 18, 18, 21, 21)
    return {
        "name": F, "mapsec": "MAPSEC_NATIVE_FOREST", "mapsec_name": "NATIVE FOREST",
        "primary": "gTileset_General", "secondary": "gTileset_Fortree", "legend": OUTDOOR,
        "learn_from": ("gTileset_Petalburg", "gTileset_Rustboro"),
        "ascii": c.ascii(), "border": TREE_BORDER, "stamp_defs": STAMPS, "music": "MUS_ROUTE119",
        "stamps": [("mound", 22, 6)],
        "connections": [("up", "MAP_FILE_ISLAND_OVERDELL", 0), ("down", "MAP_FILE_ISLAND_PRIMARY_VILLAGE", 0),
                        ("left", "MAP_FILE_ISLAND_DRAGON_EYE_LAKE", 0), ("right", "MAP_FILE_ISLAND_GEAR_SAVANNA", 0)],
        "warps": [(24, 9, "MAP_FILE_ISLAND_ANCIENT_RUINS_1F", 0)],
        "objects": gate(F, [(x, 3) for x in range(14, 18)] + [(3, y) for y in range(14, 18)]
                        + [(28, y) for y in range(14, 18)]),
        "wild": {"land_mons": ([("KUNEMON", 3, 5), ("FLORAMON", 3, 5), ("GOBLIMON", 4, 6), ("ELECMON", 4, 6),
                                ("MUSHROOMON", 5, 7), ("LABRAMON", 5, 7), ("ARURAUMON", 6, 8), ("DOKUNEMON", 6, 8),
                                ("FANBEEMON", 7, 9), ("LALAMON", 7, 9), ("KUNEMON", 9, 10), ("ELECMON", 9, 10)], 3, 6)},
    }


def ruins_1f():
    c = Canvas(SIZE, 26, "#")
    c.rect(".", 12, 15, 19, 23).rect(".", 4, 15, 11, 18).rect(".", 4, 4, 7, 18)
    c.rect(".", 4, 4, 20, 7).rect(".", 22, 4, 27, 12).rect(".", 20, 10, 27, 12).rect(".", 24, 12, 27, 20)
    return {**CAVE_TILES, "name": "FileIsland_AncientRuins_1F", "ascii": c.ascii(),
            "stamps": [("cave_exit", 14, 23)], "blocks": {(26, 18): LADDER_UP},
            "warps": [(15, 23, "MAP_FILE_ISLAND_NATIVE_FOREST", 0), (26, 18, "MAP_FILE_ISLAND_ANCIENT_RUINS_2F", 0)],
            "wild": {"land_mons": ([("GOTSUMON", 9, 11), ("BAKOMON", 9, 11), ("GHOSTMON", 10, 12),
                                    ("HAGURUMON", 10, 12), ("DEMIDEVMON", 10, 12), ("KERAMON", 11, 12),
                                    ("TSUKAIMON", 11, 13), ("ARMADILMON", 11, 13), ("GOTSUMON", 12, 13),
                                    ("BAKOMON", 12, 13), ("GHOSTMON", 13, 14), ("HAGURUMON", 13, 14)], 9, 12)}}


def ruins_2f():
    c = Canvas(26, 26, "#")
    c.rect(".", 3, 18, 22, 22).rect(".", 3, 3, 6, 22).rect(".", 3, 3, 22, 6).rect(".", 10, 10, 15, 14)
    c.rect(".", 12, 6, 13, 10).rect(".", 19, 6, 22, 14)
    return {**CAVE_TILES, "name": "FileIsland_AncientRuins_2F", "ascii": c.ascii(),
            "blocks": {(20, 21): LADDER_DOWN, (12, 11): LADDER_UP},
            "warps": [(20, 21, "MAP_FILE_ISLAND_ANCIENT_RUINS_1F", 1), (12, 11, "MAP_FILE_ISLAND_RUINS_SANCTUM", 0)],
            "objects": [item(4, 4, "ITEM_DIGI_EGG_COURAGE", "FLAG_ITEM_ANCIENT_RUINS_2F_DIGI_EGG_COURAGE")],
            "wild": {"land_mons": ([("BAKOMON", 12, 14), ("GHOSTMON", 12, 14), ("PHASCOMON", 13, 15),
                                    ("TSUKAIMON", 13, 15), ("SUNARZAMON", 13, 15), ("GOTSUMON", 14, 15),
                                    ("KERAMON", 14, 16), ("DEMIDEVMON", 14, 16), ("PHASCOMON", 15, 16),
                                    ("TSUKAIMON", 15, 16), ("BAKOMON", 16, 17), ("SUNARZAMON", 16, 17)], 12, 15)}}


def sanctum():
    c = Canvas(16, 16, "#").rect(".", 3, 3, 12, 12)
    return {**CAVE_TILES, "name": "FileIsland_RuinsSanctum", "mapsec": "MAPSEC_RUINS_SANCTUM",
            "mapsec_name": "RUINS SANCTUM", "ascii": c.ascii(), "escape": False,
            "blocks": {(7, 11): LADDER_DOWN},
            "warps": [(7, 11, "MAP_FILE_ISLAND_ANCIENT_RUINS_2F", 1)],
            "objects": [obj("OBJ_EVENT_GFX_DIGIMON_KUWAGAMON", 7, 5, "FileIsland_RuinsSanctum_EventScript_Kuwagamon",
                            "FLAG_DEFEATED_KUWAGAMON", local_id="LOCALID_RUINS_SANCTUM_KUWAGAMON")]}


def maps():
    return [native_forest(), ruins_1f(), ruins_2f(), sanctum()]
