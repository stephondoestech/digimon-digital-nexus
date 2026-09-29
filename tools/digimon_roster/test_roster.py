#!/usr/bin/env python3
"""Guard the compiled roster inputs, encounter legality, and source asset integrity."""
from collections import Counter
import hashlib
import json
import re
import unittest

from PIL import Image
from catalog import ROOT, STARTERS

MANIFEST = ROOT / "tools/digimon_roster/manifest.json"


class RosterTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.rows = json.loads(MANIFEST.read_text())["species"]
        cls.by_key = {row["key"]: row for row in cls.rows}

    def test_unique_full_species_and_dex_registration(self):
        self.assertGreaterEqual(len(self.rows), 150)
        self.assertEqual(len(self.by_key), len(self.rows))
        self.assertEqual(len({r["dex"] for r in self.rows}), len(self.rows))
        constants = (ROOT / "include/constants/species.h").read_text()
        dex = (ROOT / "include/constants/pokedex.h").read_text()
        entries = "".join(p.read_text() for p in (ROOT / "src/data/pokemon/species_info/digimon_roster").glob("*.h"))
        for row in self.rows:
            with self.subTest(species=row["key"]):
                self.assertIn(f"SPECIES_{row['key']},", constants)
                self.assertIn(f"NATIONAL_DEX_{row['key']}", dex)
                self.assertEqual(entries.count(f"[SPECIES_{row['key']}]"), 1)
                self.assertTrue(all(1 <= stat <= 255 for stat in row["stats"].values()))

    def test_graphics_source_hashes_and_engine_layout(self):
        for row in self.rows:
            with self.subTest(species=row["key"]):
                path = ROOT / "graphics/pokemon" / row["slug"]
                self.assertEqual(hashlib.sha256((path / "source_front.png").read_bytes()).hexdigest(), row["source_sha256"])
                with Image.open(path / "front.png") as front, Image.open(path / "back.png") as back, Image.open(path / "icon.png") as icon:
                    self.assertEqual(front.size, (64, 64))
                    self.assertEqual(back.size, front.size)
                    self.assertEqual(front.tobytes(), back.tobytes())
                    self.assertEqual(icon.size, (32, 64))
                    self.assertEqual(icon.crop((0, 0, 32, 32)).tobytes(), icon.crop((0, 32, 32, 64)).tobytes())
                    for art in (front, back, icon):
                        self.assertEqual(art.mode, "P")
                        self.assertEqual(art.info["transparency"], 0)
                        self.assertLessEqual(max(art.tobytes()), 15)
                        self.assertGreater(len(set(art.tobytes())), 2)

    def test_encounter_population_habitats_levels_and_exclusivity(self):
        counts = Counter()
        data = json.loads((ROOT / "src/data/wild_encounters.json").read_text())
        for group in data["wild_encounter_groups"]:
            for encounter in group.get("encounters", []):
                for method, table in encounter.items():
                    if not method.endswith("_mons") or not isinstance(table, dict):
                        continue
                    for mon in table.get("mons", []):
                        key = mon["species"].removeprefix("SPECIES_")
                        self.assertNotIn(key, STARTERS)
                        self.assertIn(key, self.by_key)
                        row = self.by_key[key]
                        if row["stage"] == "Champion":
                            self.assertGreaterEqual(mon["min_level"], 24)
                        if method in ("water_mons", "fishing_mons"):
                            self.assertIn("TYPE_WATER", row["types"])
                        counts[key] += 1
        self.assertEqual(set(counts), set(self.by_key))

    def test_learnsets_have_usable_starts_and_closed_evolution_targets(self):
        for row in self.rows:
            with self.subTest(species=row["key"]):
                levels = [m[0] for m in row["moves"]]
                self.assertEqual(levels, sorted(levels))
                initial = [m[1] for m in row["moves"] if m[0] <= 1][-4:]
                self.assertIn("MOVE_TACKLE", initial)
                for level, target in row["evolutions"]:
                    self.assertIn(target, self.by_key)
                    self.assertNotIn(target, STARTERS)
                    self.assertNotEqual(target, row["key"])
                    self.assertTrue(1 <= level <= 100)

    def test_saved_dex_flags_do_not_grow(self):
        dex = (ROOT / "include/constants/pokedex.h").read_text()
        self.assertIn("#define NATIONAL_DEX_COUNT  NATIONAL_DEX_SALAMON", dex)
        self.assertIn("NATIONAL_DEX_ANGORAMON = 1,", dex)
        self.assertNotIn("NATIONAL_DEX_ANGORAMON = NATIONAL_DEX_SALAMON + 1", dex)


if __name__ == "__main__":
    unittest.main()
