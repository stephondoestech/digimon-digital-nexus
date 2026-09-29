# Adventure Rookie Vertical Slice

Milestone 5 establishes the eight Adventure partner Rookies as engine species.
Their battle values are prototype balance values, not final canon data. Attribute
matchups use the separate Vaccine/Virus/Data combat layer, while Element maps to
the current engine type chart.

| Digimon | Attribute | Element / engine type | Recruitment plan | Evolution plan |
| --- | --- | --- | --- | --- |
| Agumon | Vaccine | Fire | Digivice starter; Route 101; DigiLab reconstruction | Greymon or Tyrannomon at level 16 |
| Gabumon | Data | Ice | Digivice starter, level 5 | Garurumon (future) |
| Biyomon | Vaccine | Wind / Flying | Digivice starter, level 5 | Birdramon (future) |
| Tentomon | Vaccine | Electric / Bug-Electric | Digivice starter, level 5 | Kabuterimon (future) |
| Palmon | Data | Plant / Grass | Digivice starter, level 5 | Togemon (future) |
| Gomamon | Vaccine | Water | Digivice starter, level 5 | Ikkakumon (future) |
| Patamon | Data | Wind / Flying | Digivice starter, level 5 | Angemon (future) |
| Salamon | Vaccine | Holy / Fairy | Digivice starter, level 5 | Gatomon (future) |

All eight are available through the Digivice inside Birch's bag during the
Route 101 rescue. Up/down browses the complete list and updates the portrait;
A opens confirmation, B cancels it, and A confirms the selected level-5 Partner.
Battle portraits and two-frame party icons now show Digimon. Player-side battle
art intentionally reuses front art. Footprints, cries, and the seven additional
followers retain their explicitly temporary engine assets.

The eight starters are excluded from ordinary wild encounters. Common Rookies
are found by habitat across the existing routes, and their Scan Data can be
reconstructed through the DigiLab. Champions appear in later areas at level 24+
and use the same collection loop. The current starter evolution branches remain
the first dedicated story lines; additional roster evolutions use the imported
level rules documented in [the expanded roster](EXPANDED_ROSTER.md).

The selected index is saved in `VAR_DIGIMON_STARTER_CHOICE` (`0x40FE`). Hoenn's
legacy `VAR_STARTER_MON` remains in the range 0–2 so existing rival scripts
continue to run. Existing Agumon development saves read the unused zero as Agumon.
Use a new game to test starter selection; loading an existing save does not
replace its starter. Every selected Rookie can be registered as the Partner.
