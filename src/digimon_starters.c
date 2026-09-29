#include "global.h"
#include "digimon_starters.h"
#include "starter_choose.h"

static const u16 sStarters[DIGIMON_STARTER_COUNT] =
{
    SPECIES_AGUMON, SPECIES_GABUMON, SPECIES_BIYOMON, SPECIES_TENTOMON,
    SPECIES_PALMON, SPECIES_GOMAMON, SPECIES_PATAMON, SPECIES_SALAMON,
};

static const u8 sVaccine[] = _("Vaccine");
static const u8 sData[] = _("Data");
static const u8 *const sAttributes[DIGIMON_STARTER_COUNT] =
{
    sVaccine, sData, sVaccine, sVaccine, sData, sVaccine, sData, sVaccine,
};
static const u8 *const sElements[DIGIMON_STARTER_COUNT] =
{
    COMPOUND_STRING("Fire"), COMPOUND_STRING("Ice"),
    COMPOUND_STRING("Wind"), COMPOUND_STRING("Electric"),
    COMPOUND_STRING("Plant"), COMPOUND_STRING("Water"),
    COMPOUND_STRING("Wind"), COMPOUND_STRING("Holy"),
};

u16 GetStarterPokemon(u16 choice)
{
    return sStarters[choice < DIGIMON_STARTER_COUNT ? choice : 0];
}

bool32 Digimon_IsStarterSpecies(enum Species species)
{
    for (u32 i = 0; i < DIGIMON_STARTER_COUNT; i++)
        if (sStarters[i] == species)
            return TRUE;
    return FALSE;
}

u16 Digimon_GetLegacyStarterChoice(u16 choice)
{
    // Keep Hoenn's existing three rival branches valid until the story overhaul.
    return choice < DIGIMON_STARTER_COUNT ? choice % 3 : 0;
}

const u8 *Digimon_GetStarterAttribute(u16 choice)
{
    return sAttributes[choice < DIGIMON_STARTER_COUNT ? choice : 0];
}

const u8 *Digimon_GetStarterElement(u16 choice)
{
    return sElements[choice < DIGIMON_STARTER_COUNT ? choice : 0];
}
