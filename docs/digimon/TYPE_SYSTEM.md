# Type System

Digimon has two independent battle concepts:

- Attributes: Vaccine, Virus, Data, Free, and Unknown.
- Elements: Neutral, Fire, Water, Nature, Electric, Wind, Earth, Ice, Light, Dark,
  and Machine.

Elements continue to use the engine's existing type chart. Attributes are now a
separate matchup layer for damaging moves:

- Vaccine deals 1.25× damage to Virus and takes 0.8× from Virus.
- Virus deals 1.25× damage to Data and takes 0.8× from Data.
- Data deals 1.25× damage to Vaccine and takes 0.8× from Vaccine.
- Same-attribute matchups are neutral.
- Free, Unknown, legacy non-Digimon species and status/fixed-damage moves are
  neutral. Type immunity still reduces damage to zero.

The two multipliers are combined, so battle effectiveness messages continue to
communicate the final result without changing elemental typing. Attribute values
are sourced from the pinned roster manifest and exposed through
`Digimon_GetAttribute` / `Digimon_GetAttributeModifier`.
