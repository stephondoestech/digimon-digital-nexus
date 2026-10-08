#include "global.h"
#include "test/test.h"
#include "constants/opponents.h"

// Tamer parties are checked against the real data by tools/digimon_maps/test_island.py;
// test builds replace gTrainers with test trainers.
TEST("File Island: the Tamers fit in the existing trainer-flag space")
{
    EXPECT_LT(TRAINER_TAMER_JUN, MAX_TRAINERS_COUNT);
    EXPECT_EQ(TRAINERS_COUNT, TRAINER_TAMER_JUN + 1);
}
