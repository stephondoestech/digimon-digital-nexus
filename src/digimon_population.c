#include "global.h"
#include "digimon_population.h"
#include "pokemon.h"

struct DigimonLegacyReplacement
{
    u16 species;
    u16 rookie;
};

static const struct DigimonLegacyReplacement sLegacyReplacements[SPECIES_CUSTOM_START + 1] =
{
#include "data/digimon_legacy.h"
};

enum Species Digimon_ResolveLegacySpecies(enum Species species, u32 level)
{
    if (species == SPECIES_NONE || species > SPECIES_CUSTOM_START)
        return species;

    // Central creation also covers legacy gifts, roamers, trades and random teams.
    // It never mutates a pre-existing Pokemon or a save on load.
    if (level < 24)
        return sLegacyReplacements[species].rookie;
    return sLegacyReplacements[species].species;
}
