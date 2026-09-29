#include "global.h"
#include "digimon_field_guide.h"
#include "digimon_scan_data.h"
#include "event_data.h"
#include "malloc.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "script_menu.h"
#include "string_util.h"
#include "strings.h"
#include "test/test.h"
#include "constants/battle.h"
#include "constants/digimon.h"

TEST("Digimon recruitment initializes old saves only on award and persists every species")
{
    struct SaveBlock2 *original = gSaveBlock2Ptr;
    struct SaveBlock2 *reloaded = Alloc(sizeof(*reloaded));
    EXPECT(reloaded != NULL);
    memset(original->pokedex.filler, 0xA5, sizeof(original->pokedex.filler));
    EXPECT_EQ(Digimon_GetWildScanPercent(SPECIES_BETAMON), 0);
    EXPECT_EQ(original->pokedex.filler[0], 0xA5);
    // Adjacent packed nibbles, and the final odd entry, must stay independent.
    for (u32 species = SPECIES_ANGORAMON; species < SPECIES_EGG; species++)
        for (u32 step = 0; step < (species % 5) + 1; step++)
            Digimon_RecordWildScan(species);
    memcpy(reloaded, original, sizeof(*reloaded));
    gSaveBlock2Ptr = reloaded;
    for (u32 species = SPECIES_ANGORAMON; species < SPECIES_EGG; species++)
        EXPECT_EQ(Digimon_GetWildScanPercent(species), ((species % 5) + 1) * 20);
    gSaveBlock2Ptr = original;
    Free(reloaded);
}

TEST("Digimon recruitment rejects all event species and excluded battle outcomes")
{
    u32 flags, outcome;
    PARAMETRIZE { flags = 0; outcome = B_OUTCOME_RAN; }
    PARAMETRIZE { flags = 0; outcome = B_OUTCOME_CAUGHT; }
    PARAMETRIZE { flags = 0; outcome = B_OUTCOME_LOST; }
    PARAMETRIZE { flags = BATTLE_TYPE_TRAINER; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_RECORDED; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_LINK; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_FRONTIER; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_FIRST_BATTLE; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_CATCH_TUTORIAL; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_SAFARI; outcome = B_OUTCOME_WON; }
    memset(gSaveBlock2Ptr->pokedex.filler, 0, sizeof(gSaveBlock2Ptr->pokedex.filler));
    for (u32 species = SPECIES_AGUMON; species < SPECIES_ANGORAMON; species++)
    {
        Digimon_RecordWildScan(species);
        EXPECT_EQ(Digimon_GetWildScanPercent(species), 0);
        EXPECT_EQ(Digimon_TryReconstruct(species), DIGILAB_EVENT_ONLY);
    }
    Digimon_RecordBattleScan(SPECIES_BETAMON, flags, outcome);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_BETAMON), 0);
    Digimon_RecordBattleScan(SPECIES_BETAMON, 0, B_OUTCOME_WON);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_BETAMON), 20);
}

TEST("Digimon recruitment caps scan and reconstructs Rookies and Champions once")
{
    u32 species, level;
    PARAMETRIZE { species = SPECIES_ANGORAMON; level = 5; }
    PARAMETRIZE { species = SPECIES_GESOMON; level = 24; }
    ZeroPlayerPartyMons();
    memset(gSaveBlock2Ptr->pokedex.filler, 0, sizeof(gSaveBlock2Ptr->pokedex.filler));
    EXPECT_EQ(Digimon_TryReconstruct(species), DIGILAB_INCOMPLETE);
    for (u32 i = 0; i < 7; i++)
        Digimon_RecordWildScan(species);
    EXPECT_EQ(Digimon_GetScanPercent(species), 100);
    EXPECT_EQ(Digimon_TryReconstruct(species), DIGILAB_PARTY);
    EXPECT_EQ(GetMonData(&gParties[0][0], MON_DATA_SPECIES), species);
    EXPECT_EQ(GetMonData(&gParties[0][0], MON_DATA_LEVEL), level);
    EXPECT_GT(GetMonData(&gParties[0][0], MON_DATA_MAX_HP), 0);
    Digimon_RecordWildScan(species);
    EXPECT_EQ(Digimon_TryReconstruct(species), DIGILAB_ALREADY_RECONSTRUCTED);
    EXPECT_EQ(gPartiesCount[0], 1);
}

TEST("Digimon recruitment preserves progress when full and sends to freed storage")
{
    struct Pokemon mon;
    ZeroPlayerPartyMons();
    ResetPokemonStorageSystem();
    memset(gSaveBlock2Ptr->pokedex.filler, 0, sizeof(gSaveBlock2Ptr->pokedex.filler));
    CreateMon(&mon, SPECIES_BETAMON, 5, 0, OTID_STRUCT_PLAYER_ID);
    for (u32 slot = 0; slot < PARTY_SIZE; slot++)
        gParties[0][slot] = mon;
    gPartiesCount[0] = PARTY_SIZE;
    for (u32 box = 0; box < TOTAL_BOXES_COUNT; box++)
        for (u32 slot = 0; slot < IN_BOX_COUNT; slot++)
            *GetBoxedMonPtr(box, slot) = mon.box;
    for (u32 i = 0; i < 5; i++)
        Digimon_RecordWildScan(SPECIES_GAZIMON);
    EXPECT_EQ(Digimon_TryReconstruct(SPECIES_GAZIMON), DIGILAB_FULL);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_GAZIMON), 100);
    EXPECT(!Digimon_IsReconstructed(SPECIES_GAZIMON));
    ZeroBoxMonData(GetBoxedMonPtr(0, 0));
    EXPECT_EQ(Digimon_TryReconstruct(SPECIES_GAZIMON), DIGILAB_STORAGE);
    EXPECT_EQ(GetBoxMonData(GetBoxedMonPtr(0, 0), MON_DATA_SPECIES), SPECIES_GAZIMON);
    EXPECT(Digimon_IsReconstructed(SPECIES_GAZIMON));
}

TEST("Digimon guide lists stable IDs, filters event forms, and previews without granting")
{
    for (u32 mode = 0; mode < 3; mode++)
    {
        gSpecialVar_0x8007 = mode;
        Digimon_GuideList();
        EXPECT_EQ(MultichoiceDynamic_StackSize(), mode ? 193 : 203);
        for (u32 i = 0; i < MultichoiceDynamic_StackSize(); i++)
        {
            struct ListMenuItem *item = MultichoiceDynamic_PeekElementAt(i);
            enum Species species = Digimon_GuideSpecies(item->id);
            EXPECT_NE(species, SPECIES_NONE);
            EXPECT_EQ(StringCompare(item->name, GetSpeciesName(species)), 0);
            if (mode)
                EXPECT(Digimon_CanScan(species));
            Free((void *)item->name);
        }
        MultichoiceDynamic_DestroyStack();
    }
    ZeroPlayerPartyMons();
    gSpecialVar_0x8004 = 8;
    gSpecialVar_0x8006 = 0;
    EXPECT(Digimon_GuideReconstruct());
    EXPECT_EQ(gPartiesCount[0], 0);
    EXPECT_EQ(StringCompare(gStringVar1, GetSpeciesName(SPECIES_ANGORAMON)), 0);
    gSpecialVar_0x8005 = 0;
    EXPECT(Digimon_GuideEvolution());
    EXPECT_EQ(StringCompare(gStringVar1, GetSpeciesName(SPECIES_DOGGYMON)), 0);
    gSpecialVar_0x8005 = 0xFFFF;
    EXPECT(!Digimon_GuideEvolution());
}
