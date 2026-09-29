# Project notes

- 2026-09-14 roster expansion: 203 species total, including 193 new sourced
  Digimon. Generator, source manifest and content migration live in
  `tools/digimon_roster/`; `make roster-check` checks all art and encounter slots.
- Added species append after Salamon; dex slots 1-193 are intentionally reassigned
  to keep old save-array sizes. Never expand NATIONAL_DEX_COUNT without a real
  save migration. Canonical lookup handles the reassigned slots in pokemon.c.
- All eight Adventure Rookies are excluded from wild tables. Wild Champions have
  minimum level 24; fishing/water slots use aquatic types. The old wild-Agumon
  Scan Data checklist is obsolete; event recruitment will follow later.
- `Digimon_ResolveLegacySpecies` converts new legacy creature creation in production,
  while engine test fixtures retain their upstream species. Existing stored
  creatures are not automatically converted.

- Container builds only; no host package installation. Production and test ELF
  targets must be built in separate `make` invocations.
- `PLAN.md` is the design roadmap. `PLANS.md` records the active execution slice;
  `docs/digimon/ROADMAP.md` distinguishes implementation from manual acceptance.
- The starter Digivice is `src/digivice_starter.c`; roster/labels are in
  `src/digimon_starters.c`. Keep the four shared background assets and shared
  Poké Ball data in `src/starter_choose.c` for credits/save-error/Battle Factory.
- Full eight-way starter choice uses `VAR_DIGIMON_STARTER_CHOICE` (`0x40FE`).
  `VAR_STARTER_MON` must stay 0–2 until Hoenn's rival branches are replaced.
- User-approved fallback: front portraits also serve as battle back portraits.
  Do not invent rear views by erasing faces or mirroring front art.
- Rookie icons must use a shared engine palette and two 32×32 frames (32×64 PNG),
  not the species' battle palette. Source attribution is in ASSET_SOURCES.md.
- The DigiLab collection loop now packs per-species Scan Data and one-time
  reconstruction state for all 193 ordinary wild Digimon into SaveBlock2's
  existing dex reservation. Starters remain initial-choice/event species.
- Attribute combat is a separate damage modifier in `CalcTypeEffectivenessMultiplier`:
  Vaccine > Virus > Data > Vaccine (1.25× advantage, 0.8× disadvantage). Free,
  Unknown and non-damaging/fixed-damage moves are neutral; elemental typing is
  unchanged.
- Native ARM64 `make check` cannot run the bundled x86 executable. Use the
  dedicated amd64 container from MGBA_WORKFLOW.md; zero tests is a failure.
- Battle tests are replay-based, including WILD_BATTLE_TEST. Do not weaken
  production replay exclusions to make a scan-reward assertion pass.
