#include "global.h"
#include "digimon_scan_data.h"
#include "event_data.h"
#include "test/battle.h"

// The upstream battle harness runs recorded battles, including WILD_BATTLE_TEST.
// Replays must not award persistent progress; live flags are covered separately.
WILD_BATTLE_TEST("Agumon replayed wild victory does not record Scan Data")
{
    GIVEN {
        VarSet(VAR_DIGIMON_SCAN_AGUMON, 0);
        PLAYER(SPECIES_AGUMON) { Level(20); }
        OPPONENT(SPECIES_AGUMON) { Level(5); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        HP_BAR(opponent, hp: 0);
    } THEN {
        EXPECT(gBattleTypeFlags & BATTLE_TYPE_RECORDED);
        EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), 0);
    }
}

SINGLE_BATTLE_TEST("Agumon trainer victory does not record Scan Data")
{
    GIVEN {
        VarSet(VAR_DIGIMON_SCAN_AGUMON, 0);
        PLAYER(SPECIES_AGUMON) { Level(20); }
        OPPONENT(SPECIES_AGUMON) { Level(5); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        HP_BAR(opponent, hp: 0);
    } THEN {
        EXPECT_EQ(Digimon_GetScanPercent(SPECIES_AGUMON), 0);
    }
}
