#!/usr/bin/env python3
"""Write the searchable roster/location reference from the actual game data."""
import json
from collections import defaultdict
from catalog import ROOT


def main():
    rows = json.loads((ROOT / "tools/digimon_roster/manifest.json").read_text())["species"]
    encounters = json.loads((ROOT / "src/data/wild_encounters.json").read_text())
    locations = defaultdict(list)
    for group in encounters["wild_encounter_groups"]:
        for entry in group.get("encounters", []):
            for method, table in entry.items():
                if not method.endswith("_mons") or not isinstance(table, dict):
                    continue
                for mon in table.get("mons", []):
                    key = mon["species"].removeprefix("SPECIES_")
                    area = entry.get("map", entry["base_label"])
                    if area not in locations[key]:
                        locations[key].append(area)
    lines = ["# Expanded Digimon roster", "", "Generated from the playable species and encounter tables.", "",
             "The eight Adventure starters are initial-choice/event-only. Agumon's existing",
             "Greymon/Tyrannomon branches remain. The following 193 additional Digimon all have",
             "battle portraits, party icons, stats, moves and ordinary encounter locations.", "",
             "Champions appear only in wild slots whose minimum level is 24 or higher.", "",
             "| Digimon | Species ID | Stage | Attribute | Level evolution | Example locations |",
             "|---|---:|---|---|---|---|"]
    names = {row["key"]: row["name"] for row in rows}
    for row in rows:
        targets = ", ".join(f"{names[target]} ({level})" for level, target in row["evolutions"]) or "—"
        places = ", ".join(locations[row["key"]][:3])
        lines.append(f"| {row['name']} | {row['species_id']} | {row['stage']} | {row['attribute']} | {targets} | {places} |")
    (ROOT / "docs/digimon/EXPANDED_ROSTER.md").write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()
