# Digimon Roster

The playable roster now contains **203 Digimon**: the existing ten species plus
193 sourced additions (106 Rookies and 87 Champions). See the generated
[complete roster, evolution levels and locations](EXPANDED_ROSTER.md).

All 6,459 ordinary/facility JSON encounter slots use Digimon. The eight Adventure
starters never appear in the wild; their recruitment is the initial Digivice
choice and future special events. Early routes use common Digimon such as
Gazimon, Kunemon, Goblimon, Elecmon, Labramon, Floramon and Mushroomon.
Water and fishing tables require aquatic types. Wild Champions require level 24+.

The added roster has individual stats, abilities, growth curves, level-up moves,
64x64 battle portraits, shared-palette party icons and 72 level-evolution paths.
All 193 added species occur in the encounter tables. Trainer parties and scripted
species references are migrated; the central creation adapter handles remaining
legacy gifts, trades, roamers and generated teams. Existing saved creatures are
not rewritten automatically.

The expanded roster includes field-move teaching support so Cut, Surf, Fly,
Strength, Flash, Rock Smash, Waterfall and Dive remain obtainable.

## DigiLab collection loop

The DigiLab's Scan Data view lists the 193 ordinary wild Digimon. Each eligible
wild victory adds 20% Scan Data, capped at 100%; trainer, link, facility, Safari,
tutorial, capture, loss and escape outcomes do not count. At 100%, Reconstruct
creates one copy per species (Rookies at level 5 and Champions at level 24),
sends it to the party or storage, and preserves progress when both are full.
Starter and other event forms stay outside this reconstruction list.

Source and generation: `tools/digimon_roster/`, pinned to DigimonEmerald revision
`75a0c3642ee14311f08d41db23da3ddf52562577`. The manifest preserves source URLs,
SHA-256 hashes, species IDs, dex slots, moves, stats and evolution targets.

## Save layout and testing

New species IDs are appended after Salamon. Dex slots 1-193 are reassigned to
the added Digimon, avoiding growth of the saved seen/caught arrays. Existing
marks in those legacy dex slots now describe their assigned Digimon. Party,
storage, story variables and starter species IDs retain their previous layout.
No save files are modified by the importer or validation commands.

Run `make roster-check` for data/art validation. In the development container,
`make roster-generate` rebuilds the checked-in data. On a fresh checkout, first
run `python3 tools/digimon_roster/fetch_assets.py` to populate the ignored pinned
reference cache. Then build `make -j6` and the separate test ELF; use the documented
amd64 runner with the `Digimon roster`, `Agumon` and `Digivice` filters.

## Remaining content polish

Portraits intentionally double as back sprites. Donor-only Light typing maps to
Fairy, Epiphany maps to Synchronize, and eleven donor-exclusive moves use explicit
existing-engine equivalents recorded in the importer. Custom cries, distinct
shiny palettes, dedicated followers, full later evolution stages and scene art
remain future work. The first ten species retain their previous art policy.

The first implementation is Agumon. It is a Rookie-stage, Vaccine-attribute,
Fire-element Digimon with base stats 55 HP, 70 Attack, 45 Defense, 65 Special
Attack, 45 Special Defense, and 60 Speed. Vaccine matchup damage is calculated
separately from Agumon's Fire elemental typing.

The first Champion branches remain Greymon and Tyrannomon. Their previous shared
Champion artwork is still temporary; it is not counted as newly sourced art.

The Adventure Rookie vertical slice also includes Gabumon, Biyomon, Tentomon,
Palmon, Gomamon, Patamon, and Salamon. Their intended Attributes, Elements,
recruitment plans, and future evolution targets are recorded in
[Adventure Rookie Vertical Slice](ROOKIE_VERTICAL_SLICE.md).
