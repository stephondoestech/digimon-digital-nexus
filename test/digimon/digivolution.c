#include "global.h"
#include "digimon_scan_data.h"
#include "pokemon.h"
#include "test/test.h"
#include "constants/digimon.h"
#include "constants/items.h"
#include "constants/species.h"

static enum Species EvolutionAt(enum Species species, u32 level, u16 heldItem)
{
    struct Pokemon mon;

    CreateMon(&mon, species, level, 0, OTID_STRUCT_PLAYER_ID);
    SetMonData(&mon, MON_DATA_HELD_ITEM, &heldItem);
    return GetEvolutionTargetSpecies(&mon, EVO_MODE_NORMAL, ITEM_NONE, NULL, NULL, CHECK_EVO);
}

TEST("Digivolution: Adventure Champions reach Ultimate at level 32")
{
    enum Species champion, ultimate;

    PARAMETRIZE { champion = SPECIES_GREYMON; ultimate = SPECIES_METALGREYMON; }
    PARAMETRIZE { champion = SPECIES_GARURUMON; ultimate = SPECIES_WEREGARURUMON; }
    PARAMETRIZE { champion = SPECIES_BIRDRAMON; ultimate = SPECIES_GARUDAMON; }
    PARAMETRIZE { champion = SPECIES_KABUTERIMON; ultimate = SPECIES_MEGAKABUTERIMON; }
    PARAMETRIZE { champion = SPECIES_TOGEMON; ultimate = SPECIES_LILLYMON; }
    PARAMETRIZE { champion = SPECIES_IKKAKUMON; ultimate = SPECIES_ZUDOMON; }
    PARAMETRIZE { champion = SPECIES_ANGEMON; ultimate = SPECIES_MAGNAANGEMON; }
    PARAMETRIZE { champion = SPECIES_GATOMON; ultimate = SPECIES_ANGEWOMON; }

    EXPECT_EQ(EvolutionAt(champion, 31, ITEM_NONE), SPECIES_NONE);
    EXPECT_EQ(EvolutionAt(champion, 32, ITEM_NONE), ultimate);
}

TEST("Digivolution: Adventure Ultimates reach Mega at level 48")
{
    enum Species ultimate, mega;

    PARAMETRIZE { ultimate = SPECIES_METALGREYMON; mega = SPECIES_WARGREYMON; }
    PARAMETRIZE { ultimate = SPECIES_WEREGARURUMON; mega = SPECIES_METALGARURUMON; }
    PARAMETRIZE { ultimate = SPECIES_GARUDAMON; mega = SPECIES_PHOENIXMON; }
    PARAMETRIZE { ultimate = SPECIES_MEGAKABUTERIMON; mega = SPECIES_HERCULESKABUTERIMON; }
    PARAMETRIZE { ultimate = SPECIES_LILLYMON; mega = SPECIES_ROSEMON; }
    PARAMETRIZE { ultimate = SPECIES_ZUDOMON; mega = SPECIES_VIKEMON; }
    PARAMETRIZE { ultimate = SPECIES_MAGNAANGEMON; mega = SPECIES_SERAPHIMON; }
    PARAMETRIZE { ultimate = SPECIES_PAILDRAMON; mega = SPECIES_IMPERIALDRAMON; }

    EXPECT_EQ(EvolutionAt(ultimate, 47, ITEM_NONE), SPECIES_NONE);
    EXPECT_EQ(EvolutionAt(ultimate, 48, ITEM_NONE), mega);
}

TEST("Digivolution: Armor forms need a level and a held Digi-Egg")
{
    enum Species rookie, armor;
    u32 level;
    u16 egg;

    PARAMETRIZE { rookie = SPECIES_VEEMON; armor = SPECIES_FLADRAMON; level = 20; egg = ITEM_DIGI_EGG_COURAGE; }
    PARAMETRIZE { rookie = SPECIES_VEEMON; armor = SPECIES_MAGNAMON; level = 30; egg = ITEM_DIGI_EGG_MIRACLES; }
    PARAMETRIZE { rookie = SPECIES_HAWKMON; armor = SPECIES_SHURIMON; level = 20; egg = ITEM_DIGI_EGG_SINCERITY; }
    PARAMETRIZE { rookie = SPECIES_ARMADILMON; armor = SPECIES_DIGMON; level = 20; egg = ITEM_DIGI_EGG_KNOWLEDGE; }

    EXPECT_EQ(EvolutionAt(rookie, level - 1, egg), SPECIES_NONE);
    EXPECT_EQ(EvolutionAt(rookie, level, ITEM_NONE), SPECIES_NONE);
    EXPECT_EQ(EvolutionAt(rookie, level, egg), armor);
}

TEST("Digivolution: DNA forms need level 32 and a held DNA Charge")
{
    enum Species partner, dna, fallback;

    PARAMETRIZE { partner = SPECIES_EXVEEMON; dna = SPECIES_PAILDRAMON; fallback = SPECIES_NONE; }
    PARAMETRIZE { partner = SPECIES_STINGMON; dna = SPECIES_PAILDRAMON; fallback = SPECIES_NONE; }
    PARAMETRIZE { partner = SPECIES_AQUILAMON; dna = SPECIES_SILPHYMON; fallback = SPECIES_NONE; }
    PARAMETRIZE { partner = SPECIES_GATOMON; dna = SPECIES_SILPHYMON; fallback = SPECIES_ANGEWOMON; }

    EXPECT_EQ(EvolutionAt(partner, 31, ITEM_DNA_CHARGE), SPECIES_NONE);
    EXPECT_EQ(EvolutionAt(partner, 32, ITEM_NONE), fallback);
    EXPECT_EQ(EvolutionAt(partner, 32, ITEM_DNA_CHARGE), dna);
}

TEST("Digivolution: evolving keeps the level the Digimon reached")
{
    struct Pokemon mon;
    enum Species from, to;

    PARAMETRIZE { from = SPECIES_GABUMON; to = SPECIES_GARURUMON; }
    PARAMETRIZE { from = SPECIES_WORMMON; to = SPECIES_STINGMON; }
    PARAMETRIZE { from = SPECIES_EXVEEMON; to = SPECIES_PAILDRAMON; }

    CreateMon(&mon, from, 40, 0, OTID_STRUCT_PLAYER_ID);
    SetMonData(&mon, MON_DATA_SPECIES, &to);
    CalculateMonStats(&mon);
    EXPECT_EQ(GetMonData(&mon, MON_DATA_LEVEL), 40);
}

TEST("Digivolution: evolution-only Digimon are outside wild Scan Data")
{
    EXPECT(Digimon_CanScan(SPECIES_GESOMON));
    for (u32 species = SPECIES_KOROMON; species < SPECIES_EGG; species++)
        EXPECT(!Digimon_CanScan(species));
}
