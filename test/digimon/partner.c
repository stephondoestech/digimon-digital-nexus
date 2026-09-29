#include "global.h"
#include "digimon_partner.h"
#include "event_data.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "test/test.h"
#include "constants/species.h"
#include "constants/vars.h"

TEST("Agumon Partner registration identifies one individual and cannot be overwritten")
{
    struct Pokemon partner, other;

    VarSet(VAR_DIGIMON_PARTNER, SPECIES_NONE);
    CreateMon(&partner, SPECIES_AGUMON, 5, 0, OTID_STRUCT_PRESET(123));
    CreateMon(&other, SPECIES_AGUMON, 5, 1, OTID_STRUCT_PRESET(123));
    EXPECT(Digimon_RegisterPartner(&partner));
    EXPECT_EQ(Digimon_GetPartner(), SPECIES_AGUMON);
    EXPECT(Digimon_IsPartnerMon(&partner.box));
    EXPECT(!Digimon_IsPartnerMon(&other.box));
    EXPECT(!Digimon_RegisterPartner(&other));
    EXPECT(Digimon_IsPartnerMon(&partner.box));
}

TEST("Agumon Partner matching checks original trainer and allows Champion evolution")
{
    struct Pokemon partner, other;
    u16 species;

    PARAMETRIZE { species = SPECIES_GREYMON; }
    PARAMETRIZE { species = SPECIES_TYRANNOMON; }

    VarSet(VAR_DIGIMON_PARTNER, SPECIES_NONE);
    CreateMon(&partner, SPECIES_AGUMON, 5, 0, OTID_STRUCT_PRESET(123));
    CreateMon(&other, SPECIES_AGUMON, 5, 0, OTID_STRUCT_PRESET(456));
    EXPECT(Digimon_RegisterPartner(&partner));
    EXPECT(!Digimon_IsPartnerMon(&other.box));
    SetMonData(&partner, MON_DATA_SPECIES, &species);
    EXPECT(Digimon_IsPartnerMon(&partner.box));
}

TEST("Agumon Partner rejects other species and eggs")
{
    struct Pokemon mon;
    u8 isEgg = TRUE;

    VarSet(VAR_DIGIMON_PARTNER, SPECIES_NONE);
    CreateMon(&mon, SPECIES_ZIGZAGOON, 5, 0, OTID_STRUCT_PLAYER_ID);
    EXPECT(!Digimon_RegisterPartner(&mon));
    CreateMon(&mon, SPECIES_AGUMON, 5, 0, OTID_STRUCT_PLAYER_ID);
    SetMonData(&mon, MON_DATA_IS_EGG, &isEgg);
    EXPECT(!Digimon_RegisterPartner(&mon));
    EXPECT_EQ(Digimon_GetPartner(), SPECIES_NONE);
}

TEST("Agumon Partner status follows reordering and storage without changing identity")
{
    struct Pokemon partner;

    ZeroPlayerPartyMons();
    ResetPokemonStorageSystem();
    VarSet(VAR_DIGIMON_PARTNER, SPECIES_NONE);
    EXPECT_EQ(Digimon_PartnerInfo(), 0);
    EXPECT(!Digimon_RegisterLeadPartner());
    CreateMon(&gParties[B_TRAINER_PLAYER][0], SPECIES_AGUMON, 5, 0, OTID_STRUCT_PLAYER_ID);
    EXPECT(Digimon_RegisterLeadPartner());
    partner = gParties[B_TRAINER_PLAYER][0];
    ZeroPlayerPartyMons();
    gParties[B_TRAINER_PLAYER][3] = partner;
    EXPECT_EQ(Digimon_PartnerInfo(), 1);
    *GetBoxedMonPtr(2, 4) = partner.box;
    ZeroPlayerPartyMons();
    EXPECT_EQ(Digimon_PartnerInfo(), 2);
    ResetPokemonStorageSystem();
    EXPECT_EQ(Digimon_PartnerInfo(), 3);
    EXPECT_EQ(Digimon_GetPartner(), SPECIES_AGUMON);
}
