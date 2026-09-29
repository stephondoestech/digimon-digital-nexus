#!/usr/bin/env python3
"""Populate all maps with habitat-appropriate Digimon; starters are event-only."""
from collections import Counter
import hashlib
import json

from catalog import ROOT, STARTERS, roster

TARGET = ROOT / "src/data/wild_encounters.json"
EARLY = {
    "MAP_ROUTE101": "GAZIMON KUNEMON GAZIMON KUNEMON GOBLIMON GAZIMON ELECMON GOBLIMON LABRAMON LABRAMON ELECMON GOBLIMON",
    "MAP_ROUTE102": "KUNEMON GAZIMON KUNEMON GAZIMON ARURAUMON FLORAMON GOBLIMON MUSHROOMON ELECMON LABRAMON DOKUNEMON FLORAMON",
    "MAP_ROUTE103": "GAZIMON GOBLIMON ELECMON LABRAMON MUCHOMON MUCHOMON FLORAMON GAZIMON GOBLIMON ELECMON LABRAMON MUCHOMON",
    "MAP_PETALBURG_WOODS": "KUNEMON DOKUNEMON MUSHROOMON FLORAMON KUNEMON DOKUNEMON FANBEEMON WORMMON ARURAUMON MUSHROOMON MORPHOMON WORMMON",
}


def habitat(map_name, method):
    if method in ("water_mons", "fishing_mons") or "UNDERWATER" in map_name:
        return {"TYPE_WATER"}
    if "SHOAL_CAVE" in map_name:
        return {"TYPE_ICE", "TYPE_WATER"}
    if any(x in map_name for x in ("MT_PYRE", "MEMORIAL", "POKEMON_TOWER")):
        return {"TYPE_GHOST", "TYPE_DARK"}
    if "NEW_MAUVILLE" in map_name or "POWER_PLANT" in map_name:
        return {"TYPE_ELECTRIC", "TYPE_STEEL"}
    if any(x in map_name for x in ("FIERY", "MT_EMBER", "JAGGED", "MT_CHIMNEY")):
        return {"TYPE_FIRE", "TYPE_ROCK", "TYPE_GROUND"}
    if any(x in map_name for x in ("CAVE", "TUNNEL", "VICTORY_ROAD", "DESERT", "TOWER")) or method == "rock_smash_mons":
        return {"TYPE_ROCK", "TYPE_GROUND", "TYPE_STEEL", "TYPE_DARK", "TYPE_DRAGON"}
    if any(x in map_name for x in ("WOODS", "FOREST")):
        return {"TYPE_GRASS", "TYPE_BUG", "TYPE_POISON"}
    return set()


def main():
    rows = roster()
    counts = Counter()
    data = json.loads(TARGET.read_text())
    slot = 0
    for group in data["wild_encounter_groups"]:
        for encounter in group.get("encounters", []):
            for field, details in encounter.items():
                if not field.endswith("_mons") or not isinstance(details, dict):
                    continue
                area = encounter.get("map", encounter["base_label"])
                types = habitat(area, field)
                for index, mon in enumerate(details.get("mons", [])):
                    champions = mon["min_level"] >= 24 and index % 3 != 0
                    pool = [row for row in rows if (row["stage"] == "Champion") == champions
                            and (not types or types.intersection(row["types"]))]
                    if not pool:
                        raise ValueError(f"Empty habitat pool: {area}/{field}")
                    # Least-used compatible species spreads the full roster around the world.
                    # Hash tie-breaks are deterministic and independent of Python hash seeds.
                    row = min(pool, key=lambda r: (counts[r["key"]], hashlib.sha256(
                        f"{area}/{field}/{index}/{r['key']}".encode()).digest()))
                    key = row["key"]
                    if field == "land_mons" and area in EARLY:
                        key = EARLY[area].split()[index]
                    mon["species"] = "SPECIES_" + key
                    counts[key] += 1
                    slot += 1
    missing = {row["key"] for row in rows} - counts.keys()
    if missing or set(STARTERS).intersection(counts):
        raise ValueError(f"Unplaced roster members or wild starters: {missing}")
    TARGET.write_text(json.dumps(data, indent=2) + "\n")
    print(f"Replaced {slot} wild slots with {len(counts)} Digimon; no starters; Champions level 24+.")


if __name__ == "__main__":
    main()
