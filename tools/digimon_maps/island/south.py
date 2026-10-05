"""Primary Village (the slice hub), its interiors, and the shoreline below it."""
from .common import (FLOWER, OUTDOOR, SIGNPOST, SIZE, STAMPS, TREE_BORDER, Canvas, obj, opening,
                     sign, trigger)

V = "FileIsland_PrimaryVillage"


def village():
    c = Canvas(SIZE, SIZE).border_forest(2)
    opening(c, "up")
    opening(c, "down")
    c.rect("p", 14, 0, 17, 31).rect("p", 7, 13, 24, 18)          # main road and plaza
    c.rect("p", 7, 10, 9, 12).rect("p", 22, 10, 24, 12)           # to the terminal and shop
    c.rect("p", 7, 24, 13, 25)                                    # to the Elder's house
    c.rect("~", 21, 21, 26, 25)                                   # pond
    c.forest(4, 26, 9, 27).forest(22, 26, 27, 27)
    flowers = [(10, 11), (11, 11), (19, 11), (20, 11), (11, 20), (12, 20), (18, 20), (19, 20),
               (4, 11), (5, 11), (27, 11), (26, 11), (20, 23), (20, 24)]
    return {
        "name": V, "mapsec": "MAPSEC_PRIMARY_VILLAGE", "mapsec_name": "PRIMARY VILLAGE",
        "primary": "gTileset_General", "secondary": "gTileset_Petalburg", "legend": OUTDOOR,
        "ascii": c.ascii(), "border": TREE_BORDER, "stamp_defs": STAMPS,
        "map_type": "MAP_TYPE_TOWN", "music": "MUS_LITTLEROOT", "escape": False,
        "stamps": [("lab", 4, 5), ("house_small", 22, 6), ("house_big", 5, 19)],
        "blocks": {**{cell: FLOWER for cell in flowers}, (13, 11): SIGNPOST},
        "connections": [("up", "MAP_FILE_ISLAND_NATIVE_FOREST", 0), ("down", "MAP_FILE_ISLAND_SHORELINE", 0)],
        "warps": [(8, 9, "MAP_FILE_ISLAND_PRIMARY_VILLAGE_RECOVERY_TERMINAL", 0),
                  (23, 9, "MAP_FILE_ISLAND_PRIMARY_VILLAGE_SHOP", 0),
                  (8, 23, "MAP_FILE_ISLAND_PRIMARY_VILLAGE_ELDER_HOUSE", 0)],
        "objects": [
            obj("OBJ_EVENT_GFX_DIGIMON_DIGIVICE", 15, 15, f"{V}_EventScript_Digivice",
                "FLAG_FILE_ISLAND_DIGIVICE_TAKEN", local_id="LOCALID_PRIMARY_VILLAGE_DIGIVICE"),
            obj("OBJ_EVENT_GFX_DIGIMON_LEOMON", 17, 14, f"{V}_EventScript_Leomon",
                local_id="LOCALID_PRIMARY_VILLAGE_LEOMON"),
        ],
        "signs": [sign(13, 11, f"{V}_EventScript_Sign")],
        # Nobody leaves the village without a partner.
        "coords": [trigger(x, 5, f"{V}_EventScript_NeedPartnerNorth") for x in range(14, 18)]
        + [trigger(x, 26, f"{V}_EventScript_NeedPartnerSouth") for x in range(14, 18)],
    }


def interior(suffix, layout, warp_tiles, objects, music="MUS_LITTLEROOT"):
    name = f"{V}_{suffix}"
    return {
        "name": name, "layout": layout, "mapsec": "MAPSEC_PRIMARY_VILLAGE",
        "mapsec_name": "PRIMARY VILLAGE", "map_type": "MAP_TYPE_INDOOR", "show_name": False, "music": music,
        "warps": [(x, y, "MAP_FILE_ISLAND_PRIMARY_VILLAGE", door) for x, y, door in warp_tiles],
        "objects": [obj(*o[:4], **o[4]) for o in objects],
    }


def interiors():
    return [
        interior("RecoveryTerminal", "LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB", [(6, 12, 0), (7, 12, 0)], [
            ("OBJ_EVENT_GFX_DIGIMON_MONZAEMON", 7, 5, f"{V}_RecoveryTerminal_EventScript_Monzaemon",
             {"local_id": "LOCALID_PRIMARY_VILLAGE_MONZAEMON"}),
        ], music="MUS_BIRCH_LAB"),
        interior("Shop", "LAYOUT_MART", [(3, 7, 1), (4, 7, 1)], [
            ("OBJ_EVENT_GFX_DIGIMON_DIGITAMAMON", 1, 3, f"{V}_Shop_EventScript_Clerk",
             {"movement": "MOVEMENT_TYPE_FACE_RIGHT"}),
        ], music="MUS_POKE_MART"),
        interior("ElderHouse", "LAYOUT_HOUSE1", [(3, 8, 2), (4, 8, 2)], [
            ("OBJ_EVENT_GFX_DIGIMON_JIJIMON", 5, 4, f"{V}_ElderHouse_EventScript_Elder", {}),
        ]),
    ]


def shoreline():
    c = Canvas(SIZE, 20).border_forest(2)
    opening(c, "up")
    c.rect(".", 4, 4, 27, 9).rect(":", 0, 10, 31, 13).rect("~", 0, 14, 31, 19)
    c.forest(0, 4, 3, 9).forest(28, 4, 31, 9)
    c.rect(",", 6, 6, 11, 9).rect(",", 20, 6, 25, 9)
    return {
        "name": "FileIsland_Shoreline", "mapsec": "MAPSEC_FILE_BEACH", "mapsec_name": "FILE BEACH",
        "primary": "gTileset_General", "secondary": "gTileset_Rustboro", "legend": OUTDOOR,
        "ascii": c.ascii(), "border": [0x170] * 4, "music": "MUS_ROUTE104",
        "connections": [("up", "MAP_FILE_ISLAND_PRIMARY_VILLAGE", 0)],
        "blocks": {(16, 9): SIGNPOST},
        "signs": [sign(16, 9, "FileIsland_Shoreline_EventScript_Sign")],
        "wild": {
            "land_mons": ([("CRABMON", 2, 3), ("BETAMON", 2, 3), ("SYAKOMON", 2, 4), ("GAZIMON", 3, 4),
                           ("OTAMAMON", 3, 4), ("KAMEMON", 3, 4), ("CRABMON", 4, 5), ("BETAMON", 4, 5)], 2, 4),
            "water_mons": ([("BETAMON", 4, 6), ("OTAMAMON", 4, 6), ("SWIMMON", 5, 7), ("CRABMON", 5, 7),
                            ("GIZAMON", 6, 8)], 4, 7),
        },
    }


def maps():
    return [village(), *interiors(), shoreline()]
