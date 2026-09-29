#include "constants/abilities.h"
#include "constants/teaching_types.h"
#include "species_info/shared_dex_text.h"
#include "species_info/shared_front_pic_anims.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }
#define CONDITIONS(...) ((const struct EvolutionParam[]) { __VA_ARGS__, {CONDITIONS_END} })

#define ANIM_FRAMES(...) (const union AnimCmd *const[]) { sAnim_GeneralFrame0, (const union AnimCmd[]) { __VA_ARGS__ ANIMCMD_END, }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#if B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE
#define SHADOW(x, y, size)  .enemyShadowXOffset = x, .enemyShadowYOffset = y, .enemyShadowSize = size,
#define NO_SHADOW           .suppressEnemyShadow = TRUE,
#else
#define SHADOW(x, y, size)  .enemyShadowXOffset = 0, .enemyShadowYOffset = 0, .enemyShadowSize = 0,
#define NO_SHADOW           .suppressEnemyShadow = FALSE,
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#if P_GENDER_DIFFERENCES
#define OVERWORLD_PAL_FEMALE(...)                                 \
    .overworldPaletteFemale = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPaletteFemale = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL_FEMALE(...)
#endif //P_GENDER_DIFFERENCES
#else
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD_DATA(picTable, _size, shadow, _tracks, _anims)                                                                     \
{                                                                                                                                       \
    .tileTag = TAG_NONE,                                                                                                                \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                                                            \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                                                                     \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                                                                         \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                                                                           \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                                                                          \
    .paletteSlot = PALSLOT_NPC_1,                                                                                                       \
    .shadowSize = shadow,                                                                                                               \
    .inanimate = FALSE,                                                                                                                 \
    .compressed = COMP,                                                                                                                 \
    .tracks = _tracks,                                                                                                                  \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64),                                             \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),                                                     \
    .anims = _anims,                                                                                                                    \
    .images = picTable,                                                                                                                 \
}

#define OVERWORLD(objEventPic, _size, shadow, _tracks, _anims, ...)                                 \
    .overworldData = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),                   \
    OVERWORLD_PAL(__VA_ARGS__)

#if P_GENDER_DIFFERENCES
#define OVERWORLD_FEMALE(objEventPic, _size, shadow, _tracks, _anims, ...)                          \
    .overworldDataFemale = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),             \
    OVERWORLD_PAL_FEMALE(__VA_ARGS__)
#else
#define OVERWORLD_FEMALE(...)
#endif //P_GENDER_DIFFERENCES

