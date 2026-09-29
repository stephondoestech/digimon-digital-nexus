# Overhaul references

Reviewed 2026-09-13 for the eight-starter/milestone-8 pass.

## Pokémon Unbound / CFRU

The maintainer's public [Complete FireRed Upgrade](https://github.com/Skeli789/Complete-Fire-Red-Upgrade)
documents battle changes, a configurable start menu, secondary tools, character
customization, and save expansion. It targets FireRed and uses a different
integration/build approach from this Emerald decompilation. The official Unbound
PokéCommunity page was unavailable during this review; this was a source/docs
review, not a playthrough or an inspection of a complete Unbound game repository.

Application here: treat the starter screen as a coherent game-facing interaction
with its own device identity, a readable list, previews, confirmation, and a
defined return to the story. Preserve downstream script and save contracts while
changing the presentation. No CFRU code, Unbound artwork, or ROM was imported,
and no engine migration is planned for this milestone.

## DigimonEmerald

[DigimonEmerald](https://github.com/Luna3Step/DigimonEmerald) supplies the pinned
Rookie portrait references documented in [Asset Sources](ASSET_SOURCES.md).
Use the inspected asset files, not an assumption that every system in the
reference repository is complete or directly compatible with this expansion.
