#ifndef GUARD_DIGIMON_FIELD_GUIDE_H
#define GUARD_DIGIMON_FIELD_GUIDE_H
#include "constants/species.h"

struct DigimonFieldGuideData
{
    enum Species species;
    const u8 *attribute;
};

// Populates STR_VAR_1 (name), STR_VAR_2 (Attribute), and STR_VAR_3 (Element)
// for the indexed entry in VAR_0x8004. Starter entries occupy indices 0-7;
// the generated expanded roster follows them.
u32 Digimon_FieldGuideEntry(void);
enum Species Digimon_GuideSpecies(u16 index);
u32 Digimon_GuideList(void);
u32 Digimon_GuideStatus(void);
u32 Digimon_GuideEvolution(void);
u32 Digimon_GuideReconstruct(void);

#endif // GUARD_DIGIMON_FIELD_GUIDE_H
