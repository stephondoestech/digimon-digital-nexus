#include "global.h"
#include "digimon_scan_data.h"
#include "event_data.h"
#include "pokemon.h"
#include "script_pokemon_util.h"
#include "string_util.h"
#include "strings.h"
#include "constants/battle.h"
#include "constants/digimon.h"
#include "constants/items.h"
#include "constants/pokemon.h"

u8 Digimon_GetScanPercent(enum Species species)
{
    if (species != SPECIES_AGUMON)
        return Digimon_GetWildScanPercent(species);

    return min(VarGet(VAR_DIGIMON_SCAN_AGUMON), DIGIMON_SCAN_COMPLETE);
}

void Digimon_RecordScan(enum Species species)
{
    u16 progress;

    if (species != SPECIES_AGUMON)
    {
        Digimon_RecordWildScan(species);
        return;
    }

    progress = Digimon_GetScanPercent(species);
    if (progress < DIGIMON_SCAN_COMPLETE)
        VarSet(VAR_DIGIMON_SCAN_AGUMON, min(progress + DIGIMON_SCAN_STEP, DIGIMON_SCAN_COMPLETE));
}

void Digimon_RecordBattleScan(enum Species species, u32 battleFlags, u8 outcome)
{
    if (outcome == B_OUTCOME_WON
     && !(battleFlags & (BATTLE_TYPE_TRAINER | BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED
                      | BATTLE_TYPE_RECORDED_LINK | BATTLE_TYPE_FRONTIER
                      | BATTLE_TYPE_FIRST_BATTLE | BATTLE_TYPE_CATCH_TUTORIAL | BATTLE_TYPE_SAFARI)))
        Digimon_RecordScan(species);
}

u32 Digimon_TryReconstructAgumon(void)
{
    u32 result;

    if (VarGet(VAR_DIGIMON_RECONSTRUCTED_AGUMON))
        return DIGILAB_ALREADY_RECONSTRUCTED;
    if (Digimon_GetScanPercent(SPECIES_AGUMON) < DIGIMON_SCAN_COMPLETE)
        return DIGILAB_INCOMPLETE;

    result = ScriptGiveMon(SPECIES_AGUMON, 5, ITEM_NONE);
    if (result == MON_CANT_GIVE)
        return DIGILAB_FULL;

    VarSet(VAR_DIGIMON_RECONSTRUCTED_AGUMON, TRUE);
    return result == MON_GIVEN_TO_PARTY ? DIGILAB_PARTY : DIGILAB_STORAGE;
}

bool8 Digimon_ReconstructAgumon(void)
{
    u32 result = Digimon_TryReconstructAgumon();
    return result == DIGILAB_PARTY || result == DIGILAB_STORAGE;
}

u32 Digimon_DigiLab(void)
{
    ConvertIntToDecimalStringN(gStringVar1, Digimon_GetScanPercent(SPECIES_AGUMON), STR_CONV_MODE_LEFT_ALIGN, 3);
    if (gSpecialVar_0x8004 == DIGILAB_RECONSTRUCT)
        return Digimon_TryReconstructAgumon();
    return VarGet(VAR_DIGIMON_RECONSTRUCTED_AGUMON) ? DIGILAB_ALREADY_RECONSTRUCTED : DIGILAB_INCOMPLETE;
}
