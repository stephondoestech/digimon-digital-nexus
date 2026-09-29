# mGBA Smoke-Test Workflow

## Roster expansion checks — 2026-09-14

The ROM contains 203 Digimon. All eight Adventure starters are excluded from
ordinary encounters; the old wild-Agumon scan checks below are superseded.

1. Open the rebuilt root `pokeemerald.gba` and reset the emulator rather than
   restoring a state captured with an older ROM.
2. New game: Birch shows Betamon, the Digivice still offers eight starters, and
   the rescue opponent is Gazimon. Route 101 grass offers common Rookies only.
3. Encounter/capture several species, inspect party icons and summary pages,
   battle with them, save normally, restart, and verify their state persists.
4. Test fishing/surfing for aquatic Digimon, woods for insects/plants, and a
   higher-level area for Champions. No wild Champion should be below level 24.
5. Train a common Rookie along one of the level-evolution paths in
   [the complete roster](EXPANDED_ROSTER.md). Check the evolved battle portrait.
6. Check trainer battles and teach a suitable aquatic/flying Digimon the field
   moves needed for story progression.

Use `make roster-check` for the source-data checks. Build the test ELF separately
and run the existing amd64 runner with filters `Digimon roster`, `Agumon`, and
`Digivice`. Production creation converts legacy species requests to Digimon;
upstream battle-test fixtures intentionally retain their original species.

The saved field layout and existing species IDs are preserved. Old dex marks
in slots 1-193 are reinterpreted as the new entries; creatures already in an old
save are not automatically changed. Cutscene/NPC art remains separate from the
battle population migration.

Use native mGBA on macOS for gameplay validation. The ROM is built in the
container but written to the bind-mounted repository, so mGBA can open it
directly without copying files out of Docker.

## Build

From the Dev Container terminal, build the ROM:

```bash
make -j$(nproc)
```

Open `pokeemerald.gba` from the repository root in mGBA. For a clean build after
toolchain or graphics changes, run `make clean` before the build command.

Do not use a pre-existing save for checks that depend on early-game encounters or
evolution state. In mGBA, create a new save or remove only the matching local
save file through mGBA's save-management UI before starting the checklist.

## Current Vertical-Slice Checklist

Record the ROM build date and whether the test used a new save.

1. Start a new game and activate the Digivice in Birch's bag on Route 101.
   Confirm all eight names are visible. Browse up/down, wrap both ends, select a
   name with A, cancel with B, then select and confirm with A again.
2. Repeat for every Rookie using separate new-game saves. Confirm the chosen
   level-5 Digimon, portrait, party icon, and starting moves are correct. No
   Pokémon portrait should appear for a Rookie. Continue through the Route 103
   rival battle, especially with starter choices 4–8, to check progression.
3. Save, close mGBA, reopen the ROM, and confirm the chosen starter
   remains in the party with its expected name and stats.
4. Level an Agumon to 16 with Attack greater than Defense. Confirm the evolution
   sequence completes and the result is Greymon.
5. Repeat from a separate save with Defense greater than or equal to Attack.
   Confirm the result is Tyrannomon, including the equal-stat case when practical.
6. After each Champion evolution, enter a battle, use at least one learned move,
   save, reload, and confirm the Champion remains valid and usable.
7. Open the DigiLab Field Guide. Browse several Rookies and Champions, inspect
   their Attribute, Element, stage, scan status and evolution details, then
   press B to return without granting anything.
8. Use Birch's lab PC. Confirm Scan Data, Reconstruct, Storage, Partner, and
   Exit are separate menu actions; B also exits and restores player movement.
9. Defeat a common wild Rookie. Its entry should gain 20% Scan Data, capped at
   100%. Capturing, fleeing, losing, trainer, and starter rescue battles must
   not add progress.
10. Save at 40%, fully close and reopen mGBA, and verify 40% remains. Try
    reconstruction before 100%; it must refuse without granting a Digimon.
11. At 100%, explicitly reconstruct. Verify a level-5 Rookie or level-24
    Champion joins the party; retry and save/reload to confirm it is one-time.
12. From separate saves, repeat with a full party (sent to storage), then full
    party and storage (refused, but succeeds after freeing a slot). Verify the
    Storage action opens the existing storage UI and returns to the DigiLab.
13. Check Partner status, reorder the party, deposit the starter, and evolve it.
    Status must follow the same individual, not another Agumon. Save/reload and
    check again. Older saves without registration can explicitly register a
    hatched starter Rookie in slot 1 through the Partner menu. Repeat with a
    non-Agumon starter, and confirm reconstructing Agumon does not replace it.

The seven additional followers, cries, footprints, and existing Champion art
still have documented temporary assets. Rookie battle portraits and icons do
not. Treat crashes, missing sprites, invalid names, failed evolution, or
save/reload failures as blockers.

The eight-choice Digivice supersedes the milestone-5.2 Agumon-only selector.
All eight Adventure starters remain event/initial-choice species. Expanded
roster scanning and reconstruction cover the 193 ordinary wild Digimon.

## Automated Runtime Tests

Compile the test ELF in the development container (separately from the production
ROM target):

```bash
make -j$(nproc) pokeemerald-test.elf TESTS=Agumon
```

Then run these commands from the repository root in the **host terminal**:

```bash
docker build --platform linux/amd64 -f docker/Dockerfile.test-runner -t digimon-digital-nexus-tests:local .
docker run --rm --platform linux/amd64 --cpus=2 -v "$PWD:/work:ro" digimon-digital-nexus-tests:local
```

The x86 runner and its libraries stay inside Docker. Docker Desktop's amd64
emulation is required on Apple Silicon. The repository is mounted read-only;
filtering and headless patches affect only a temporary copy inside the container.
The default run executes `Agumon` and `Digivice` filters; pass `/work/pokeemerald-test.elf ''` after the
image name to run all tests. Rebuild this image after runner/script changes.

The wrapper rejects runs that produce no test results. Native ARM64 `make check`
still cannot execute the bundled x86 binary; a successful compile or a `No tests
found` message is not a runtime pass. Tests cover the Digivice input/confirmation
state machine and C logic. They do not replace visual review, flash-save/reload,
or the complete field-script-to-battle flow; the manual checklist remains required.
