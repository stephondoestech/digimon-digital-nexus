#ifndef GUARD_DIGIMON_STARTERS_H
#define GUARD_DIGIMON_STARTERS_H

#include "constants/species.h"

#define DIGIMON_STARTER_COUNT 8

bool32 Digimon_IsStarterSpecies(enum Species species);
u16 Digimon_GetLegacyStarterChoice(u16 choice);
const u8 *Digimon_GetStarterAttribute(u16 choice);
const u8 *Digimon_GetStarterElement(u16 choice);
void CB2_DigiviceStarter(void);

#endif
