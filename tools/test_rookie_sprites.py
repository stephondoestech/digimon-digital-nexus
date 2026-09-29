#!/usr/bin/env python3
"""Validate the engine-facing Rookie graphics without modifying source assets."""
import unittest

from PIL import Image

from prepare_rookie_sprites import ROOT, NAMES, fit, icon_palette
from prepare_digimon_sprite import load_rgba_source


class RookieSpritesTest(unittest.TestCase):
    def test_portraits_and_icons_match_engine_layout(self):
        for name in ("agumon", *NAMES):
            with self.subTest(name=name):
                directory = ROOT / "graphics/pokemon" / name
                with Image.open(directory / "front.png") as front, \
                     Image.open(directory / "back.png") as back, \
                     Image.open(directory / "icon.png") as icon:
                    self.assertEqual(front.size, (64, 64))
                    self.assertEqual(back.size, front.size)
                    self.assertEqual(front.tobytes(), back.tobytes())
                    self.assertEqual(icon.size, (32, 64))
                    self.assertEqual(icon.getpalette()[:48], icon_palette())
                    self.assertEqual(icon.crop((0, 0, 32, 32)).tobytes(),
                                     icon.crop((0, 32, 32, 64)).tobytes())
                    for art in (front, back, icon):
                        self.assertEqual(art.mode, "P")
                        self.assertEqual(art.info["transparency"], 0)
                        self.assertLessEqual(max(art.getdata()), 15)
                        self.assertGreater(len(set(art.getdata())), 2)

    def test_sources_are_visible_and_fit_inside_canvas(self):
        for name in NAMES:
            source = load_rgba_source(ROOT / "graphics/pokemon" / name / "source_front.png")
            result = fit(source, (64, 64), (62, 62))
            bounds = result.getchannel("A").getbbox()
            self.assertIsNotNone(bounds)
            self.assertLessEqual(bounds[2] - bounds[0], 62)
            self.assertLessEqual(bounds[3] - bounds[1], 62)

    def test_empty_source_is_rejected(self):
        with self.assertRaises(ValueError):
            fit(Image.new("RGBA", (64, 64)), (64, 64), (62, 62))


if __name__ == "__main__":
    unittest.main()