#else
#define OVERWORLD(...)
#define OVERWORLD_FEMALE(...)
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_POKEMON_OBJECT_EVENTS

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(QuestionMark)
        SHADOW(-1, 0, SHADOW_SIZE_M)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"
    #include "species_info/digimon_roster.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },

    [SPECIES_AGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 67,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Agumon"),
        .cryId = CRY_CHARMANDER, // Temporary Charmander cry placeholder.
        .natDexNum = NATIONAL_DEX_AGUMON,
        .categoryName = _("Rookie"),
        .height = 10,
        .weight = 200,
        .description = COMPOUND_STRING(
            "A small reptile Digimon with a fearless\n"
            "personality. It attacks by launching\n"
            "flames from its mouth."),
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Agumon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(0, 46),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Agumon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Agumon,
        .shinyPalette = gMonShinyPalette_Agumon,
        .iconSprite = gMonIcon_Agumon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Charmander) // Temporary footprint until a Digimon footprint is sourced.
        OVERWORLD(
            sPicTable_Agumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon,
            gShinyOverworldPalette_Agumon
        )
        .levelUpLearnset = sAgumonLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
        .evolutions = EVOLUTION(
            {EVO_LEVEL, 16, SPECIES_GREYMON, CONDITIONS({IF_ATK_GT_DEF})},
            {EVO_LEVEL, 16, SPECIES_TYRANNOMON, CONDITIONS({IF_ATK_LT_DEF})},
            {EVO_LEVEL, 16, SPECIES_TYRANNOMON, CONDITIONS({IF_ATK_EQ_DEF})}
        ),
    },

    [SPECIES_GREYMON] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 154,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Greymon"),
        .cryId = CRY_CHARIZARD, // Temporary Charizard cry placeholder.
        .natDexNum = NATIONAL_DEX_GREYMON,
        .categoryName = _("Champion"),
        .height = 17,
        .weight = 300,
        .description = COMPOUND_STRING(
            "A heavily armored dinosaur Digimon.\n"
            "Its strength and courage let it face\n"
            "danger without hesitation."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Greymon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Greymon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Greymon,
        .shinyPalette = gMonShinyPalette_Greymon,
        .iconSprite = gMonIcon_Greymon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Charizard)
        OVERWORLD(
            sPicTable_Charizard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Charizard,
            gShinyOverworldPalette_Charizard
        )
        .levelUpLearnset = sGreymonLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    [SPECIES_TYRANNOMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 151,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tyrannomon"),
        .cryId = CRY_CHARIZARD, // Temporary Charizard cry placeholder.
        .natDexNum = NATIONAL_DEX_TYRANNOMON,
        .categoryName = _("Champion"),
        .height = 15,
        .weight = 400,
        .description = COMPOUND_STRING(
            "A powerful dinosaur Digimon with a\n"
            "sturdy frame. It overwhelms enemies\n"
            "with crushing physical attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        // Greymon art is shared temporarily until a Tyrannomon sheet is sourced.
        .frontPic = gMonFrontPic_Greymon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Greymon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Greymon,
        .shinyPalette = gMonShinyPalette_Greymon,
        .iconSprite = gMonIcon_Greymon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Charizard)
        OVERWORLD(
            sPicTable_Charizard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Charizard,
            gShinyOverworldPalette_Charizard
        )
        .levelUpLearnset = sTyrannomonLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

#define ROOKIE_GRAPHICS(name, overworld, cry) \
        .cryId = cry, \
        .pokemonScale = 256, \
        .pokemonOffset = 0, \
        .trainerScale = 256, \
        .trainerOffset = 0, \
        .frontPic = gMonFrontPic_ ## name, \
        .frontPicSize = MON_COORDS_SIZE(64, 64), \
        .frontPicYOffset = 0, \
        .frontAnimFrames = ANIM_FRAMES(ANIMCMD_FRAME(0, 30),), \
        .frontAnimId = ANIM_V_JUMPS_SMALL, \
        .backPic = gMonBackPic_ ## name, \
        .backPicSize = MON_COORDS_SIZE(64, 64), \
        .backPicYOffset = 0, \
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL, \
        .palette = gMonPalette_ ## name, \
        .shinyPalette = gMonPalette_ ## name, \
        .iconSprite = gMonIcon_ ## name, \
        .iconPalIndex = 0, \
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST, \
        SHADOW(-2, 3, SHADOW_SIZE_S) \
        FOOTPRINT(overworld) \
        OVERWORLD(sPicTable_ ## overworld, SIZE_32x32, SHADOW_SIZE_M, TRACKS_FOOT, sAnimTable_Following, gOverworldPalette_ ## overworld, gShinyOverworldPalette_ ## overworld)

    [SPECIES_GABUMON] =
    {
        .baseHP = 60, .baseAttack = 65, .baseDefense = 50, .baseSpeed = 50, .baseSpAttack = 55, .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ICE), .catchRate = 45, .expYield = 67, .genderRatio = MON_GENDERLESS,
        .eggCycles = 20, .friendship = STANDARD_FRIENDSHIP, .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED), .abilities = { ABILITY_ICE_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE, .speciesName = _("Gabumon"), .natDexNum = NATIONAL_DEX_GABUMON,
        .categoryName = _("Rookie"), .height = 12, .weight = 250,
        .description = COMPOUND_STRING("A fur-clad reptile Digimon. Its\nblue flame is a sign of its quiet\ncourage."),
        // Digimon battle art and icon; cry/footprint/follower remain temporary.
        ROOKIE_GRAPHICS(Gabumon, Cyndaquil, CRY_CYNDAQUIL)
        .levelUpLearnset = sGabumonLevelUpLearnset, .teachableLearnset = sNoneTeachableLearnset, .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    [SPECIES_BIYOMON] =
    {
        .baseHP = 55, .baseAttack = 60, .baseDefense = 45, .baseSpeed = 65, .baseSpAttack = 55, .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FLYING), .catchRate = 45, .expYield = 67, .genderRatio = MON_GENDERLESS,
        .eggCycles = 20, .friendship = STANDARD_FRIENDSHIP, .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED), .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED, .speciesName = _("Biyomon"), .natDexNum = NATIONAL_DEX_BIYOMON,
        .categoryName = _("Rookie"), .height = 11, .weight = 200,
        .description = COMPOUND_STRING("A bird Digimon that flies with\nstrong wings and a cheerful\nheart."),
        // Digimon battle art and icon; cry/footprint/follower remain temporary.
        ROOKIE_GRAPHICS(Biyomon, Pidgey, CRY_PIDGEY)
        .levelUpLearnset = sBiyomonLevelUpLearnset, .teachableLearnset = sNoneTeachableLearnset, .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    [SPECIES_TENTOMON] =
    {
        .baseHP = 55, .baseAttack = 55, .baseDefense = 60, .baseSpeed = 45, .baseSpAttack = 65, .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_BUG, TYPE_ELECTRIC), .catchRate = 45, .expYield = 67, .genderRatio = MON_GENDERLESS,
        .eggCycles = 20, .friendship = STANDARD_FRIENDSHIP, .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED), .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED, .speciesName = _("Tentomon"), .natDexNum = NATIONAL_DEX_TENTOMON,
        .categoryName = _("Rookie"), .height = 10, .weight = 180,
        .description = COMPOUND_STRING("An inquisitive insect Digimon\nthat stores electricity in its\narmored shell."),
        // Digimon battle art and icon; cry/footprint/follower remain temporary.
        ROOKIE_GRAPHICS(Tentomon, Paras, CRY_PARAS)
        .levelUpLearnset = sTentomonLevelUpLearnset, .teachableLearnset = sNoneTeachableLearnset, .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    [SPECIES_PALMON] =
    {
        .baseHP = 60, .baseAttack = 50, .baseDefense = 55, .baseSpeed = 45, .baseSpAttack = 65, .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS), .catchRate = 45, .expYield = 67, .genderRatio = MON_GENDERLESS,
        .eggCycles = 20, .friendship = STANDARD_FRIENDSHIP, .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED), .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN, .speciesName = _("Palmon"), .natDexNum = NATIONAL_DEX_PALMON,
        .categoryName = _("Rookie"), .height = 13, .weight = 280,
        .description = COMPOUND_STRING("A plant Digimon with a friendly\nspirit and a dangerous thorned\nvine attack."),
        // Digimon battle art and icon; cry/footprint/follower remain temporary.
        ROOKIE_GRAPHICS(Palmon, Bellsprout, CRY_BELLSPROUT)
        .levelUpLearnset = sPalmonLevelUpLearnset, .teachableLearnset = sNoneTeachableLearnset, .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    [SPECIES_GOMAMON] =
    {
        .baseHP = 65, .baseAttack = 55, .baseDefense = 55, .baseSpeed = 50, .baseSpAttack = 60, .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_WATER), .catchRate = 45, .expYield = 67, .genderRatio = MON_GENDERLESS,
        .eggCycles = 20, .friendship = STANDARD_FRIENDSHIP, .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED), .abilities = { ABILITY_WATER_VEIL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE, .speciesName = _("Gomamon"), .natDexNum = NATIONAL_DEX_GOMAMON,
        .categoryName = _("Rookie"), .height = 13, .weight = 320,
        .description = COMPOUND_STRING("A marine Digimon that thrives\nin cold water and attacks with\nfast waves."),
        // Digimon battle art and icon; cry/footprint/follower remain temporary.
        ROOKIE_GRAPHICS(Gomamon, Seel, CRY_SEEL)
        .levelUpLearnset = sGomamonLevelUpLearnset, .teachableLearnset = sNoneTeachableLearnset, .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    [SPECIES_PATAMON] =
    {
        .baseHP = 50, .baseAttack = 45, .baseDefense = 45, .baseSpeed = 60, .baseSpAttack = 60, .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FLYING), .catchRate = 45, .expYield = 67, .genderRatio = MON_GENDERLESS,
        .eggCycles = 20, .friendship = STANDARD_FRIENDSHIP, .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED), .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN, .speciesName = _("Patamon"), .natDexNum = NATIONAL_DEX_PATAMON,
        .categoryName = _("Rookie"), .height = 10, .weight = 120,
        .description = COMPOUND_STRING("A small winged Digimon whose\nbright spirit gives it surprising\npower."),
        // Digimon battle art and icon; cry/footprint/follower remain temporary.
        ROOKIE_GRAPHICS(Patamon, Zubat, CRY_ZUBAT)
        .levelUpLearnset = sPatamonLevelUpLearnset, .teachableLearnset = sNoneTeachableLearnset, .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    [SPECIES_SALAMON] =
    {
        .baseHP = 55, .baseAttack = 55, .baseDefense = 60, .baseSpeed = 60, .baseSpAttack = 60, .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FAIRY), .catchRate = 45, .expYield = 67, .genderRatio = MON_GENDERLESS,
        .eggCycles = 20, .friendship = STANDARD_FRIENDSHIP, .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED), .abilities = { ABILITY_HEALER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE, .speciesName = _("Salamon"), .natDexNum = NATIONAL_DEX_SALAMON,
        .categoryName = _("Rookie"), .height = 11, .weight = 220,
        .description = COMPOUND_STRING("A loyal small Digimon with a\nhidden holy power and a strong\nprotective instinct."),
        // Digimon battle art and icon; cry/footprint/follower remain temporary.
        ROOKIE_GRAPHICS(Salamon, Growlithe, CRY_GROWLITHE)
        .levelUpLearnset = sSalamonLevelUpLearnset, .teachableLearnset = sNoneTeachableLearnset, .eggMoveLearnset = sNoneEggMoveLearnset,
    },

#undef ROOKIE_GRAPHICS

    /* You may add any custom species below this point based on the following structure: */

    /*
    [SPECIES_NONE] =
    {
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = MON_TYPES(TYPE_MYSTERY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CircledQuestionMark,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_CircledQuestionMarkF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .paletteFemale = gMonPalette_CircledQuestionMarkF,
        .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
        .iconSpriteFemale = gMonIcon_QuestionMarkF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },
    */
};

const struct EggData gEggDatas[EGG_ID_COUNT] =
{
#include "egg_data.h"
};
