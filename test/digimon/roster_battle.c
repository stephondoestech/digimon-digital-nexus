#include "global.h"
#include "test/battle.h"

WILD_BATTLE_TEST("Digimon roster loads battle portraits and completes a wild turn")
{
    u32 species = SPECIES_ANGORAMON;
    for (u32 i = SPECIES_ANGORAMON; i < SPECIES_EGG; i++)
        PARAMETRIZE { species = i; }

    GIVEN {
        PLAYER(SPECIES_AGUMON) { Level(50); Speed(250); Moves(MOVE_AERIAL_ACE); }
        OPPONENT(species) { Level(5); HP(1); Speed(20); Moves(MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(player, MOVE_AERIAL_ACE); }
    } SCENE {
        HP_BAR(opponent, hp: 0);
    }
}
