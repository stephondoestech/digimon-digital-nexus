#include "global.h"
#include "pokemon.h"
#include "test/test.h"
#include "constants/abilities.h"
#include "constants/characters.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/pokedex.h"
#include "constants/species.h"

TEST("Agumon species data")
{
    const struct SpeciesInfo *speciesInfo = &gSpeciesInfo[SPECIES_AGUMON];

    EXPECT_EQ(speciesInfo->baseHP, 55);
    EXPECT_EQ(speciesInfo->baseAttack, 70);
    EXPECT_EQ(speciesInfo->baseDefense, 45);
    EXPECT_EQ(speciesInfo->baseSpeed, 60);
    EXPECT_EQ(speciesInfo->baseSpAttack, 65);
    EXPECT_EQ(speciesInfo->baseSpDefense, 45);
    EXPECT_EQ(speciesInfo->types[0], TYPE_FIRE);
    EXPECT_EQ(speciesInfo->types[1], TYPE_FIRE);
    EXPECT_EQ(speciesInfo->abilities[0], ABILITY_BLAZE);
    EXPECT_EQ((u16)speciesInfo->natDexNum, NATIONAL_DEX_AGUMON);
    EXPECT_EQ(SpeciesToNationalPokedexNum(SPECIES_AGUMON), NATIONAL_DEX_AGUMON);
    EXPECT_EQ(SpeciesToHoennPokedexNum(SPECIES_AGUMON), HOENN_DEX_AGUMON);
}

TEST("Agumon level-up learnset")
{
    const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(SPECIES_AGUMON);

    EXPECT_EQ(learnset[0].level, 1);
    EXPECT_EQ(learnset[0].move, MOVE_SCRATCH);
    EXPECT_EQ(learnset[1].level, 5);
    EXPECT_EQ(learnset[1].move, MOVE_BITE);
    EXPECT_EQ(learnset[2].level, 8);
    EXPECT_EQ(learnset[2].move, MOVE_EMBER);
    EXPECT_EQ(learnset[3].level, 18);
    EXPECT_EQ(learnset[3].move, MOVE_FLAME_WHEEL);
    EXPECT_EQ(learnset[4].level, 26);
    EXPECT_EQ(learnset[4].move, MOVE_FLAMETHROWER);
    EXPECT_EQ(learnset[5].move, LEVEL_UP_MOVE_END);
}

TEST("Agumon branches to the appropriate Champion at level 16")
{
    struct Pokemon mon;
    u32 attack;
    u32 defense;

    PARAMETRIZE { attack = 60; defense = 50; }
    PARAMETRIZE { attack = 50; defense = 60; }
    PARAMETRIZE { attack = 50; defense = 50; }

    CreateMon(&mon, SPECIES_AGUMON, 16, 0, OTID_STRUCT_PLAYER_ID);
    SetMonData(&mon, MON_DATA_ATK, &attack);
    SetMonData(&mon, MON_DATA_DEF, &defense);

    if (attack > defense)
        EXPECT_EQ(GetEvolutionTargetSpecies(&mon, EVO_MODE_NORMAL, ITEM_NONE, NULL, NULL, CHECK_EVO), SPECIES_GREYMON);
    else
        EXPECT_EQ(GetEvolutionTargetSpecies(&mon, EVO_MODE_NORMAL, ITEM_NONE, NULL, NULL, CHECK_EVO), SPECIES_TYRANNOMON);
}

TEST("Digimon starters Digivolve into their Adventure Champion at level 16")
{
    struct Pokemon mon;
    enum Species rookie, champion;

    PARAMETRIZE { rookie = SPECIES_GABUMON; champion = SPECIES_GARURUMON; }
    PARAMETRIZE { rookie = SPECIES_BIYOMON; champion = SPECIES_BIRDRAMON; }
    PARAMETRIZE { rookie = SPECIES_PATAMON; champion = SPECIES_ANGEMON; }
    PARAMETRIZE { rookie = SPECIES_SALAMON; champion = SPECIES_GATOMON; }
    PARAMETRIZE { rookie = SPECIES_TENTOMON; champion = SPECIES_KABUTERIMON; }
    PARAMETRIZE { rookie = SPECIES_PALMON; champion = SPECIES_TOGEMON; }
    PARAMETRIZE { rookie = SPECIES_GOMAMON; champion = SPECIES_IKKAKUMON; }

    CreateMon(&mon, rookie, 15, 0, OTID_STRUCT_PLAYER_ID);
    EXPECT_EQ(GetEvolutionTargetSpecies(&mon, EVO_MODE_NORMAL, ITEM_NONE, NULL, NULL, CHECK_EVO), SPECIES_NONE);
    CreateMon(&mon, rookie, 16, 0, OTID_STRUCT_PLAYER_ID);
    EXPECT_EQ(GetEvolutionTargetSpecies(&mon, EVO_MODE_NORMAL, ITEM_NONE, NULL, NULL, CHECK_EVO), champion);
}

TEST("Agumon Champion branches have Greymon and Tyrannomon data")
{
    EXPECT_EQ(gSpeciesInfo[SPECIES_GREYMON].baseAttack, 95);
    EXPECT_EQ((u16)gSpeciesInfo[SPECIES_GREYMON].natDexNum, NATIONAL_DEX_GREYMON);
    EXPECT_EQ(gSpeciesInfo[SPECIES_TYRANNOMON].baseDefense, 80);
    EXPECT_EQ((u16)gSpeciesInfo[SPECIES_TYRANNOMON].natDexNum, NATIONAL_DEX_TYRANNOMON);
}
