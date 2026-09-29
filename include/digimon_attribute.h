#ifndef GUARD_DIGIMON_ATTRIBUTE_H
#define GUARD_DIGIMON_ATTRIBUTE_H

#include "constants/species.h"
#include "fpmath.h"

enum DigimonAttribute
{
    DIGIMON_ATTRIBUTE_NONE,
    DIGIMON_ATTRIBUTE_VACCINE,
    DIGIMON_ATTRIBUTE_DATA,
    DIGIMON_ATTRIBUTE_VIRUS,
    DIGIMON_ATTRIBUTE_FREE,
    DIGIMON_ATTRIBUTE_UNKNOWN,
};

enum DigimonAttribute Digimon_GetAttribute(enum Species species);
uq4_12_t Digimon_GetAttributeModifier(enum Species attacker, enum Species defender);

#endif // GUARD_DIGIMON_ATTRIBUTE_H
