#include "global.h"
#include "battle_main.h"
#include "digimon_field_guide.h"
#include "digimon_starters.h"
#include "constants/digimon.h"
#include "event_data.h"
#include "pokemon.h"
#include "starter_choose.h"
#include "string_util.h"
#include "strings.h"
#include "malloc.h"
#include "script_menu.h"
#include "digimon_scan_data.h"

#include "data/digimon_roster_field_guide.h"

STATIC_ASSERT(ARRAY_COUNT(sDigimonRosterFieldGuide) == DIGIMON_ROSTER_COUNT, guide_roster_count);

enum Species Digimon_GuideSpecies(u16 index)
{
    if (index < DIGIMON_STARTER_COUNT)
        return GetStarterPokemon(index);
    if (index < DIGIMON_STARTER_COUNT + DIGIMON_ROSTER_COUNT)
        return sDigimonRosterFieldGuide[index - DIGIMON_STARTER_COUNT].species;
    if (index == DIGIMON_FIELD_GUIDE_COUNT - 2)
        return SPECIES_GREYMON;
    if (index == DIGIMON_FIELD_GUIDE_COUNT - 1)
        return SPECIES_TYRANNOMON;
    return SPECIES_NONE;
}

// Build the engine's owned-name scrolling menu. IDs remain guide indices even
// when the Scan/Reconstruct views omit event-only species.
u32 Digimon_GuideList(void)
{
    MultichoiceDynamic_InitStack(DIGIMON_FIELD_GUIDE_COUNT);
    for (u32 i = 0; i < DIGIMON_FIELD_GUIDE_COUNT; i++)
    {
        enum Species species = Digimon_GuideSpecies(i);
        struct ListMenuItem item;
        if (gSpecialVar_0x8007 && !Digimon_CanScan(species))
            continue;
        item.name = Alloc(StringLength(GetSpeciesName(species)) + 1);
        AGB_ASSERT(item.name != NULL);
        StringCopy((u8 *)item.name, GetSpeciesName(species));
        item.id = i;
        MultichoiceDynamic_PushElement(item);
    }
    return TRUE;
}

u32 Digimon_FieldGuideEntry(void)
{
    u16 choice = VarGet(VAR_0x8004);
    enum Species species = Digimon_GuideSpecies(choice);
    const u8 *attribute;

    if (species == SPECIES_NONE)
        return FALSE;

    if (choice < DIGIMON_STARTER_COUNT)
    {
        species = GetStarterPokemon(choice);
        attribute = Digimon_GetStarterAttribute(choice);
    }
    else if (choice < DIGIMON_STARTER_COUNT + DIGIMON_ROSTER_COUNT)
    {
        const struct DigimonFieldGuideData *entry =
            &sDigimonRosterFieldGuide[choice - DIGIMON_STARTER_COUNT];
        species = entry->species;
        attribute = entry->attribute;
    }
    else
    {
        attribute = species == SPECIES_GREYMON ? sDigimonGuideVaccine : sDigimonGuideData;
    }

    StringCopy(gStringVar1, GetSpeciesName(species));
    StringCopy(gStringVar2, attribute);
    if (choice < DIGIMON_STARTER_COUNT)
        StringCopy(gStringVar3, Digimon_GetStarterElement(choice));
    else
        StringCopy(gStringVar3, gTypesInfo[GetSpeciesType(species, 0)].name);
    gSpecialVar_0x8009 = species;
    return TRUE;
}
