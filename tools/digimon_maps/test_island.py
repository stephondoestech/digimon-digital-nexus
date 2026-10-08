#!/usr/bin/env python3
"""Check File Island's generated maps, warps, connections and slice Tamers."""
import json
import re
import unittest

from render import ROOT

MAPS = ROOT / "data/maps"
OPPOSITE = {"up": "down", "down": "up", "left": "right", "right": "left"}
# Slice Tamers and their level band: the curve from Lv 5 to Digivolution at 16.
TAMERS = {"KAI": (5, 5), "MIA": (6, 7), "REN": (8, 9), "ODA": (11, 12), "SORA": (13, 14), "JUN": (15, 16)}


def island_maps():
    group = json.loads((MAPS / "map_groups.json").read_text())["gMapGroup_FileIsland"]
    return {json.loads((MAPS / name / "map.json").read_text())["id"]: json.loads((MAPS / name / "map.json").read_text())
            for name in group}


def parties():
    text = (ROOT / "src/data/trainers.party").read_text()
    blocks = re.findall(r"=== (TRAINER_\w+) ===\n(.*?)(?=\n=== |\Z)", text, re.S)
    return {key: block for key, block in blocks}


class IslandTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.maps = island_maps()
        roster = json.loads((ROOT / "tools/digimon_roster/manifest.json").read_text())["species"]
        cls.wild_rookies = {row["key"] for row in roster if row.get("wild", True) and row["stage"] == "Rookie"}

    def test_warps_land_on_warps_that_lead_back(self):
        for map_id, data in self.maps.items():
            for index, warp in enumerate(data["warp_events"]):
                with self.subTest(map=map_id, warp=index):
                    target = self.maps.get(warp["dest_map"])
                    self.assertIsNotNone(target, f"{map_id} warps off the island to {warp['dest_map']}")
                    destination = target["warp_events"][int(warp["dest_warp_id"])]
                    self.assertEqual(destination["dest_map"], map_id)

    def test_connections_are_mirrored(self):
        for map_id, data in self.maps.items():
            for connection in data["connections"] or []:
                with self.subTest(map=map_id, direction=connection["direction"]):
                    back = self.maps[connection["map"]]["connections"] or []
                    self.assertIn({"map": map_id, "offset": -connection["offset"],
                                   "direction": OPPOSITE[connection["direction"]]}, back)

    def test_slice_tamers_follow_the_level_curve(self):
        blocks = parties()
        for name, (low, high) in TAMERS.items():
            with self.subTest(tamer=name):
                block = blocks[f"TRAINER_TAMER_{name}"]
                self.assertIn("Class: Digi Tamer", block)
                levels = [int(level) for level in re.findall(r"^Level: (\d+)", block, re.M)]
                species = re.findall(r"^SPECIES_(\w+)", block, re.M)
                self.assertTrue(levels)
                self.assertTrue(all(low <= level <= high for level in levels))
                self.assertTrue(set(species) <= self.wild_rookies)

    def test_every_tamer_is_placed_once(self):
        scripts = "".join((MAPS / data["name"] / "scripts.inc").read_text() for data in self.maps.values())
        for name in TAMERS:
            with self.subTest(tamer=name):
                self.assertEqual(scripts.count(f"trainerbattle_single TRAINER_TAMER_{name},"), 1)


if __name__ == "__main__":
    unittest.main()
