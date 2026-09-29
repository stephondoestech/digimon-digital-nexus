# Scan Data, DigiLab, and Partner

Updated: 2026-09-15. The DigiLab collection loop supports the expanded roster.

## Rules

- Ordinary wild victories against a roster Rookie or Champion grant 20% Scan
  Data. Trainer, link, replay, facility, Safari, tutorial, and starter rescue
  battles do not count. Captures, losses, and escapes grant nothing.
- At 100%, Birch's lab PC can reconstruct that species once. Rookies return at
  level 5; Champions return at level 24. Reconstruction is explicit and
  requires confirmation.
- A full party sends the result to storage. If both are full, no state is
  consumed; free space and retry. Successful reconstruction retains 100% data
  and records a separate flag preventing another grant, including after release.
- The selected starter Rookie is registered as Partner using personality plus
  original trainer ID. The designation follows it through party reordering,
  storage, and permanent Greymon/Tyrannomon evolution. Registration cannot
  overwrite an existing designation. Identical cloned IDs are indistinguishable.
- The Partner menu reports party, storage, or unavailable. It does not prohibit
  release, trade, or Day Care deposit. Older unregistered saves can explicitly
  register their lead hatched starter Rookie; no automatic guess is made.

## Persistence and integration

Reserved event variables `0x40F7`–`0x40FE` retain the original Agumon prototype
and Partner state. Expanded per-species scan/reconstruction state is packed into
the existing 104-byte SaveBlock2 dex reservation, with no save-block resizing.
`0x40FE` stores the eight-way starter selection independently of Hoenn's three
legacy rival branches. Zero continues to mean Agumon for existing prototype saves.
Previously unused bytes are initialized when the first expanded scan is awarded.
Existing development saves that used the earlier species-only Partner variable
should use a new save for validation.

Battle completion calls `Digimon_RecordBattleScan` in `src/battle_main.c`.
`src/digimon_scan_data.c` and `src/digimon_partner.c` provide C logic and script
specials; `data/scripts/digimon_digilab.inc` owns the interaction flow. New specials
are appended to the existing table to preserve earlier IDs.

`test/digimon/` covers thresholds, battle exclusions, explicit reconstruction,
duplicates, party/storage capacity, and individual Partner matching. See
[the mGBA workflow](MGBA_WORKFLOW.md) for the container runtime commands and
manual save/reload and UI checks. This is not temporary Partner Digivolution;
that remains milestone 10.
