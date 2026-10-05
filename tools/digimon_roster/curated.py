"""Hand-authored Digimon whose battle art comes from Digimon World DS sheets.

The DigimonEmerald donor has no data for these species, so stats, typing and
moves are original placeholders balanced by stage (Champion ~460, Ultimate
~535, Mega ~600). Growth rates are inherited from the pre-evolution by
generate.py. Names longer than the 12-character engine limit are abbreviated.
These species are excluded from wild tables and legacy trainer replacement.
"""

STATS = ("baseHP", "baseAttack", "baseDefense", "baseSpeed", "baseSpAttack", "baseSpDefense")
STAGE = {  # catch rate, experience yield
    "In-Training": (190, 50), "Champion": (75, 160), "Armor": (60, 175),
    "Ultimate": (45, 210), "Mega": (15, 270),
}


def digimon(key, name, stage, attribute, types, stats, ability, color, asset, moves, evolutions=(), box=None):
    catch, exp = STAGE[stage]
    return {
        "key": key, "name": name, "slug": key.lower(), "donor_path": None, "stage": stage,
        "types": ["TYPE_" + t for t in (types * 2)[:2]], "attribute": attribute,
        "stats": dict(zip(STATS, stats)), "catchRate": catch, "expYield": exp,
        "growthRate": "GROWTH_MEDIUM_FAST", "bodyColor": "BODY_COLOR_" + color,
        "abilities": f"ABILITY_{ability}, ABILITY_NONE", "asset": asset, "wild": False,
        "curated_moves": [(level, "MOVE_" + move) for level, move in moves],
        "curated_evolutions": [list(e) for e in evolutions],
        **({"box": box} if box else {}),
    }


