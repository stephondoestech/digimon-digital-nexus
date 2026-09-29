#include "global.h"
#include "digimon_partner.h"
#include "digimon_starters.h"
#include "event_data.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "string_util.h"
#include "strings.h"

enum Species Digimon_GetPartner(void)
{
    enum Species species = VarGet(VAR_DIGIMON_PARTNER);
    return Digimon_IsStarterSpecies(species) ? species : SPECIES_NONE;
}

bool8 Digimon_RegisterPartner(struct Pokemon *mon)
{
    u32 personality, otId;

    if (Digimon_GetPartner() != SPECIES_NONE
     || !Digimon_IsStarterSpecies(GetMonData(mon, MON_DATA_SPECIES))
     || GetMonData(mon, MON_DATA_IS_EGG))
        return FALSE;

    personality = GetMonData(mon, MON_DATA_PERSONALITY);
    otId = GetMonData(mon, MON_DATA_OT_ID);
    VarSet(VAR_DIGIMON_PARTNER_PID_LOW, personality);
    VarSet(VAR_DIGIMON_PARTNER_PID_HIGH, personality >> 16);
    VarSet(VAR_DIGIMON_PARTNER_OT_LOW, otId);
    VarSet(VAR_DIGIMON_PARTNER_OT_HIGH, otId >> 16);
    VarSet(VAR_DIGIMON_PARTNER, GetMonData(mon, MON_DATA_SPECIES));
    return TRUE;
}

bool8 Digimon_IsPartnerMon(struct BoxPokemon *mon)
{
    enum Species species = GetBoxMonData(mon, MON_DATA_SPECIES);
    enum Species baseSpecies = Digimon_GetPartner();
    u32 personality = VarGet(VAR_DIGIMON_PARTNER_PID_LOW) | (u32)VarGet(VAR_DIGIMON_PARTNER_PID_HIGH) << 16;
    u32 otId = VarGet(VAR_DIGIMON_PARTNER_OT_LOW) | (u32)VarGet(VAR_DIGIMON_PARTNER_OT_HIGH) << 16;

    return baseSpecies != SPECIES_NONE
        && (species == baseSpecies || (baseSpecies == SPECIES_AGUMON
            && (species == SPECIES_GREYMON || species == SPECIES_TYRANNOMON)))
        && !GetBoxMonData(mon, MON_DATA_IS_EGG)
        && GetBoxMonData(mon, MON_DATA_PERSONALITY) == personality
        && GetBoxMonData(mon, MON_DATA_OT_ID) == otId;
}

// Result: 0 unregistered, 1 party, 2 storage, 3 unavailable.
u32 Digimon_PartnerInfo(void)
{
    u32 i, box;

    if (Digimon_GetPartner() == SPECIES_NONE)
        return 0;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (Digimon_IsPartnerMon(&gParties[B_TRAINER_PLAYER][i].box))
        {
            StringCopy(gStringVar1, GetSpeciesName(GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES)));
            return 1;
        }
    }
    for (box = 0; box < TOTAL_BOXES_COUNT; box++)
    {
        for (i = 0; i < IN_BOX_COUNT; i++)
        {
            struct BoxPokemon *mon = GetBoxedMonPtr(box, i);
            if (Digimon_IsPartnerMon(mon))
            {
                StringCopy(gStringVar1, GetSpeciesName(GetBoxMonData(mon, MON_DATA_SPECIES)));
                return 2;
            }
        }
    }
    return 3;
}

u32 Digimon_RegisterLeadPartner(void)
{
    return Digimon_RegisterPartner(&gParties[B_TRAINER_PLAYER][0]);
}
