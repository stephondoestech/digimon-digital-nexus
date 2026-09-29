# Terminology

Player-facing terminology will transition incrementally:

- Pokémon to Digimon (main menu, battle prompts, and recovery flow updated)
- Trainer to Tamer (engine-facing trainer classes and most legacy script text remain)
- Pokédex to Field Guide or Digivice (main menu label is now DIGIVICE)
- Pokémon Center to Recovery Terminal (nurse flow updated)
- PC to DigiLab (Birch's lab PC is the first functional DigiLab)
- Pokédollars to Bits (currency terminology remains deferred)

Milestones 0 and 1 retain existing player-facing engine terminology. The existing
Pokédex remains the engine data surface while the DigiLab Field Guide presents all
203 Digimon with Attribute, Element, stage, Scan Data and evolution details. No
global text or internal symbol renames are part of this phase. Expanded Scan Data
and reconstruction use the existing save layout; Partner identity remains in the
reserved event variables and is available through the DigiLab menu.

The Digivice starter interface and Birch's starter-grant dialogue now use Digimon
wording. The milestone-6 text search still finds legacy wording in other Birch
dialogue, party/item prompts, storage
submenus, Pokédex page text, trainer classes, and currency displays. These are
outside the current menu/recovery/DigiLab pass; the overhaul is not global yet.
