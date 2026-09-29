# Save editor

`tools/digimon_save_editor.py` reads and edits the standard 0x20000-byte GBA
flash save used by mGBA. It selects the newest valid save slot, updates the
Digimon variables, and recalculates the affected sector checksum.

Replace `game.sav` below with the actual save file path shown in mGBA's save
directory; the filename is only an example.

Inspect a save without changing it:

```sh
python3 tools/digimon_save_editor.py ~/Library/Application\ Support/mGBA/POKEMON\ EMER/pokeemerald.sav show
```

Useful test states (writes require the explicit `--in-place` flag and create a
`.bak` backup by default):

```sh
python3 tools/digimon_save_editor.py game.sav set scan 100 --in-place
python3 tools/digimon_save_editor.py game.sav set starter Agumon --in-place
python3 tools/digimon_save_editor.py game.sav set level 5 --party-slot 1 --in-place
python3 tools/digimon_save_editor.py game.sav set exp 1250 --party-slot 1 --in-place
python3 tools/digimon_save_editor.py game.sav lab-ready --in-place
```

The same workflow is available through Make:

```sh
make save-editor SAVE=game.sav              # numbered interactive menu
make save-editor-show SAVE=game.sav
make save-editor-lab-ready SAVE=game.sav
make save-editor-next-level SAVE=game.sav PARTY_SLOT=1
make save-editor-partner SAVE=game.sav PARTY_SLOT=1
```

`save-editor-next-level` sets the selected party member to one EXP below the
next level. `save-editor-partner` copies the selected member's personality and
original trainer ID into the Partner state (Agumon Champion branches map back
to the Agumon Partner line).

The helper changes saved variables only; it does not synthesize a party member,
Partner personality/OT identity, or storage contents. Use the game's DigiLab
reconstruction flow to exercise those paths after setting Scan Data to 100%.
