# Digimon Digital Nexus Architecture

## Build Environment

Authoritative builds run in the Debian-based Dev Container. The container supplies
the ARM cross compiler, native build tools, Python, Git, and graphics dependencies.
The macOS host only needs Docker and a native mGBA installation for manual testing.

Run a clean ROM build inside the container with:

```bash
make clean
make -j$(nproc)
```

The resulting ROM is `pokeemerald.gba` in the repository root.

## Species Extension Points

- Species identifiers: `include/constants/species.h`
- Species data, base stats, typing, graphics, cries, learnsets, and evolutions:
  `src/data/pokemon/species_info.h`
- Graphics declarations: `src/data/graphics/pokemon.h`
- Graphics assets: `graphics/pokemon/<species>/`
- Wild encounters: `src/data/wild_encounters.json`
- National and Hoenn Pokédex identifiers: `include/constants/pokedex.h`
- Pokédex sort orders: `src/data/pokemon/pokedex_orders.h`

New Digimon must use custom species IDs after `SPECIES_CUSTOM_START` so existing
species IDs and saved Pokémon remain stable.

## Persistence and Testing

`struct SaveBlock1`, `struct SaveBlock2`, and `struct PokemonStorage` are defined
in `include/global.h` and `include/pokemon_storage_system.h`. Their compatibility
sizes are guarded by `test/save.c`. Milestones 0 and 1 do not change these
structures.

Tests live in `test/`; nested directories are compiled automatically. The
documentation index is validated by `.github/docs_validate/inclusive_summary.py`.
The bundled runner is x86_64, so native ARM64 builds compile `pokeemerald-test.elf`
and execute it in the separate `docker/Dockerfile.test-runner` amd64 container.
See the [mGBA workflow](MGBA_WORKFLOW.md) for commands and manual validation.
Do not treat native ARM64 `make check` reporting no tests as a passing run.

Milestones 7–9 use reserved event variables without changing save-block sizes.
See [Scan Data, DigiLab, and Partner](SCAN_AND_PARTNER.md) for state allocation,
identity rules, and compatibility limitations.
