#include "global.h"
#include "digimon_scan_data.h"
#include "event_data.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "test/test.h"
#include "constants/battle.h"
#include "constants/digimon.h"
#include "constants/species.h"
#include "constants/vars.h"

TEST("Agumon Scan Data accumulates in fixed battle-sized steps")
{
    VarSet(VAR_DIGIMON_SCAN_AGUMON, 0);

    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), 0);
    Digimon_RecordScan(SPECIES_AGUMON);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), 20);
    Digimon_RecordScan(SPECIES_AGUMON);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), 40);

    Digimon_RecordScan(SPECIES_GABUMON);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), 40);
}

TEST("Agumon Scan Data caps at reconstruction threshold")
{
    VarSet(VAR_DIGIMON_SCAN_AGUMON, 90);

    Digimon_RecordScan(SPECIES_AGUMON);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), DIGIMON_SCAN_COMPLETE);
    EXPECT_EQ(VarGet(VAR_DIGIMON_SCAN_AGUMON), DIGIMON_SCAN_COMPLETE);
    Digimon_RecordScan(SPECIES_AGUMON);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), DIGIMON_SCAN_COMPLETE);
}

TEST("Agumon reconstruction is unavailable before complete Scan Data")
{
    VarSet(VAR_DIGIMON_SCAN_AGUMON, 80);
    VarSet(VAR_DIGIMON_RECONSTRUCTED_AGUMON, 0);

    EXPECT(!Digimon_ReconstructAgumon());
}

TEST("Agumon Scan Data only rewards ordinary wild victories")
{
    u32 flags;
    u8 outcome;

    PARAMETRIZE { flags = 0; outcome = B_OUTCOME_CAUGHT; }
    PARAMETRIZE { flags = 0; outcome = B_OUTCOME_RAN; }
    PARAMETRIZE { flags = 0; outcome = B_OUTCOME_LOST; }
    PARAMETRIZE { flags = BATTLE_TYPE_TRAINER; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_LINK; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_RECORDED; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_RECORDED_LINK; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_FRONTIER; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_FIRST_BATTLE; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_CATCH_TUTORIAL; outcome = B_OUTCOME_WON; }
    PARAMETRIZE { flags = BATTLE_TYPE_SAFARI; outcome = B_OUTCOME_WON; }

    VarSet(VAR_DIGIMON_SCAN_AGUMON, 0);
    Digimon_RecordBattleScan(SPECIES_AGUMON, flags, outcome);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), 0);
    Digimon_RecordBattleScan(SPECIES_AGUMON, 0, B_OUTCOME_WON);
    EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), 20);
}

TEST("Agumon DigiLab viewing is read-only and reconstruction grants only one copy")
{
    ZeroPlayerPartyMons();
    VarSet(VAR_DIGIMON_SCAN_AGUMON, 100);
    VarSet(VAR_DIGIMON_RECONSTRUCTED_AGUMON, FALSE);
    gSpecialVar_0x8004 = DIGILAB_VIEW;
    Digimon_DigiLab();
    EXPECT_EQ(gPartiesCount[B_TRAINER_PLAYER], 0);
    EXPECT_EQ(VarGet(VAR_DIGIMON_RECONSTRUCTED_AGUMON), FALSE);
    EXPECT_EQ(Digimon_TryReconstructAgumon(), DIGILAB_PARTY);
    EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_SPECIES), SPECIES_AGUMON);
    EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_LEVEL), 5);
    EXPECT_EQ(Digimon_TryReconstructAgumon(), DIGILAB_ALREADY_RECONSTRUCTED);
    EXPECT_EQ(gPartiesCount[B_TRAINER_PLAYER], 1);
    EXPECT_EQ(VarGet(VAR_DIGIMON_SCAN_AGUMON), 100);
}

TEST("Agumon reconstruction uses storage and can retry after full storage")
{
    struct Pokemon mon;
    u32 box, slot;

    ZeroPlayerPartyMons();
    ResetPokemonStorageSystem();
    CreateMon(&mon, SPECIES_GABUMON, 5, 0, OTID_STRUCT_PLAYER_ID);
    for (slot = 0; slot < PARTY_SIZE; slot++)
        gParties[B_TRAINER_PLAYER][slot] = mon;
    gPartiesCount[B_TRAINER_PLAYER] = PARTY_SIZE;
    for (box = 0; box < TOTAL_BOXES_COUNT; box++)
        for (slot = 0; slot < IN_BOX_COUNT; slot++)
            *GetBoxedMonPtr(box, slot) = mon.box;
    VarSet(VAR_DIGIMON_SCAN_AGUMON, 100);
    VarSet(VAR_DIGIMON_RECONSTRUCTED_AGUMON, FALSE);
    EXPECT_EQ(Digimon_TryReconstructAgumon(), DIGILAB_FULL);
    EXPECT_EQ(VarGet(VAR_DIGIMON_RECONSTRUCTED_AGUMON), FALSE);
    EXPECT_EQ(VarGet(VAR_DIGIMON_SCAN_AGUMON), 100);
    ZeroBoxMonData(GetBoxedMonPtr(0, 0));
    EXPECT_EQ(Digimon_TryReconstructAgumon(), DIGILAB_STORAGE);
    EXPECT_EQ(GetBoxMonData(GetBoxedMonPtr(0, 0), MON_DATA_SPECIES), SPECIES_AGUMON);
    EXPECT_EQ(VarGet(VAR_DIGIMON_RECONSTRUCTED_AGUMON), TRUE);
    EXPECT_EQ(gPartiesCount[B_TRAINER_PLAYER], PARTY_SIZE);
}