CURATED = [
    digimon("KOROMON", "Koromon", "In-Training", "Free", ("NORMAL",), (45, 40, 40, 45, 35, 35),
            "RUN_AWAY", "PINK", 20462,
            [(1, "BUBBLE"), (1, "GROWL"), (6, "QUICK_ATTACK"), (12, "BITE")],
            box=(2, 14, 41, 46)),  # Different ripper and layout; first battle sprite.
    digimon("KABUTERIMON", "Kabuterimon", "Champion", "Vaccine", ("BUG", "ELECTRIC"),
            (75, 80, 80, 70, 85, 70), "SWARM", "BLUE", 48595,
            [(1, "SPARK"), (1, "FURY_CUTTER"), (1, "THUNDER_SHOCK"), (20, "BUG_BITE"),
             (24, "THUNDER_WAVE"), (28, "SIGNAL_BEAM"), (34, "THUNDERBOLT"), (40, "X_SCISSOR")],
            [(32, "MEGAKABUTERIMON")]),
    digimon("TOGEMON", "Togemon", "Champion", "Data", ("GRASS", "FIGHTING"),
            (80, 90, 85, 55, 65, 85), "IRON_FIST", "GREEN", 48326,
            [(1, "PIN_MISSILE"), (1, "MACH_PUNCH"), (1, "RAZOR_LEAF"), (20, "NEEDLE_ARM"),
             (24, "DRAIN_PUNCH"), (28, "BULLET_SEED"), (34, "SPIKY_SHIELD"), (40, "HAMMER_ARM")],
            [(32, "LILLYMON")]),
    digimon("IKKAKUMON", "Ikkakumon", "Champion", "Vaccine", ("WATER", "ICE"),
            (90, 80, 80, 55, 80, 75), "THICK_FAT", "WHITE", 48556,
            [(1, "WATER_GUN"), (1, "HORN_ATTACK"), (1, "POWDER_SNOW"), (20, "AQUA_JET"),
             (24, "ICE_SHARD"), (28, "HORN_DRILL"), (34, "ICE_BEAM"), (40, "WATERFALL")],
            [(32, "ZUDOMON")]),
    digimon("KUWAGAMON", "Kuwagamon", "Champion", "Virus", ("BUG", "DARK"),
            (70, 105, 85, 75, 55, 70), "HYPER_CUTTER", "RED", 41254,
            [(1, "VICE_GRIP"), (1, "FURY_CUTTER"), (1, "BITE"), (16, "BUG_BITE"),
             (18, "SCARY_FACE"), (24, "CRUNCH"), (30, "X_SCISSOR"), (38, "GUILLOTINE")]),
    digimon("STINGMON", "Stingmon", "Champion", "Free", ("BUG", "FIGHTING"),
            (70, 95, 65, 95, 55, 70), "SNIPER", "GREEN", 48591,
            [(1, "POISON_STING"), (1, "FURY_CUTTER"), (1, "QUICK_ATTACK"), (30, "POISON_JAB"),
             (34, "BRICK_BREAK"), (38, "MEGAHORN"), (44, "CLOSE_COMBAT")]),
    digimon("METALGREYMON", "MetalGreymon", "Ultimate", "Vaccine", ("FIRE", "STEEL"),
            (85, 115, 95, 75, 90, 75), "TOUGH_CLAWS", "BLUE", 48322,
            [(1, "FLAMETHROWER"), (1, "METAL_CLAW"), (1, "DRAGON_CLAW"), (32, "FLASH_CANNON"),
             (36, "IRON_HEAD"), (42, "FLARE_BLITZ"), (46, "GIGA_IMPACT")],
            [(48, "WARGREYMON")], box=(0, 0, 130, 130)),  # Panel-less sheet.
    digimon("WEREGARURUMON", "WereGarurmon", "Ultimate", "Vaccine", ("ICE", "FIGHTING"),
            (80, 115, 75, 105, 70, 80), "INNER_FOCUS", "BLUE", 48684,
            [(1, "ICE_FANG"), (1, "LOW_KICK"), (1, "QUICK_ATTACK"), (32, "ICE_PUNCH"),
             (36, "BLAZE_KICK"), (42, "CLOSE_COMBAT"), (46, "ICICLE_CRASH")],
            [(48, "METALGARURUMON")]),
    digimon("GARUDAMON", "Garudamon", "Ultimate", "Vaccine", ("FIRE", "FLYING"),
            (85, 110, 80, 90, 85, 80), "FLAME_BODY", "RED", 48715,
            [(1, "FLAME_WHEEL"), (1, "WING_ATTACK"), (1, "FIRE_PUNCH"), (32, "AERIAL_ACE"),
             (36, "BLAZE_KICK"), (42, "BRAVE_BIRD"), (46, "FIRE_BLAST")],
            [(48, "PHOENIXMON")]),
    digimon("MEGAKABUTERIMON", "MKabuterimon", "Ultimate", "Data", ("BUG", "ELECTRIC"),
            (90, 100, 105, 60, 95, 80), "SWARM", "RED", 48529,
            [(1, "THUNDERBOLT"), (1, "X_SCISSOR"), (1, "HORN_ATTACK"), (32, "WILD_CHARGE"),
             (36, "MEGAHORN"), (42, "ZAP_CANNON"), (46, "THUNDER")],
            [(48, "HERCULESKABUTERIMON")]),
    digimon("LILLYMON", "Lillymon", "Ultimate", "Data", ("GRASS", "FAIRY"),
            (70, 60, 70, 105, 120, 105), "FLOWER_VEIL", "PINK", 41255,
            [(1, "MAGICAL_LEAF"), (1, "FAIRY_WIND"), (1, "SWEET_SCENT"), (32, "DRAINING_KISS"),
             (36, "ENERGY_BALL"), (42, "MOONBLAST"), (46, "PETAL_DANCE")],
            [(48, "ROSEMON")]),
    digimon("ZUDOMON", "Zudomon", "Ultimate", "Vaccine", ("WATER", "STEEL"),
            (100, 115, 100, 50, 75, 90), "THICK_FAT", "BROWN", 48539,
            [(1, "WATERFALL"), (1, "ICE_FANG"), (1, "HORN_ATTACK"), (32, "IRON_HEAD"),
             (36, "HAMMER_ARM"), (42, "LIQUIDATION"), (46, "HEAVY_SLAM")],
            [(48, "VIKEMON")]),
    digimon("MAGNAANGEMON", "MagnaAngemon", "Ultimate", "Vaccine", ("FAIRY", "FLYING"),
            (85, 105, 85, 85, 95, 80), "JUSTIFIED", "PURPLE", 48701,
            [(1, "SACRED_SWORD"), (1, "AIR_SLASH"), (1, "AURA_SPHERE"), (32, "PLAY_ROUGH"),
             (36, "SWORDS_DANCE"), (42, "MOONBLAST"), (46, "SACRED_FIRE")],
            [(48, "SERAPHIMON")]),
    digimon("ANGEWOMON", "Angewomon", "Ultimate", "Vaccine", ("FAIRY", "FLYING"),
            (75, 70, 75, 100, 115, 100), "MAGIC_GUARD", "WHITE", 48625,
            [(1, "DAZZLING_GLEAM"), (1, "AIR_SLASH"), (1, "CHARM"), (32, "AURA_SPHERE"),
             (36, "WISH"), (42, "MOONBLAST"), (46, "HURRICANE")]),
    digimon("ETEMON", "Etemon", "Ultimate", "Virus", ("DARK", "NORMAL"),
            (85, 100, 75, 90, 90, 85), "PUNK_ROCK", "BROWN", 48430,
            [(1, "BOOMBURST"), (1, "SUCKER_PUNCH"), (1, "TAUNT"), (24, "HYPER_VOICE"),
             (30, "CRUNCH"), (36, "NASTY_PLOT"), (42, "DARK_PULSE")]),
    digimon("MYOTISMON", "Myotismon", "Ultimate", "Virus", ("DARK", "GHOST"),
            (85, 90, 75, 95, 115, 80), "PRESSURE", "BLUE", 48609,
            [(1, "NIGHT_SHADE"), (1, "LEECH_LIFE"), (1, "CONFUSE_RAY"), (45, "SHADOW_BALL"),
             (49, "DARK_PULSE"), (53, "NASTY_PLOT"), (57, "NIGHT_DAZE")]),
    digimon("PAILDRAMON", "Paildramon", "Ultimate", "Free", ("DRAGON", "BUG"),
            (85, 110, 85, 100, 85, 75), "TOUGH_CLAWS", "BLUE", 48721,
            [(1, "DRAGON_CLAW"), (1, "X_SCISSOR"), (1, "PIN_MISSILE"), (32, "DRAGON_RUSH"),
             (36, "U_TURN"), (42, "OUTRAGE"), (46, "MEGAHORN")],
            [(48, "IMPERIALDRAMON")]),
    digimon("SILPHYMON", "Silphymon", "Ultimate", "Data", ("FLYING", "FAIRY"),
            (80, 90, 75, 110, 105, 80), "KEEN_EYE", "RED", 48683,
            [(1, "AIR_SLASH"), (1, "AURA_SPHERE"), (1, "QUICK_ATTACK"), (32, "PLAY_ROUGH"),
             (36, "ROOST"), (42, "BRAVE_BIRD"), (46, "MOONBLAST")]),
    digimon("SHURIMON", "Shurimon", "Armor", "Free", ("GRASS", "WATER"),
            (65, 95, 65, 115, 70, 65), "TECHNICIAN", "GREEN", 48547,
            [(1, "RAZOR_LEAF"), (1, "WATER_SHURIKEN"), (1, "QUICK_ATTACK"), (24, "LEAF_BLADE"),
             (30, "AQUA_JET"), (36, "U_TURN"), (42, "LEAF_STORM")]),
    digimon("MAGNAMON", "Magnamon", "Armor", "Free", ("STEEL", "FAIRY"),
            (80, 100, 105, 95, 80, 85), "FULL_METAL_BODY", "YELLOW", 48681,
            [(1, "METAL_CLAW"), (1, "DAZZLING_GLEAM"), (1, "PROTECT"), (40, "IRON_HEAD"),
             (44, "PLAY_ROUGH"), (48, "IRON_DEFENSE"), (54, "METEOR_MASH")]),
    digimon("WARGREYMON", "WarGreymon", "Mega", "Vaccine", ("FIRE", "FIGHTING"),
            (90, 135, 100, 100, 90, 85), "INTIMIDATE", "YELLOW", 48613,
            [(1, "FLARE_BLITZ"), (1, "DRAGON_CLAW"), (1, "CLOSE_COMBAT"), (48, "DRAGON_DANCE"),
             (54, "SACRED_FIRE"), (60, "V_CREATE")]),
    digimon("METALGARURUMON", "MtlGarurumon", "Mega", "Data", ("ICE", "STEEL"),
            (85, 100, 90, 120, 115, 90), "ICE_BODY", "BLUE", 48720,
            [(1, "ICE_BEAM"), (1, "FLASH_CANNON"), (1, "ICE_FANG"), (48, "FREEZE_DRY"),
             (54, "BLIZZARD"), (60, "STEEL_BEAM")]),
    digimon("PHOENIXMON", "Phoenixmon", "Mega", "Vaccine", ("FIRE", "FLYING"),
            (95, 100, 85, 110, 115, 95), "REGENERATOR", "YELLOW", 48722,
            [(1, "FIRE_BLAST"), (1, "AIR_SLASH"), (1, "ROOST"), (48, "HEAT_WAVE"),
             (54, "HURRICANE"), (60, "SACRED_FIRE")]),
    digimon("HERCULESKABUTERIMON", "HKabuterimon", "Mega", "Vaccine", ("BUG", "ELECTRIC"),
            (100, 125, 120, 65, 105, 85), "LIGHTNING_ROD", "YELLOW", 48530,
            [(1, "MEGAHORN"), (1, "THUNDERBOLT"), (1, "IRON_DEFENSE"), (48, "ZAP_CANNON"),
             (54, "FIRST_IMPRESSION"), (60, "BOLT_STRIKE")]),
    digimon("ROSEMON", "Rosemon", "Mega", "Data", ("GRASS", "FAIRY"),
            (85, 80, 85, 115, 135, 100), "TRIAGE", "RED", 48453,
            [(1, "PETAL_BLIZZARD"), (1, "MOONBLAST"), (1, "POWER_WHIP"), (48, "PETAL_DANCE"),
             (54, "QUIVER_DANCE"), (60, "FLEUR_CANNON")]),
    digimon("VIKEMON", "Vikemon", "Mega", "Free", ("WATER", "ICE"),
            (120, 125, 105, 60, 85, 105), "THICK_FAT", "WHITE", 48538,
            [(1, "ICICLE_CRASH"), (1, "LIQUIDATION"), (1, "HAMMER_ARM"), (48, "WAVE_CRASH"),
             (54, "BLIZZARD"), (60, "GLACIAL_LANCE")]),
    digimon("SERAPHIMON", "Seraphimon", "Mega", "Vaccine", ("FAIRY", "STEEL"),
            (95, 105, 100, 95, 115, 90), "JUSTIFIED", "BLUE", 48694,
            [(1, "SACRED_SWORD"), (1, "FLASH_CANNON"), (1, "MOONBLAST"), (48, "JUDGMENT"),
             (54, "LIGHT_OF_RUIN"), (60, "SACRED_FIRE")]),
    digimon("BLACKWARGREYMON", "BWarGreymon", "Mega", "Virus", ("DARK", "FIGHTING"),
            (90, 135, 100, 100, 90, 85), "MOXIE", "BLACK", 48585,
            [(1, "NIGHT_SLASH"), (1, "DRAGON_CLAW"), (1, "CLOSE_COMBAT"), (48, "DRAGON_DANCE"),
             (54, "WICKED_BLOW"), (60, "FOUL_PLAY")]),
    digimon("IMPERIALDRAMON", "Imperialdrmn", "Mega", "Free", ("DRAGON", "STEEL"),
            (100, 130, 95, 95, 100, 80), "PRESSURE", "BLACK", 48608,
            [(1, "DRAGON_RUSH"), (1, "FLASH_CANNON"), (1, "DRAGON_CLAW"), (48, "OUTRAGE"),
             (54, "DRACO_METEOR"), (60, "DYNAMAX_CANNON")]),
]

