#include "global.h"
#include "digimon_field_guide.h"
#include "digimon_scan_data.h"
#include "event_data.h"
#include "pokemon.h"
#include "string_util.h"
#include "strings.h"
#include "constants/digimon.h"

u32 Digimon_GuideStatus(void)
{
    enum Species species = Digimon_GuideSpecies(gSpecialVar_0x8004);
    if (species == SPECIES_NONE)
        return FALSE;
    StringCopy(gStringVar1, gSpeciesInfo[species].categoryName);
    if (!Digimon_CanScan(species))
    {
        StringCopy(gStringVar2, COMPOUND_STRING("Event/Partner form"));
        StringCopy(gStringVar3, COMPOUND_STRING("Unavailable"));
    }
    else
    {
        ConvertIntToDecimalStringN(gStringVar2, Digimon_GetWildScanPercent(species), STR_CONV_MODE_LEFT_ALIGN, 3);
        StringAppend(gStringVar2, COMPOUND_STRING("%"));
        StringCopy(gStringVar3, Digimon_IsReconstructed(species) ? COMPOUND_STRING("Already completed")
            : Digimon_GetWildScanPercent(species) == 100 ? COMPOUND_STRING("Ready")
            : COMPOUND_STRING("Needs 100% Scan"));
    }
    return TRUE;
}

// VAR_8005 selects one evolution branch; show all actual engine branches.
u32 Digimon_GuideEvolution(void)
{
    enum Species species = Digimon_GuideSpecies(gSpecialVar_0x8004);
    const struct Evolution *evolutions;
    const struct Evolution *evo;
    if (species == SPECIES_NONE)
        return FALSE;
    evolutions = GetSpeciesEvolutions(species);
    if (evolutions == NULL)
        return FALSE;
    for (u32 i = 0; i <= gSpecialVar_0x8005; i++)
        if (evolutions[i].method == EVOLUTIONS_END)
            return FALSE;
    evo = &evolutions[gSpecialVar_0x8005];
    StringCopy(gStringVar1, GetSpeciesName(evo->targetSpecies));
    if (evo->method == EVO_LEVEL)
    {
        StringCopy(gStringVar2, COMPOUND_STRING("Level "));
        ConvertIntToDecimalStringN(gStringVar2 + StringLength(gStringVar2), evo->param, STR_CONV_MODE_LEFT_ALIGN, 3);
        StringCopy(gStringVar3, COMPOUND_STRING("Level up to evolve."));
        if (species == SPECIES_AGUMON)
            StringCopy(gStringVar3, evo->targetSpecies == SPECIES_GREYMON
                ? COMPOUND_STRING("Attack > Defense") : COMPOUND_STRING("Attack <= Defense"));
        else if (evo->params != NULL)
            StringCopy(gStringVar3, COMPOUND_STRING("Additional conditions apply."));
    }
    else
    {
        StringCopy(gStringVar2, COMPOUND_STRING("Special evolution"));
        StringCopy(gStringVar3, COMPOUND_STRING("Requires a special trigger."));
    }
    return TRUE;
}

u32 Digimon_GuideReconstruct(void)
{
    enum Species species = Digimon_GuideSpecies(gSpecialVar_0x8004);
    StringCopy(gStringVar1, GetSpeciesName(species));
    ConvertIntToDecimalStringN(gStringVar2, Digimon_ReconstructionLevel(species), STR_CONV_MODE_LEFT_ALIGN, 2);
    // VAR_8006 == 0 is a read-only confirmation preview.
    return gSpecialVar_0x8006 ? Digimon_TryReconstruct(species) : Digimon_CanScan(species);
}
