#include "global.h"
#include "starter_choose.h"
#include "digimon_field_guide.h"
#include "digimon_starters.h"
#include "digimon_partner.h"
#include "event_data.h"
#include "pokemon.h"
#include "script_pokemon_util.h"
#include "string_util.h"
#include "strings.h"
#include "test/test.h"
#include "constants/characters.h"
#include "constants/digimon.h"
#include "constants/species.h"

TEST("Digivice lists all eight Adventure starters in order")
{
    static const u16 species[] = { SPECIES_AGUMON, SPECIES_GABUMON,
        SPECIES_BIYOMON, SPECIES_TENTOMON, SPECIES_PALMON, SPECIES_GOMAMON,
        SPECIES_PATAMON, SPECIES_SALAMON };
    for (u32 i = 0; i < ARRAY_COUNT(species); i++)
    {
        EXPECT_EQ(GetStarterPokemon(i), species[i]);
        EXPECT(Digimon_IsStarterSpecies(species[i]));
        EXPECT_LT(Digimon_GetLegacyStarterChoice(i), 3);
    }
    EXPECT_EQ(GetStarterPokemon(DIGIMON_STARTER_COUNT), SPECIES_AGUMON);
    EXPECT_EQ(GetStarterPokemon(0xFFFF), SPECIES_AGUMON);
    EXPECT_EQ(Digimon_GetLegacyStarterChoice(0xFFFF), 0);
    EXPECT(!Digimon_IsStarterSpecies(SPECIES_NONE));
}

TEST("Digivice grants and registers every starter with usable level-five moves")
{
    u32 choice;
    PARAMETRIZE { choice = 0; }
    PARAMETRIZE { choice = 1; }
    PARAMETRIZE { choice = 2; }
    PARAMETRIZE { choice = 3; }
    PARAMETRIZE { choice = 4; }
    PARAMETRIZE { choice = 5; }
    PARAMETRIZE { choice = 6; }
    PARAMETRIZE { choice = 7; }

    ZeroPlayerPartyMons();
    VarSet(VAR_DIGIMON_PARTNER, SPECIES_NONE);
    EXPECT_EQ(ScriptGiveMon(GetStarterPokemon(choice), 5, ITEM_NONE), MON_GIVEN_TO_PARTY);
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][0];
    EXPECT_EQ(GetMonData(mon, MON_DATA_SPECIES), GetStarterPokemon(choice));
    EXPECT_EQ(GetMonData(mon, MON_DATA_LEVEL), 5);
    EXPECT_NE(GetMonData(mon, MON_DATA_MOVE1), MOVE_NONE);
    EXPECT_GT(GetMonData(mon, MON_DATA_HP), 0);
    EXPECT(Digimon_RegisterPartner(mon));
    EXPECT_EQ(Digimon_GetPartner(), GetStarterPokemon(choice));
    EXPECT(Digimon_IsPartnerMon(&mon->box));
    EXPECT_EQ(Digimon_PartnerInfo(), 1);
}

TEST("Digivice Field Guide covers all 203 species and rejects invalid entries")
{
    for (u16 choice = 0; choice < DIGIMON_FIELD_GUIDE_COUNT; choice++)
    {
        enum Species expected = choice < DIGIMON_STARTER_COUNT
            ? GetStarterPokemon(choice)
            : choice == DIGIMON_FIELD_GUIDE_COUNT - 2 ? SPECIES_GREYMON
            : choice == DIGIMON_FIELD_GUIDE_COUNT - 1 ? SPECIES_TYRANNOMON
            : SPECIES_ANGORAMON + choice - DIGIMON_STARTER_COUNT;
        VarSet(VAR_0x8004, choice);
        EXPECT(Digimon_FieldGuideEntry());
        EXPECT_EQ(StringCompare(gStringVar1, GetSpeciesName(expected)), 0);
        EXPECT_NE(gStringVar2[0], EOS);
        EXPECT_NE(gStringVar3[0], EOS);
        if (choice < DIGIMON_STARTER_COUNT)
            EXPECT_EQ(StringCompare(gStringVar3, Digimon_GetStarterElement(choice)), 0);
    }
    VarSet(VAR_0x8004, DIGIMON_FIELD_GUIDE_COUNT);
    EXPECT(!Digimon_FieldGuideEntry());
    VarSet(VAR_0x8004, 0xFFFF);
    EXPECT(!Digimon_FieldGuideEntry());
}
