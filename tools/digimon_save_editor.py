#!/usr/bin/env python3
"""Inspect or update Digimon Digital Nexus save variables.

This edits the standard 32-sector GBA flash save format without requiring the
game or an ARM toolchain. Writes are opt-in via --in-place and preserve a
timestamped .bak copy unless --no-backup is supplied.
"""

from __future__ import annotations

import argparse
import shutil
import struct
from pathlib import Path

SECTOR_SIZE = 0x1000
SECTOR_DATA_SIZE = 0xF80
SECTOR_ID_OFFSET = 0xFF4
SECTOR_CHECKSUM_OFFSET = 0xFF6
SECTOR_SIGNATURE_OFFSET = 0xFF8
SECTOR_COUNTER_OFFSET = 0xFFC
SECTOR_SIGNATURE = 0x08012025
SAVE_BLOCK1_VARS_OFFSET = 0x139C
SAVE_BLOCK1_PARTY_OFFSET = 0x238
PARTY_MON_SIZE = 0x60
BOX_SECURE_OFFSET = 0x20
BOX_CHECKSUM_OFFSET = 0x1C
VARS_START = 0x4000
VARS = {
    "scan": 0x40F7,
    "reconstructed": 0x40F8,
    "partner": 0x40F9,
    "partner_pid_low": 0x40FA,
    "partner_pid_high": 0x40FB,
    "partner_ot_low": 0x40FC,
    "partner_ot_high": 0x40FD,
    "starter": 0x40FE,
}
STARTERS = ("Agumon", "Gabumon", "Biyomon", "Tentomon", "Palmon", "Gomamon", "Patamon", "Salamon")
SPECIES = {name.lower(): 0x0625 + index for index, name in enumerate(STARTERS)}
BASE_STATS = {
    0x0625: (55, 70, 45, 60, 65, 45),
    0x0626: (75, 95, 65, 70, 80, 65),
    0x0627: (80, 85, 80, 65, 60, 70),
}


def checksum(data: bytes) -> int:
    total = sum(struct.unpack_from("<I", data, offset)[0] for offset in range(0, len(data) - 3, 4))
    return ((total >> 16) + total) & 0xFFFF


def valid_sector(raw: bytes) -> bool:
    if len(raw) != SECTOR_SIZE or struct.unpack_from("<I", raw, SECTOR_SIGNATURE_OFFSET)[0] != SECTOR_SIGNATURE:
        return False
    size = SECTOR_DATA_SIZE
    return struct.unpack_from("<H", raw, SECTOR_CHECKSUM_OFFSET)[0] == checksum(raw[:size])


def active_slot(save: bytes) -> tuple[int, dict[int, int]]:
    slots: dict[int, dict[int, int]] = {0: {}, 1: {}}
    for physical in range(32):
        sector = save[physical * SECTOR_SIZE : (physical + 1) * SECTOR_SIZE]
        if struct.unpack_from("<I", sector, SECTOR_SIGNATURE_OFFSET)[0] != SECTOR_SIGNATURE:
            continue
        logical = struct.unpack_from("<H", sector, SECTOR_ID_OFFSET)[0]
        counter = struct.unpack_from("<I", sector, SECTOR_COUNTER_OFFSET)[0]
        for slot, base in ((0, 0), (1, 14)):
            if base <= physical < base + 14:
                slots[slot][logical] = physical
    candidates = [(max((struct.unpack_from("<I", save[p * SECTOR_SIZE + SECTOR_COUNTER_OFFSET:])[0] for p in ids.values()), default=-1), slot)
                  for slot, ids in slots.items() if 0 in ids]
    if not candidates:
        raise ValueError("no valid save slot found (expected a 32-sector, 0x20000-byte .sav)")
    _, slot = max(candidates)
    return slot, slots[slot]


def var_location(save: bytes, var_id: int) -> tuple[int, int]:
    slot, logical = active_slot(save)
    if 2 not in logical:
        raise ValueError("active save is missing SaveBlock1 variable sector")
    index = var_id - VARS_START
    if index < 0:
        raise ValueError(f"invalid variable id 0x{var_id:04X}")
    offset = SAVE_BLOCK1_VARS_OFFSET + index * 2 - SECTOR_DATA_SIZE
    return logical[2], offset


