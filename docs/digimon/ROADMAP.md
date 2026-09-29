# Roadmap

## Roster expansion — 2026-09-14

The user's revised scope requires at least 150 Digimon now. The implementation
contains 203 species, with 193 added portraits, stats, learnsets and encounter
locations; 72 added level-evolution paths; 3,451 migrated trainer members; and
6,459 replaced wild slots. The eight Adventure starters are initial-choice and
future-event recruits only. Champions are restricted to wild levels 24+.

This supersedes the earlier one-route Agumon encounter and low-rate starter plans.
See [the roster and migration notes](DIGIMON_ROSTER.md) and
[the complete species/location table](EXPANDED_ROSTER.md).

Validation: 24 focused runtime tests passed (4 roster, 16 Agumon, 4 Digivice),
including the parameterized 193-species wild-battle sweep. Eight Python tests
passed across new roster validation and the existing Rookie graphics suite.
SaveBlock1 remains 15,568 bytes; SaveBlock2 3,884; storage 34,144; dex flags 130
bytes per array. Manual mGBA story navigation/save-reload is still required.

Milestone 10 remains removed by user direction. New recruitment events,
higher-stage evolution coverage, custom scene art/audio and full-world narrative
replacement are not marked complete by this population migration.

## Current Session

1. Milestone 0: establish the containerized build environment and document the
   upstream extension points. Complete.
2. Milestone 1: add Agumon as one complete, encounterable species. Complete;
   manual mGBA validation is deferred while the initial vertical slice grows.
3. Milestones 2-4: Agumon palette/icon and deterministic Champion branches are
   implemented. Greymon/Tyrannomon battle functionality is tested; their artwork
   and final audio remain asset-quality follow-ups, not finished production art.
4. Milestone 5: all eight Rookies have stats, moves, Digimon battle portraits,
   shared-palette icons, Attribute/Element labels, evolution plans, and playable
   starter recruitment. Dedicated followers and broader world recruitment remain
   future content; save/reload and visual acceptance remain manual checks.
5. Milestone 5.2: the Agumon-only prototype is superseded by the requested
   eight-choice Digivice list, portrait preview, and cancelable confirmation.
6. Milestone 6: introduce player-facing Digimon terminology in the main menu,
   recovery flow, storage prompt, and first DigiLab interaction. Implemented for
   the current vertical slice; legacy engine symbols and broader script text are
   intentionally retained.
7. Milestone 7: add persistent Scan Data earned from successful wild Digimon
   battles, with a 100% reconstruction threshold. Implemented for all 193
   ordinary roster species; flash-save/reload acceptance remains pending.
8. Milestone 8: add a functional DigiLab prototype in Birch's lab PC that
   offers Scan Data, reconstruction, storage, and Partner actions. The menu now
   browses the complete roster and checks capacity per species.
9. Milestone 9: persist the chosen Rookie as the designated Partner when it is
   received, and expose its current location in the DigiLab. Identity includes
   personality and original trainer ID, so another Agumon is not the Partner.
   Implemented as a one-partner prototype; save compatibility needs manual QA.

## Next Milestones

- Validate the integrated through-milestone-8 slice before further systems.
- Milestone 11: the DigiLab Field Guide now reports all 203
  entries (the eight Adventure Rookies followed by the expanded roster), with
  sourced Attribute labels and engine Element labels. The starter chooser is
  not the full Digivice.
- Milestone 12: Field Guide scan/form data and the separate Attribute combat
  layer are implemented. Vaccine/Virus/Data use 1.25×/0.8× modifiers; Free,
  Unknown, status and fixed-damage moves remain neutral. Focused runtime tests
  cover the cycle and neutral cases.
- Milestone 12 validation: the containerized test ELF passes 10 Digimon tests,
  including the Vaccine/Virus/Data cycle, reverse matchups and neutral cases;
  the production ROM rebuild uses 27,453,096 ROM bytes with RAM unchanged.
- Milestone 13 → 13.5: the first Digital World slice, then a closed playtest.
  Scope and gate are in PLAN.md §13.1 and §38.5; the checklist is in PLANS.md.
- Milestones 14-30: build the Digital World vertical slice, expand the roster and
  world, add Adventure 02 and Tamers systems, then balance and release-test.

## Validation — 2026-09-13

- Production ROM build: passed; root `pokeemerald.gba` rebuilt with the DigiLab
  menu, explicit reconstruction, storage access, and individual Partner tracking.
- Focused `Agumon` runtime suite: **16 tests passed**, including
  Champion data/evolution, Scan Data, reconstruction capacity and duplicates,
  Partner identity, and replay/trainer battle exclusions.
- `Digivice` runtime suite: **3 tests passed**, with parameterized UI and grant
  checks covering all eight starters, wraparound, confirmation cancellation,
  callback return, and memory cleanup.
- Expanded recruitment/guide suite: **9 tests passed**, covering packed
  per-species scan state, reconstruction levels, event-only protection,
  party/storage capacity, stable guide IDs and evolution previews.
- Python graphics suite: **3 tests passed**, covering all eight Rookies' palette,
  transparency, frame dimensions, copied backs, and two-frame icon layout.
- The new amd64 runner container executes assertions on Apple Silicon with a
  read-only workspace mount. No host packages were installed.
- Save-layout suite: **4 tests passed**. An unmatched test filter correctly exits
  with failure instead of treating zero executed tests as success.
- Documentation index, shell syntax, and tracked diff whitespace checks passed.
- Native mGBA UI/navigation, ordinary wild-battle-to-DigiLab flow, and actual
  flash-save/reload checks remain pending. The battle test harness uses replay
  mode; the ordinary victory filter is covered by C tests, not a live-game test.
- Front portraits remain the intentional player-side fallback. Dedicated
  followers, Champion artwork, audio polish, and milestones 10–30 are not
  represented as finished.

Keep clean container builds and applicable automated tests as each milestone is
implemented. Manual mGBA validation is deferred by developer direction for the
current integrated slice, but remains required before it is promoted to main. The
repeatable [mGBA Smoke-Test Workflow](MGBA_WORKFLOW.md) defines that validation.
