"""Gear Savanna, the Drill Tunnel under it, and Factorial Town."""
from .common import CAVE, OUTDOOR, SIZE, STAMPS, TREE_BORDER, Canvas, item, obj, opening

T = "FileIsland_FactorialTown"


def gear_savanna():
    c = Canvas(SIZE, SIZE).border_forest(2)
    opening(c, "left")
    opening(c, "up")
    c.rect(":", 18, 18, 27, 27).rect(":", 4, 22, 11, 27).rect(",", 4, 4, 11, 11).rect(",", 20, 4, 27, 9)
    return {
        "name": "FileIsland_GearSavanna", "mapsec": "MAPSEC_GEAR_SAVANNA", "mapsec_name": "GEAR SAVANNA",
        "primary": "gTileset_General", "secondary": "gTileset_Mauville", "legend": OUTDOOR,
        "learn_only": ("LAYOUT_ROUTE111", "LAYOUT_ROUTE118", "LAYOUT_ROUTE117"),
        "ascii": c.ascii(), "border": TREE_BORDER, "stamp_defs": STAMPS, "music": "MUS_ROUTE110",
        "stamps": [("desert_mound", 20, 19)],
        "connections": [("left", "MAP_FILE_ISLAND_NATIVE_FOREST", 0), ("up", "MAP_FILE_ISLAND_FACTORIAL_TOWN", 0)],
        "warps": [(22, 22, "MAP_FILE_ISLAND_DRILL_TUNNEL", 0)],
        "wild": {"land_mons": (["ELECMON", "HAGURUMON", "KOKUWAMON", "SUNARZAMON", "GOTSUMON", "ZENIMON",
                                "DORUMON", "BEARMON", ("ELEPHANMON", 24, 26), ("BULLMON", 24, 26)], 18, 23)},
    }


def drill_tunnel():
    c = Canvas(36, 18, "#").rect(".", 3, 10, 32, 13).rect(".", 3, 3, 8, 13).rect(".", 3, 3, 20, 6)
    c.rect(".", 26, 3, 32, 13)
    return {
        "name": "FileIsland_DrillTunnel", "mapsec": "MAPSEC_DRILL_TUNNEL", "mapsec_name": "DRILL TUNNEL",
        "primary": "gTileset_General", "secondary": "gTileset_Cave", "legend": CAVE,
        "ascii": c.ascii(), "border": [0x211] * 4, "stamp_defs": STAMPS,
        "map_type": "MAP_TYPE_UNDERGROUND", "music": "MUS_CAVE_OF_ORIGIN", "escape": True,
        "stamps": [("cave_exit", 16, 14)],
        "warps": [(17, 14, "MAP_FILE_ISLAND_GEAR_SAVANNA", 0)],
        "objects": [item(30, 4, "ITEM_DNA_CHARGE", "FLAG_ITEM_DRILL_TUNNEL_DNA_CHARGE")],
        "wild": {"land_mons": (["GOTSUMON", "HAGURUMON", "ARMADILMON", "GIZUMON", "ZUBAMON",
                                ("DRIMOGEMON", 24, 27), ("DIGMON", 24, 26)], 20, 24)},
    }


def factorial_town():
    c = Canvas(SIZE, SIZE).border_forest(2)
    opening(c, "left")
    opening(c, "down")
    c.rect("p", 0, 14, 17, 17).rect("p", 14, 14, 17, 31).rect("p", 9, 11, 11, 13).rect("p", 22, 11, 24, 13)
    c.rect("p", 9, 13, 24, 13)
    c.rect("p", 18, 23, 24, 24)
    return {
        "name": T, "mapsec": "MAPSEC_FACTORIAL_TOWN", "mapsec_name": "FACTORIAL TOWN",
        "primary": "gTileset_General", "secondary": "gTileset_Petalburg", "legend": OUTDOOR,
        "ascii": c.ascii(), "border": TREE_BORDER, "stamp_defs": STAMPS,
        "map_type": "MAP_TYPE_TOWN", "music": "MUS_VERDANTURF",
        "stamps": [("lab", 6, 6), ("house_big", 20, 6), ("house_big", 20, 18)],
        "connections": [("left", "MAP_FILE_ISLAND_OVERDELL", 0), ("down", "MAP_FILE_ISLAND_GEAR_SAVANNA", 0)],
        "warps": [(10, 10, "MAP_FILE_ISLAND_FACTORIAL_TOWN_RECOVERY_TERMINAL", 0)],
        "objects": [obj("OBJ_EVENT_GFX_DIGIMON_ANDROMON", 16, 16, f"{T}_EventScript_Andromon",
                        movement="MOVEMENT_TYPE_WANDER_AROUND")],
    }


def factorial_terminal():
    return {
        "name": f"{T}_RecoveryTerminal", "layout": "LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB",
        "mapsec": "MAPSEC_FACTORIAL_TOWN", "mapsec_name": "FACTORIAL TOWN", "map_type": "MAP_TYPE_INDOOR",
        "show_name": False, "music": "MUS_BIRCH_LAB",
        "warps": [(6, 12, "MAP_FILE_ISLAND_FACTORIAL_TOWN", 0), (7, 12, "MAP_FILE_ISLAND_FACTORIAL_TOWN", 0)],
        "objects": [obj("OBJ_EVENT_GFX_DIGIMON_MONZAEMON", 7, 5, f"{T}_RecoveryTerminal_EventScript_Monzaemon",
                        local_id="LOCALID_FACTORIAL_TOWN_MONZAEMON")],
    }


def maps():
    return [gear_savanna(), drill_tunnel(), factorial_town(), factorial_terminal()]
