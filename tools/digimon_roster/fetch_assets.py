#!/usr/bin/env python3
"""Fetch the pinned donor portraits; never substitute a different Digimon."""
from concurrent.futures import ThreadPoolExecutor
from urllib.request import urlopen
from catalog import ROOT, UPSTREAM, URL, roster


def reference_data():
    UPSTREAM.mkdir(parents=True, exist_ok=True)
    for local, remote in (("species_info.h", "species_info.h"),
                          ("evolution.h", "evolution.h"),
                          ("learnsets.h", "level_up_learnsets.h")):
        path = UPSTREAM / local
        if not path.exists():
            with urlopen(f"{URL}/src/data/pokemon/{remote}", timeout=45) as response:
                path.write_bytes(response.read())


def fetch(entry):
    destination = ROOT / "graphics/pokemon" / entry["slug"] / "source_front.png"
    if destination.exists():
        return
    donor_path = entry.get("donor_path") or f"{entry['slug']}/front.png"
    url = f"{URL}/graphics/pokemon/{donor_path}"
    with urlopen(url, timeout=45) as response:
        data = response.read()
    if not data.startswith(b"\x89PNG\r\n\x1a\n"):
        raise ValueError(f"Not a PNG: {url}")
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.write_bytes(data)
    print(f"Fetched {entry['name']}", flush=True)


if __name__ == "__main__":
    reference_data()
    with ThreadPoolExecutor(max_workers=8) as workers:
        list(workers.map(fetch, roster()))