# Existing species that only need a Digimon World DS portrait.
ART_ONLY = [{"key": "TYRANNOMON", "name": "Tyrannomon", "slug": "tyrannomon", "asset": 48455}]

# Evolutions into curated species from donor-roster species. Item entries come
# first: the engine takes the first entry whose conditions are met.
EXTRA_EVOLUTIONS = {
    "VEEMON": [[20, "FLADRAMON", "ITEM_DIGI_EGG_COURAGE"], [30, "MAGNAMON", "ITEM_DIGI_EGG_MIRACLES"]],
    "HAWKMON": [[20, "SHURIMON", "ITEM_DIGI_EGG_SINCERITY"]],
    "ARMADILMON": [[20, "DIGMON", "ITEM_DIGI_EGG_KNOWLEDGE"]],
    "WORMMON": [[30, "STINGMON"]],
    "STINGMON": [[32, "PAILDRAMON", "ITEM_DNA_CHARGE"]],
    "EXVEEMON": [[32, "PAILDRAMON", "ITEM_DNA_CHARGE"]],
    "AQUILAMON": [[32, "SILPHYMON", "ITEM_DNA_CHARGE"]],
    "GATOMON": [[32, "SILPHYMON", "ITEM_DNA_CHARGE"], [32, "ANGEWOMON"]],
    "GARURUMON": [[32, "WEREGARURUMON"]],
    "BIRDRAMON": [[32, "GARUDAMON"]],
    "ANGEMON": [[32, "MAGNAANGEMON"]],
    "DEVIMON": [[45, "MYOTISMON"]],
}

# Growth rate for evolution lines whose base form is hand-written in species_info.h.
STARTER_GROWTH = "GROWTH_MEDIUM_FAST"
STARTER_CHAMPIONS = ["GARURUMON", "BIRDRAMON", "ANGEMON", "GATOMON"]