def get_var(save: bytes, var_id: int) -> int:
    physical, offset = var_location(save, var_id)
    return struct.unpack_from("<H", save, physical * SECTOR_SIZE + offset)[0]


def party_location(save: bytes, slot: int) -> tuple[int, int]:
    _, logical = active_slot(save)
    if not 0 <= slot < 6 or 1 not in logical:
        raise ValueError("party slot must be between 1 and 6")
    return logical[1], SAVE_BLOCK1_PARTY_OFFSET + slot * PARTY_MON_SIZE


def party_exp(save: bytes, slot: int) -> int:
    physical, offset = party_location(save, slot)
    start = physical * SECTOR_SIZE + offset
    personality, ot_id = struct.unpack_from("<II", save, start)
    words = list(struct.unpack_from("<12I", save, start + BOX_SECURE_OFFSET))
    for i in range(12):
        words[i] ^= personality ^ ot_id
    substruct = (0, 0, 0, 0, 0, 0, 1, 1, 2, 3, 2, 3, 1, 1, 2, 3, 2, 3, 1, 1, 2, 3, 2, 3)[personality % 24]
    return (words[substruct * 3 + 1] & 0x1FFFFF)


def party_identity(save: bytes, slot: int) -> tuple[int, int, int]:
    physical, offset = party_location(save, slot)
    start = physical * SECTOR_SIZE + offset
    personality, ot_id = struct.unpack_from("<II", save, start)
    words = list(struct.unpack_from("<12I", save, start + BOX_SECURE_OFFSET))
    for i in range(12):
        words[i] ^= personality ^ ot_id
    substruct = (0, 0, 0, 0, 0, 0, 1, 1, 2, 3, 2, 3, 1, 1, 2, 3, 2, 3, 1, 1, 2, 3, 2, 3)[personality % 24]
    species = words[substruct * 3] & 0x7FF
    return species, personality, ot_id


