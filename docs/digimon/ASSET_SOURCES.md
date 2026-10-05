# Asset Sources

## Expanded roster — 2026-09-14

193 additional Digimon portraits and their reference stats/learnsets/evolutions
come from [DigimonEmerald revision 75a0c3642ee14311f08d41db23da3ddf52562577](https://github.com/Luna3Step/DigimonEmerald/tree/75a0c3642ee14311f08d41db23da3ddf52562577).
`tools/digimon_roster/manifest.json` records each exact source URL and SHA-256.
Original portraits are retained as `graphics/pokemon/<slug>/source_front.png`.
Lopmon uses the donor's `lopmon/a/front.png`; Dolphmon uses
`dolphmon/front_normal_form.png`. Both were visually reviewed with the full roster.

The conversion retains aspect ratio, uses nearest-neighbor resizing into 64x64,
quantizes to 15 visible colors plus transparency, and copies front art to the
back under the existing user-approved policy. Party icons use two 32x32 frames
and the engine's shared icon palette 0. These are sourced community assets, not
newly authored sprites. Existing source-credit/release requirements still apply.

## Digimon World DS battle sprites — 2026-10-04

Battle portraits for 29 hand-authored Digimon (Kabuterimon, Togemon,
Ikkakumon, Kuwagamon, Stingmon, Koromon, the Adventure Ultimates and Megas,
Etemon, Myotismon, Paildramon, Silphymon, Shurimon, Magnamon,
BlackWarGreymon, Imperialdramon) and Tyrannomon come from
[Digimon World DS on The Spriters Resource](https://www.spriters-resource.com/ds_dsi/dgmnworldds/).
`tools/digimon_roster/curated.py` lists each asset ID, and `manifest.json`
records the asset URL and the SHA-256 of each cut `source_front.png`.
Credit every ripper on release, whether or not the sheet asks for it:

| Uploader (sheet credit) | Digimon |
| --- | --- |
| redblueyellow ("No credit needed") | Kabuterimon, Togemon, Ikkakumon, Kuwagamon, Lillymon, Zudomon, Angewomon, Etemon, Shurimon, Rosemon, Vikemon, Seraphimon, Tyrannomon |
| RadSpyro ("Credit appreciated") | Stingmon, MetalGreymon, WereGarurumon, Garudamon, Myotismon, Paildramon, Silphymon, Magnamon, MetalGarurumon, Phoenixmon, BlackWarGreymon, Imperialdramon |
| A.J. Nitro (ripped with redblueyellow; "Give credit if used") | MagnaAngemon, WarGreymon |
| Garamonde (ripped by Daxx, arranged by Mighty Jetters) | MegaKabuterimon, HerculesKabuterimon |
| Atlanta ("Please give note if used") | Koromon |

`tools/digimon_roster/fetch_dwds.py` caches each sheet in the ignored
`tools/digimon_roster/upstream/dwds/`, cuts the first battle pose, removes the
panel and sheet background, and area-averages sprites larger than 62 px down to
portrait size before the usual 64x64 conversion. Stats, typing and moves for
these species are original placeholders, not from the game. Run it in the dev
container, then `make roster-generate`. Source access is not a redistribution
license; retain credits and resolve rights before release.

DigiEgg and DNA Charge items temporarily reuse the Fire/Leaf/Sun/Dusk Stone
and Linking Cord icons.

## Digimon NPC overworld sprites — 2026-10-04

Jijimon, Leomon, Digitamamon, Monzaemon, Andromon and Kuwagamon field sprites
come from the same Digimon World DS sheets (redblueyellow; Kuwagamon's battle
sheet above). `tools/digimon_maps/npc_sprites.py` cuts each sheet's 3x5 grid
of isometric field frames into Gen 3's nine NPC frames (front-left serves as
down and left, back-left as up; right mirrors left), quantizes to 16 colours
and generates the object graphics tables. The 16x16 Digivice and data-chip
pickup sprites are original drawings made by that script.

The new-game guide portrait (`graphics/birch_speech/birch.png`, replacing
Professor Birch) is Jijimon's first battle pose from the same redblueyellow
sheet, area-averaged to 64x64 by `npc_sprites.py`.

## Agumon Overworld Sprite

The initial Agumon overworld sprite is derived from the community-provided
`Agumon.png` in the supplied [Digimon Story Sprite Project Drive folder](https://drive.google.com/drive/folders/1EgoXHwlXNiurD4X_9WEgoyzm9OuWf_tf).
It was downloaded on 2026-09-13 as a 48x64 RGBA PNG and retained at
`graphics/pokemon/agumon/source.png` (SHA-256:
`3ed6816ade1a20d6899ecfc2dca7d7b9b7633507eff5b2afbefd5f41ee13e67e`).

The source is a 3x4 grid of 16x16 animation frames, not a battle portrait.
`tools/prepare_digimon_sprite.py` selects the first six frames, scales them to
32x32 with nearest-neighbor pixel scaling, and creates the checked-in 192x32
4bpp overworld sheet and its normal/shiny palettes. Run it in the Dev
Container with:

```bash
python3 tools/prepare_digimon_sprite.py
```

## Agumon Battle Sprite

The Agumon battle source is `Agumon 2006 dst battle.png` from the linked Digimon
Story sprite collection. It was downloaded as a 96x96 transparent RGBA PNG and
retained at `graphics/pokemon/agumon/source_battle.png` (SHA-256:
`52fe5cef5278c5e3319dd651ee9f436abe93e247f9767feb354a5e9cfaeb0971`). The
converter crops the opaque bounds, scales them with nearest-neighbor sampling to
48x63, centers that art on a 64x64 transparent canvas, and derives a 32x32 icon.

The battle back currently reuses the verified Agumon front portrait. This is
intentional until a proper rear-facing battle asset is approved; it avoids
shipping a malformed reconstruction. The DigimonEmerald `back.png` reference
is retained as research material, but its side pose is not used.

Agumon now uses those generated front, back, and icon assets in battle and party
screens. The footprint, cry, and shiny palette remain temporary placeholders.
The source pages and their assets do not establish redistribution rights; confirm
the applicable rights before distributing a ROM containing these assets.

## Additional Adventure Rookie portraits

Gabumon, Biyomon, Tentomon, Palmon, Gomamon, Patamon, and Salamon use the
`graphics/pokemon/<name>/front.png` files from
[DigimonEmerald revision 75a0c3642ee14311f08d41db23da3ddf52562577](https://github.com/Luna3Step/DigimonEmerald/tree/75a0c3642ee14311f08d41db23da3ddf52562577/graphics/pokemon).
The original downloads are retained as each species' `source_front.png`.
These are reference-project/community assets, not newly authored artwork.

`tools/prepare_rookie_sprites.py` treats palette index zero as transparent,
preserves aspect ratio with nearest-neighbor scaling, and fits the opaque art
inside a 64×64 battle canvas. Back portraits copy the front by the approved
temporary policy. Icons are fitted to 32×32 and repeated into the two-frame
32×64 layout, remapped to the existing global icon palette 0. Agumon's icon
converter now also uses that shared palette and two-frame layout.

Run both converters and `python3 tools/test_rookie_sprites.py` inside the dev
container. Normal and shiny battle art currently share a palette. Source access
is not a redistribution license; retain credits and resolve rights before release.

## Digivice starter interface

The starter screen uses original repo-native window/pixel primitives to draw
the device casing, LCD, controls, and menu. No Poké Ball image is displayed in
this screen. Shared upstream bag/grass/ball assets are retained because credits,
the save-error screen, and Battle Factory still consume them. Birch's bag remains
the overworld interaction point; its dialogue now directs the player to activate
the Digivice inside it.
