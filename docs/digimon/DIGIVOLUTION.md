# Digivolution

Digivolution will not be a direct Pokémon-evolution reskin. Persistent evolution,
branching requirements, Armor forms, and DNA Digivolution will be introduced as
separate proven systems. Temporary Partner Digivolution is deferred from the
current milestone plan.

The first proof-of-concept is Agumon's branching Champion Digivolution at level
16. An Agumon whose Attack exceeds its Defense Digivolves into Greymon; one whose
Defense is at least its Attack Digivolves into Tyrannomon. These temporary rules
use the upstream evolution-condition framework and will later be replaced or
extended by Digimon-specific requirements.

All eight starters Digivolve at level 16. Gabumon, Biyomon, Patamon and Salamon
become Garurumon, Birdramon, Angemon and Gatomon; Tentomon, Palmon and Gomamon
become Kabuterimon, Togemon and Ikkakumon.

Placeholder rules until Milestones 15, 16, 19 and 21 design their systems:

| Kind | Requirement | Lines |
| --- | --- | --- |
| Ultimate | Level 32 | Greymon→MetalGreymon, Garurumon→WereGarurumon, Birdramon→Garudamon, Kabuterimon→MegaKabuterimon, Togemon→Lillymon, Ikkakumon→Zudomon, Angemon→MagnaAngemon, Gatomon→Angewomon |
| Ultimate | Level 45 | Devimon→Myotismon |
| Mega | Level 48 | MetalGreymon→WarGreymon, WereGarurumon→MetalGarurumon, Garudamon→Phoenixmon, MegaKabuterimon→HerculesKabuterimon, Lillymon→Rosemon, Zudomon→Vikemon, MagnaAngemon→Seraphimon, Paildramon→Imperialdramon |
| Champion | Level 30 | Wormmon→Stingmon |
| Armor | Level 20 + held Digi-Egg | Veemon→Flamedramon (Courage), Hawkmon→Shurimon (Sincerity), Armadillomon→Digmon (Knowledge) |
| Armor | Level 30 + held Digi-Egg | Veemon→Magnamon (Miracles) |
| DNA | Level 32 + held DNA Charge | ExVeemon or Stingmon→Paildramon; Aquilamon or Gatomon→Silphymon |

Held items are consumed on Digivolution. Item entries are listed before plain
level entries, so a Gatomon holding a DNA Charge becomes Silphymon, not
Angewomon. DNA forms currently need only one partner. Kuwagamon, Koromon,
Etemon and BlackWarGreymon have no evolution route yet; Tyrannomon has no
Ultimate yet. Items are not placed in the world yet; use the debug menu.

A line shares one growth rate (the generator copies it from the pre-evolution),
because the engine recalculates level from experience after evolving.
