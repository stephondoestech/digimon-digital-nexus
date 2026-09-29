#include "global.h"
#include "digimon_attribute.h"
#include "constants/digimon.h"
#include "data/digimon_roster_attributes.h"

STATIC_ASSERT(ARRAY_COUNT(sDigimonRosterAttributes) == DIGIMON_ROSTER_COUNT, attribute_roster_count);

enum DigimonAttribute Digimon_GetAttribute(enum Species species)
{
    switch (species)
    {
    case SPECIES_AGUMON:
    case SPECIES_BIYOMON:
    case SPECIES_TENTOMON:
    case SPECIES_GOMAMON:
    case SPECIES_PATAMON:
    case SPECIES_SALAMON:
    case SPECIES_GREYMON:
        return DIGIMON_ATTRIBUTE_VACCINE;
    case SPECIES_GABUMON:
    case SPECIES_PALMON:
        return DIGIMON_ATTRIBUTE_DATA;
    case SPECIES_TYRANNOMON:
        return DIGIMON_ATTRIBUTE_VIRUS;
    default:
        if (species >= SPECIES_ANGORAMON && species < SPECIES_EGG)
            return sDigimonRosterAttributes[species - SPECIES_ANGORAMON];
        return DIGIMON_ATTRIBUTE_NONE;
    }
}

uq4_12_t Digimon_GetAttributeModifier(enum Species attacker, enum Species defender)
{
    enum DigimonAttribute atk = Digimon_GetAttribute(attacker);
    enum DigimonAttribute def = Digimon_GetAttribute(defender);

    if (atk == DIGIMON_ATTRIBUTE_NONE || def == DIGIMON_ATTRIBUTE_NONE
     || atk == DIGIMON_ATTRIBUTE_FREE || atk == DIGIMON_ATTRIBUTE_UNKNOWN
     || def == DIGIMON_ATTRIBUTE_FREE || def == DIGIMON_ATTRIBUTE_UNKNOWN)
        return UQ_4_12(1.0);
    if ((atk == DIGIMON_ATTRIBUTE_VACCINE && def == DIGIMON_ATTRIBUTE_VIRUS)
     || (atk == DIGIMON_ATTRIBUTE_VIRUS && def == DIGIMON_ATTRIBUTE_DATA)
     || (atk == DIGIMON_ATTRIBUTE_DATA && def == DIGIMON_ATTRIBUTE_VACCINE))
        return UQ_4_12(1.25);
    if ((def == DIGIMON_ATTRIBUTE_VACCINE && atk == DIGIMON_ATTRIBUTE_VIRUS)
     || (def == DIGIMON_ATTRIBUTE_VIRUS && atk == DIGIMON_ATTRIBUTE_DATA)
     || (def == DIGIMON_ATTRIBUTE_DATA && atk == DIGIMON_ATTRIBUTE_VACCINE))
        return UQ_4_12(0.8);
    return UQ_4_12(1.0);
}
