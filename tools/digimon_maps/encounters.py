"""Write File Island wild encounter tables into src/data/wild_encounters.json.

Specs list species most-common first; they are cycled into Emerald's fixed
slot counts (12 land, 5 water). tools/digimon_roster/replace_encounters.py
leaves MAP_FILE_ISLAND_* tables alone, and test_roster.py still checks them
(wild roster only, no starters, Champions at level 24+, aquatic water slots).
"""
import json

from render import ROOT

SLOTS = {"land_mons": (20, 12), "water_mons": (4, 5)}
PREFIX = "MAP_FILE_ISLAND_"


def table(kind, species, low, high):
    rate, count = SLOTS[kind]
    mons = []
    for index in range(count):
        entry = species[index % len(species)]
        name, lo, hi = entry if isinstance(entry, tuple) else (entry, low, high)
        mons.append({"min_level": lo, "max_level": hi, "species": "SPECIES_" + name})
    return {"encounter_rate": rate, "mons": mons}


def write_encounters(specs):
    path = ROOT / "src/data/wild_encounters.json"
    data = json.loads(path.read_text())
    group = data["wild_encounter_groups"][0]
    encounters = [e for e in group["encounters"] if not e.get("map", "").startswith(PREFIX)]
    for spec in specs:
        wild = spec.get("wild")
        if not wild:
            continue
        entry = {"map": spec["map_id"], "base_label": "g" + spec["name"]}
        for kind, (species, low, high) in wild.items():
            entry[kind] = table(kind, species, low, high)
        encounters.append(entry)
    group["encounters"] = encounters
    path.write_text(json.dumps(data, indent=2) + "\n")
