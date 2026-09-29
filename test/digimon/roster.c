#include "global.h"
#include "digimon_population.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "test/test.h"
#include "constants/moves.h"
#include "constants/pokedex.h"

TEST("Digimon roster preserves save block sizes")
{
    EXPECT_EQ(sizeof(struct SaveBlock1), 15568);
    EXPECT_EQ(sizeof(struct SaveBlock2), 3884);
    EXPECT_EQ(sizeof(struct PokemonStorage), 34144);
    EXPECT_EQ(NUM_DEX_FLAG_BYTES, 130);
}

TEST("Digimon roster resolves every legacy species and reserves starters")
{
    enum Species species;
    for (species = SPECIES_BULBASAUR; species <= SPECIES_CUSTOM_START; species++)
    {
        enum Species rookie = Digimon_ResolveLegacySpecies(species, 5);
        enum Species adult = Digimon_ResolveLegacySpecies(species, 50);
        EXPECT(rookie >= SPECIES_ANGORAMON && rookie < SPECIES_AEGIOMON);
        EXPECT(adult >= SPECIES_ANGORAMON && adult < SPECIES_EGG);
    }
    EXPECT_EQ(Digimon_ResolveLegacySpecies(SPECIES_NONE, 0), SPECIES_NONE);
    EXPECT_EQ(Digimon_ResolveLegacySpecies(SPECIES_AGUMON, 5), SPECIES_AGUMON);
    EXPECT_EQ(Digimon_ResolveLegacySpecies(SPECIES_BETAMON, 5), SPECIES_BETAMON);
}

TEST("Digimon roster round trips dex slots and creates valid party members")
{
    enum Species species;
    struct Pokemon mon;

    for (species = SPECIES_ANGORAMON; species < SPECIES_EGG; species++)
    {
        enum NationalDexOrder dex = SpeciesToNationalPokedexNum(species);
        EXPECT_EQ(NationalPokedexNumToSpecies(dex), species);
        EXPECT(gSpeciesInfo[species].frontPic != NULL);
        EXPECT(gSpeciesInfo[species].backPic != NULL);
        EXPECT(gSpeciesInfo[species].palette != NULL);
        EXPECT(gSpeciesInfo[species].iconSprite != NULL);
        CreateRandomMon(&mon, species, 5);
        EXPECT_EQ(GetMonData(&mon, MON_DATA_SPECIES), species);
        EXPECT_EQ(GetMonData(&mon, MON_DATA_LEVEL), 5);
        EXPECT(GetMonData(&mon, MON_DATA_MAX_HP) > 0);
        EXPECT(GetMonData(&mon, MON_DATA_MOVE1) != MOVE_NONE);
    }
}