def set_party_data(save: bytearray, slot: int, level: int | None = None, experience: int | None = None) -> None:
    physical, offset = party_location(save, slot)
    start = physical * SECTOR_SIZE + offset
    if level is not None:
        if not 1 <= level <= 100:
            raise ValueError("level must be between 1 and 100")
        save[start + 0x54] = level
        species, _, _ = party_identity(save, slot)
        hp, attack, defense, speed, sp_attack, sp_defense = BASE_STATS.get(species, (50, 50, 50, 50, 50, 50))
        stats = [((2 * base + 15) * level) // 100 + 5 for base in (attack, defense, speed, sp_attack, sp_defense)]
        max_hp = ((2 * hp + 15) * level) // 100 + level + 10
        for stat_offset, stat in zip((0x58, 0x5A, 0x5C, 0x5E, 0x60, 0x62), (max_hp, *stats)):
            struct.pack_into("<H", save, start + stat_offset, stat)
        struct.pack_into("<H", save, start + 0x56, max_hp)
    if experience is None:
        return
    if not 0 <= experience <= 0x1FFFFF:
        raise ValueError("experience must fit the game's 21-bit field")
    personality, ot_id = struct.unpack_from("<II", save, start)
    words = list(struct.unpack_from("<12I", save, start + BOX_SECURE_OFFSET))
    for i in range(12):
        words[i] ^= personality ^ ot_id
    order = (0, 0, 0, 0, 0, 0, 1, 1, 2, 3, 2, 3, 1, 1, 2, 3, 2, 3, 1, 1, 2, 3, 2, 3)
    substruct = order[personality % 24]
    words[substruct * 3 + 1] = (words[substruct * 3 + 1] & ~0x1FFFFF) | experience
    checksum_value = sum(words) & 0xFFFFFFFF
    checksum_value = ((checksum_value >> 16) + checksum_value) & 0xFFFF
    for i in range(12):
        words[i] ^= personality ^ ot_id
    struct.pack_into("<12I", save, start + BOX_SECURE_OFFSET, *words)
    struct.pack_into("<H", save, start + BOX_CHECKSUM_OFFSET, checksum_value)
    refresh_sector_checksum(save, physical * SECTOR_SIZE)


def set_partner_from_party(save: bytearray, slot: int) -> None:
    species, personality, ot_id = party_identity(save, slot)
    if species == 0:
        raise ValueError("selected party slot is empty")
    # Champion branches still belong to the Agumon Partner line.
    if species in (0x0626, 0x0627):
        species = 0x0625
    set_var(save, VARS["partner"], species)
    set_var(save, VARS["partner_pid_low"], personality)
    set_var(save, VARS["partner_pid_high"], personality >> 16)
    set_var(save, VARS["partner_ot_low"], ot_id)
    set_var(save, VARS["partner_ot_high"], ot_id >> 16)


def set_var(save: bytearray, var_id: int, value: int) -> None:
    physical, offset = var_location(save, var_id)
    sector_start = physical * SECTOR_SIZE
    struct.pack_into("<H", save, sector_start + offset, value & 0xFFFF)
    refresh_sector_checksum(save, sector_start)


def refresh_sector_checksum(save: bytearray, sector_start: int) -> None:
    struct.pack_into("<H", save, sector_start + SECTOR_CHECKSUM_OFFSET, checksum(save[sector_start : sector_start + SECTOR_DATA_SIZE]))


def parse_value(name: str, value: str) -> int:
    if name == "starter":
        try:
            return STARTERS.index(value.title())
        except ValueError as exc:
            raise ValueError(f"unknown Rookie {value!r}; choose one of: {', '.join(STARTERS)}") from exc
    if name == "partner":
        try:
            return SPECIES[value.lower()]
        except KeyError as exc:
            raise ValueError(f"unknown Rookie {value!r}; choose one of: {', '.join(STARTERS)}") from exc
    number = int(value, 0)
    if name == "scan" and not 0 <= number <= 100:
        raise ValueError("scan must be between 0 and 100")
    if name == "exp":
        if not 0 <= number <= 0x1FFFFF:
            raise ValueError("experience must fit the game's 21-bit field")
        return number
    if not 0 <= number <= 0xFFFF:
        raise ValueError("value must fit in an unsigned 16-bit save variable")
    return number


def interactive_menu(path: Path, raw: bytes) -> None:
    print("Digimon save editor — changes create a .bak backup")
    while True:
        print("\n1) Show state  2) Set Scan Data  3) Set starter  4) Set Partner species")
        print("5) Set party level  6) Set party EXP  7) EXP-to-next-level")
        print("8) Lab-ready  9) Sync Partner from party  10) Quit")
        choice = input("Select an option: ").strip()
        if choice == "1":
            show(raw)
        elif choice == "2":
            value = input("Scan Data (0-100): ").strip()
            write_changes(path, raw, {"scan": parse_value("scan", value)})
            raw = path.read_bytes()
        elif choice == "3":
            value = input("Starter [Agumon/Gabumon/Biyomon/Tentomon/Palmon/Gomamon/Patamon/Salamon]: ").strip()
            write_changes(path, raw, {"starter": parse_value("starter", value)})
            raw = path.read_bytes()
        elif choice == "4":
            value = input("Partner Rookie name: ").strip()
            write_changes(path, raw, {"partner": parse_value("partner", value)})
            raw = path.read_bytes()
        elif choice == "5":
            value = input("Party level (1-100): ").strip()
            edited = bytearray(raw)
            set_party_data(edited, 0, level=parse_value("level", value))
            write_raw(path, edited)
            raw = path.read_bytes()
        elif choice == "6":
            value = input("Party EXP (0-2097151): ").strip()
            edited = bytearray(raw)
            set_party_data(edited, 0, experience=parse_value("exp", value))
            write_raw(path, edited)
            raw = path.read_bytes()
        elif choice == "7":
            physical, offset = party_location(raw, 0)
            level = raw[physical * SECTOR_SIZE + offset + 0x54]
            if not 1 <= level < 100:
                raise ValueError("party slot 1 must have a level between 1 and 99")
            write_raw(path, _edited_with_exp(raw, 0, (level + 1) ** 3 - 1))
            raw = path.read_bytes()
        elif choice == "8":
            write_changes(path, raw, {"scan": 100, "reconstructed": 0})
            raw = path.read_bytes()
        elif choice == "9":
            edited = bytearray(raw)
            set_partner_from_party(edited, 0)
            write_raw(path, edited)
            raw = path.read_bytes()
        elif choice == "10":
            return
        else:
            print("Choose 1-8.")


def write_changes(path: Path, raw: bytes, changes: dict[str, int]) -> None:
    edited = bytearray(raw)
    for name, value in changes.items():
        set_var(edited, VARS[name], value)
    write_raw(path, edited)


def write_raw(path: Path, edited: bytearray) -> None:
    shutil.copy2(path, path.with_suffix(path.suffix + ".bak"))
    path.write_bytes(edited)
    print(f"updated {path} (backup: {path.name}.bak)")


def _edited_with_exp(raw: bytes, slot: int, experience: int) -> bytearray:
    edited = bytearray(raw)
    set_party_data(edited, slot, experience=experience)
    return edited


def show(save: bytes) -> None:
    slot, _ = active_slot(save)
    print(f"active slot: {slot + 1}")
    for name, var_id in VARS.items():
        value = get_var(save, var_id)
        display = STARTERS[value] if name == "starter" and value < len(STARTERS) else value
        print(f"{name:16} 0x{var_id:04X} = {display}")
    try:
        print(f"party slot 1 level = {save[party_location(save, 0)[0] * SECTOR_SIZE + party_location(save, 0)[1] + 0x54]}")
        print(f"party slot 1 exp   = {party_exp(save, 0)}")
    except ValueError:
        print("party slot 1       = unavailable")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("save", type=Path, help="mGBA .sav file")
    parser.add_argument("action", nargs="?", choices=("show", "set", "lab-ready", "partner-state", "next-level", "menu"), default="menu")
    parser.add_argument("name", nargs="?", choices=tuple(VARS) + ("level", "exp"), help="variable or party field to set")
    parser.add_argument("value", nargs="?", help="numeric value or Rookie name")
    parser.add_argument("--party-slot", type=int, default=1, help="party slot for level/exp edits (1-6)")
    parser.add_argument("--in-place", action="store_true", help="write changes back to the save")
    parser.add_argument("--no-backup", action="store_true", help="do not create a .bak before writing")
    args = parser.parse_args()
    if not args.save.is_file():
        raise SystemExit(f"save file not found: {args.save}\nPass the actual mGBA .sav path, for example: make save-editor SAVE=/path/to/pokeemerald.sav")
    raw = args.save.read_bytes()
    if len(raw) < SECTOR_SIZE * 32:
        raise SystemExit(f"save is too small: expected at least 0x20000 bytes, got 0x{len(raw):X}")
    if len(raw) > SECTOR_SIZE * 32:
        print(f"note: preserving {len(raw) - SECTOR_SIZE * 32} trailing mGBA metadata bytes")
    if args.action == "show":
        show(raw)
        return 0
    if args.action == "menu":
        interactive_menu(args.save, raw)
        return 0
    if not args.in_place:
        raise SystemExit("refusing to write without --in-place")
    edited = bytearray(raw)
    if args.action == "partner-state":
        try:
            set_partner_from_party(edited, args.party_slot - 1)
        except ValueError as exc:
            raise SystemExit(str(exc))
    elif args.action == "next-level":
        try:
            physical, offset = party_location(raw, args.party_slot - 1)
        except ValueError as exc:
            raise SystemExit(str(exc))
        level = raw[physical * SECTOR_SIZE + offset + 0x54]
        if not 1 <= level < 100:
            raise SystemExit("selected party slot must have a level between 1 and 99")
        set_party_data(edited, args.party_slot - 1, experience=(level + 1) ** 3 - 1)
    if args.action == "lab-ready":
        set_var(edited, VARS["scan"], 100)
        set_var(edited, VARS["reconstructed"], 0)
    elif args.action == "set":
        if args.name is None or args.value is None:
            raise SystemExit("set requires a variable name and value")
        value = parse_value(args.name, args.value)
        if args.name == "level":
            set_party_data(edited, args.party_slot - 1, level=value)
        elif args.name == "exp":
            set_party_data(edited, args.party_slot - 1, experience=value)
        else:
            set_var(edited, VARS[args.name], value)
    if not args.no_backup:
        shutil.copy2(args.save, args.save.with_suffix(args.save.suffix + ".bak"))
    args.save.write_bytes(edited)
    print(f"updated {args.save}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
