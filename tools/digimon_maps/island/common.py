"""Shared constants and helpers for File Island map specs."""
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from autotile import FLOOR, ICE, PATH, SAND, TALL, WALL, WATER_CLASS  # noqa: E402
from canvas import Canvas  # noqa: E402

# Outdoor maps are 32 wide; openings line up so connections need offset 0.
SIZE = 32
OPEN_LO, OPEN_HI = 14, 17

OUTDOOR = {".": FLOOR, ",": TALL, "~": WATER_CLASS, ":": SAND, "i": ICE, "#": WALL, "p": PATH}
CAVE = {".": FLOOR, "#": WALL, "i": ICE, "~": WATER_CLASS}

# Extra stamps (layout, x, y, width, height); door/warp offset noted.
STAMPS = {
    "mound": ("LAYOUT_ROUTE120", 5, 52, 5, 4),          # Fortree only; cave at (+2, +3)
    "mound_small": ("LAYOUT_ROUTE120", 6, 53, 3, 3),    # any General map; cave at (+1, +2)
    "desert_mound": ("LAYOUT_ROUTE111", 27, 84, 5, 4),  # Mauville only; cave at (+2, +3)
    "cave_exit": ("LAYOUT_ANCIENT_TOMB", 7, 29, 3, 2),  # Cave only; warp at (+1, +0)
    # Petalburg-tileset buildings, cut to the building only (no surrounding ground).
    "lab": ("LAYOUT_LITTLEROOT_TOWN", 3, 12, 7, 5),       # door at (+4, +4)
    "house_big": ("LAYOUT_LITTLEROOT_TOWN", 2, 4, 5, 5),  # door at (+3, +4)
    "house_small": ("LAYOUT_OLDALE_TOWN", 4, 4, 4, 4),    # door at (+1, +3)
}
FLOWER = 0x004 | 0x3000
SIGNPOST = 0x003 | 0x0400
LADDER_DOWN = 0x23F | 0x3000
LADDER_UP = 0x23E | 0x3000
TREE_BORDER = [0x1D4, 0x1D5, 0x1DC, 0x1DD]  # Littleroot's border: endless forest


def opening(canvas, side, depth=4, lo=OPEN_LO, hi=OPEN_HI):
    """Clear a connection gap through the border on one side."""
    w, h = canvas.width, canvas.height
    if side == "up":
        canvas.rect(".", lo, 0, hi, depth - 1)
    elif side == "down":
        canvas.rect(".", lo, h - depth, hi, h - 1)
    elif side == "left":
        canvas.rect(".", 0, lo, depth - 1, hi)
    elif side == "right":
        canvas.rect(".", w - depth, lo, w - 1, hi)
    return canvas


def obj(gfx, x, y, script, flag="0", movement="MOVEMENT_TYPE_FACE_DOWN", local_id=None,
        trainer="TRAINER_TYPE_NONE", sight="0", elevation=3):
    event = {"graphics_id": gfx, "x": x, "y": y, "elevation": elevation, "movement_type": movement,
             "movement_range_x": 0, "movement_range_y": 0, "trainer_type": trainer,
             "trainer_sight_or_berry_tree_id": sight, "script": script, "flag": flag}
    if local_id:
        event = {"local_id": local_id, **event}
    return event


def item(x, y, item_id, flag):
    return obj("OBJ_EVENT_GFX_DIGIMON_DATA_CHIP", x, y, "Common_EventScript_FindItem", flag, sight=item_id)


def trigger(x, y, script, var="VAR_TEMP_1", value="0"):
    return {"type": "trigger", "x": x, "y": y, "elevation": 3, "var": var, "var_value": value, "script": script}


def tamer(gfx, x, y, script, facing, sight):
    """A trainer NPC: walks up and battles when the player enters its line of sight."""
    return obj(gfx, x, y, script, movement=f"MOVEMENT_TYPE_FACE_{facing}", trainer="TRAINER_TYPE_NORMAL",
               sight=str(sight))


def sign(x, y, script):
    return {"type": "sign", "x": x, "y": y, "elevation": 0, "player_facing_dir": "BG_EVENT_PLAYER_FACING_ANY",
            "script": script}


def gate(prefix, cells):
    """Thicket objects that block the rest of the island until Kuwagamon is beaten."""
    return [obj("OBJ_EVENT_GFX_CUTTABLE_TREE", x, y, f"{prefix}_EventScript_Thicket", "FLAG_DEFEATED_KUWAGAMON")
            for x, y in cells]
