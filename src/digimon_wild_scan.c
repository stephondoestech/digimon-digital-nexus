#include "global.h"
#include "digimon_scan_data.h"
#include "pokemon.h"
#include "script_pokemon_util.h"
#include "constants/digimon.h"

// SaveBlock2's former dex flags are unused. Four magic/version bytes and
// 97 packed bytes fit in its existing 104-byte reservation. A nibble stores
// 0-5 scan steps and bit 3 records the one-time reconstruction.
#if FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK2
#error Digimon scanning requires the reserved SaveBlock2 dex bytes
#endif
static const u8 sScanHeader[] = { 'D', 'S', 'C', 1 };
STATIC_ASSERT(4 + (DIGIMON_WILD_ROSTER_COUNT + 1) / 2 <= sizeof(((struct Pokedex *)0)->filler), scan_storage_fits);
STATIC_ASSERT(SPECIES_EGG - SPECIES_ANGORAMON == DIGIMON_ROSTER_COUNT, scan_roster_count);
STATIC_ASSERT(SPECIES_KOROMON - SPECIES_ANGORAMON == DIGIMON_WILD_ROSTER_COUNT, scan_wild_roster_count);

bool32 Digimon_CanScan(enum Species species)
{
    return species >= SPECIES_ANGORAMON && species < SPECIES_ANGORAMON + DIGIMON_WILD_ROSTER_COUNT;
}

static bool32 HasScanData(void)
{
    return memcmp(gSaveBlock2Ptr->pokedex.filler, sScanHeader, sizeof(sScanHeader)) == 0;
}

static u8 ReadState(enum Species species)
{
    u32 index;
    if (!Digimon_CanScan(species) || !HasScanData())
        return 0;
    index = species - SPECIES_ANGORAMON;
    return (gSaveBlock2Ptr->pokedex.filler[4 + index / 2] >> (4 * (index % 2))) & 15;
}

static void WriteState(enum Species species, u8 state)
{
    u32 index = species - SPECIES_ANGORAMON;
    u32 shift = 4 * (index % 2);
    u8 *data = gSaveBlock2Ptr->pokedex.filler;
    if (!HasScanData())
    {
        memset(data, 0, sizeof(gSaveBlock2Ptr->pokedex.filler));
        memcpy(data, sScanHeader, sizeof(sScanHeader));
    }
    data[4 + index / 2] = (data[4 + index / 2] & ~(15 << shift)) | (state << shift);
}

u8 Digimon_GetWildScanPercent(enum Species species)
{
    return min(ReadState(species) & 7, 5) * DIGIMON_SCAN_STEP;
}

bool32 Digimon_IsReconstructed(enum Species species)
{
    return (ReadState(species) & 8) != 0;
}

void Digimon_RecordWildScan(enum Species species)
{
    u8 state;
    if (!Digimon_CanScan(species))
        return;
    state = ReadState(species);
    WriteState(species, (state & 8) | min((state & 7) + 1, 5));
}

u8 Digimon_ReconstructionLevel(enum Species species)
{
    return species >= SPECIES_AEGIOMON ? 24 : 5;
}

u32 Digimon_TryReconstruct(enum Species species)
{
    u32 result;
    if (!Digimon_CanScan(species))
        return DIGILAB_EVENT_ONLY;
    if (Digimon_IsReconstructed(species))
        return DIGILAB_ALREADY_RECONSTRUCTED;
    if (Digimon_GetWildScanPercent(species) != DIGIMON_SCAN_COMPLETE)
        return DIGILAB_INCOMPLETE;
    result = ScriptGiveMon(species, Digimon_ReconstructionLevel(species), ITEM_NONE);
    if (result == MON_CANT_GIVE)
        return DIGILAB_FULL;
    WriteState(species, 5 | 8);
    return result == MON_GIVEN_TO_PARTY ? DIGILAB_PARTY : DIGILAB_STORAGE;
}
