const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_SUNKERN] = {
        .species = SPECIES_POMUMON,
        .moves = {MOVE_MEGA_DRAIN, MOVE_HELPING_HAND, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AZURILL] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SING, MOVE_CHARM},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RASH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CATERPIE] = {
        .species = SPECIES_WORMMON,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEDLE] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WURMPLE] = {
        .species = SPECIES_KUNEMON,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_POISON_STING, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RALTS] = {
        .species = SPECIES_TAPIRMON,
        .moves = {MOVE_CONFUSION, MOVE_IMPRISON, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGIKARP] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_FLAIL, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FEEBAS] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_FLAIL, MOVE_MIRROR_COAT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAPOD] = {
        .species = SPECIES_WORMMON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KAKUNA] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PICHU] = {
        .species = SPECIES_GIZUMON,
        .moves = {MOVE_SWEET_KISS, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_SHOCK_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RASH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SILCOON] = {
        .species = SPECIES_WORMMON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CASCOON] = {
        .species = SPECIES_WORMMON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_IGGLYBUFF] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WOOPER] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_YAWN, MOVE_DIG, MOVE_WATER_PULSE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYROGUE] = {
        .species = SPECIES_PAWNMON,
        .moves = {MOVE_MACH_PUNCH, MOVE_PROTECT, MOVE_DOUBLE_TEAM, MOVE_FACADE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SENTRET] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_QUICK_ATTACK, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ASSIST},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLEFFA] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_METRONOME},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_SERIOUS,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEEDOT] = {
        .species = SPECIES_FLORAMON,
        .moves = {MOVE_BULLET_SEED, MOVE_BIDE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LOTAD] = {
        .species = SPECIES_BETAMON,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_SUNNY_DAY, MOVE_MEGA_DRAIN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POOCHYENA] = {
        .species = SPECIES_GAZIMON,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_ROAR, MOVE_SAND_ATTACK},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHEDINJA] = {
        .species = SPECIES_WORMMON,
        .moves = {MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_SILVER_WIND, MOVE_GRUDGE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_NAIVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAKUHITA] = {
        .species = SPECIES_PAWNMON,
        .moves = {MOVE_FAKE_OUT, MOVE_SEISMIC_TOSS, MOVE_DETECT, MOVE_WHIRLWIND},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WHISMUR] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_UPROAR, MOVE_SWAGGER, MOVE_BODY_SLAM, MOVE_SMELLING_SALTS},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZIGZAGOON] = {
        .species = SPECIES_LABRAMON,
        .moves = {MOVE_HEADBUTT, MOVE_PIN_MISSILE, MOVE_SWIFT, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZUBAT] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_POISON_FANG, MOVE_WHIRLWIND, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOGEPI] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_RETURN, MOVE_YAWN, MOVE_WISH, MOVE_SWEET_KISS},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPINARAK] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_NIGHT_SHADE, MOVE_SPIDER_WEB, MOVE_SCARY_FACE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MARILL] = {
        .species = SPECIES_MORPHOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_RAIN_DANCE, MOVE_LIGHT_SCREEN, MOVE_RETURN},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOPPIP] = {
        .species = SPECIES_POMUMON,
        .moves = {MOVE_MEGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_LAX,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLUGMA] = {
        .species = SPECIES_SOLARMON,
        .moves = {MOVE_EMBER, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_BODY_SLAM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWINUB] = {
        .species = SPECIES_GOTSUMON,
        .moves = {MOVE_ICY_WIND, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_ENDURE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SMEARGLE] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FAKE_OUT, MOVE_QUICK_ATTACK, MOVE_MACH_PUNCH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIDGEY] = {
        .species = SPECIES_FALCOMON,
        .moves = {MOVE_GUST, MOVE_SAND_ATTACK, MOVE_WHIRLWIND, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RATTATA] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_HYPER_FANG, MOVE_PURSUIT, MOVE_QUICK_ATTACK, MOVE_SWAGGER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WYNAUT] = {
        .species = SPECIES_PILLOMON,
        .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKITTY] = {
        .species = SPECIES_CHUUMON,
        .moves = {MOVE_SING, MOVE_ATTRACT, MOVE_CHARM, MOVE_DOUBLE_SLAP},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPEAROW] = {
        .species = SPECIES_FALCOMON,
        .moves = {MOVE_FURY_ATTACK, MOVE_PURSUIT, MOVE_MIRROR_MOVE, MOVE_PROTECT},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOOTHOOT] = {
        .species = SPECIES_FALCOMON,
        .moves = {MOVE_CONFUSION, MOVE_HYPNOSIS, MOVE_SUPERSONIC, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DIGLETT] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_MAGNITUDE, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_SAND_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_NAIVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LEDYBA] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_PSYBEAM, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINCADA] = {
        .species = SPECIES_WORMMON,
        .moves = {MOVE_MUD_SLAP, MOVE_DIG, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SURSKIT] = {
        .species = SPECIES_WORMMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_RAIN_DANCE, MOVE_SWEET_SCENT, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JIGGLYPUFF] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SING, MOVE_WISH, MOVE_MIMIC, MOVE_DOUBLE_SLAP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAILLOW] = {
        .species = SPECIES_FALCOMON,
        .moves = {MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WINGULL] = {
        .species = SPECIES_HYOKOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_STEEL_WING},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDORAN_M] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_DISABLE, MOVE_HELPING_HAND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDORAN_F] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_CRUNCH, MOVE_DOUBLE_KICK, MOVE_FLATTER, MOVE_HELPING_HAND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KIRLIA] = {
        .species = SPECIES_PILLOMON,
        .moves = {MOVE_CONFUSION, MOVE_WILL_O_WISP, MOVE_FUTURE_SIGHT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAREEP] = {
        .species = SPECIES_GIZUMON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_FLASH, MOVE_REFLECT, MOVE_COTTON_SPORE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEDITITE] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLAKOTH] = {
        .species = SPECIES_TYUTYUMON,
        .moves = {MOVE_YAWN, MOVE_SCRATCH, MOVE_ENCORE, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PARAS] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EKANS] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_ACID, MOVE_DIG, MOVE_SCREECH, MOVE_TORMENT},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_TYUTYUMON,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_METAL_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BARBOACH] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_MAGNITUDE, MOVE_WATER_PULSE, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEOWTH] = {
        .species = SPECIES_BURGERMON,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_SCREECH, MOVE_FAKE_OUT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PINECO] = {
        .species = SPECIES_MORPHOMON,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_TAKE_DOWN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TRAPINCH] = {
        .species = SPECIES_GOTSUMON,
        .moves = {MOVE_TOXIC, MOVE_DIG, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_SERIOUS,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPHEAL] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_ICE_BALL, MOVE_WATER_PULSE, MOVE_HAIL, MOVE_MUD_SLAP},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HORSEA] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_WATER_GUN, MOVE_AGILITY, MOVE_ICY_WIND, MOVE_TWISTER},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHROOMISH] = {
        .species = SPECIES_POMUMON,
        .moves = {MOVE_SPORE, MOVE_BULLET_SEED, MOVE_LEECH_SEED, MOVE_HEADBUTT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHUPPET] = {
        .species = SPECIES_BAKOMON,
        .moves = {MOVE_WILL_O_WISP, MOVE_NIGHT_SHADE, MOVE_GRUDGE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RASH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUSKULL] = {
        .species = SPECIES_BAKOMON,
        .moves = {MOVE_SKILL_SWAP, MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTRIKE] = {
        .species = SPECIES_GIZUMON,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VULPIX] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIKACHU] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIGHT_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SANDSHREW] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_DIG, MOVE_ROCK_TOMB, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLIWAG] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_HYPNOSIS, MOVE_ICY_WIND, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BELLSPROUT] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_LAX,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GEODUDE] = {
        .species = SPECIES_GOTSUMON,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_BLAST, MOVE_STRENGTH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRATINI] = {
        .species = SPECIES_DAMEMON,
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC, MOVE_WATER_PULSE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNUBBULL] = {
        .species = SPECIES_LUNAMON,
        .moves = {MOVE_BITE, MOVE_CHARM, MOVE_SWAGGER, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REMORAID] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_PROTECT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LARVITAR] = {
        .species = SPECIES_GOTSUMON,
        .moves = {MOVE_THRASH, MOVE_ROCK_SLIDE, MOVE_DIG, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BALTOY] = {
        .species = SPECIES_PILLOMON,
        .moves = {MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_LIGHT_SCREEN, MOVE_MUD_SLAP},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORUNT] = {
        .species = SPECIES_PENGUINMON,
        .moves = {MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_LEER, MOVE_BITE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BAGON] = {
        .species = SPECIES_DAMEMON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BELDUM] = {
        .species = SPECIES_CHIKURIMON,
        .moves = {MOVE_TAKE_DOWN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GULPIN] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_TOXIC, MOVE_YAWN, MOVE_PAIN_SPLIT, MOVE_ATTRACT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SERIOUS,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENONAT] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_PSYBEAM, MOVE_SUPERSONIC, MOVE_STUN_SPORE, MOVE_SKILL_SWAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANKEY] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SCREECH, MOVE_SWAGGER},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHOP] = {
        .species = SPECIES_IGNITEMON,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHELLDER] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SUPERSONIC, MOVE_CLAMP, MOVE_WITHDRAW},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SMOOCHUM] = {
        .species = SPECIES_PSYCHEMON,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_MUD_SLAP, MOVE_FAKE_OUT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NUMEL] = {
        .species = SPECIES_SOLARMON,
        .moves = {MOVE_EMBER, MOVE_MAGNITUDE, MOVE_ROCK_TOMB, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CARVANHA] = {
        .species = SPECIES_SOUNBRDMON,
        .moves = {MOVE_BITE, MOVE_SCREECH, MOVE_SCARY_FACE, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CORPHISH] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARMANDER] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FIRE_SPIN, MOVE_METAL_CLAW, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CYNDAQUIL] = {
        .species = SPECIES_SOLARMON,
        .moves = {MOVE_EMBER, MOVE_SWIFT, MOVE_QUICK_ATTACK, MOVE_SMOKESCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ABRA] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_MIMIC, MOVE_METRONOME, MOVE_FLASH, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DODUO] = {
        .species = SPECIES_FALCOMON,
        .moves = {MOVE_FURY_ATTACK, MOVE_UPROAR, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GASTLY] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWABLU] = {
        .species = SPECIES_FALCOMON,
        .moves = {MOVE_TAKE_DOWN, MOVE_DREAM_EATER, MOVE_SING, MOVE_ATTRACT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TREECKO] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_BULLET_SEED, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORCHIC] = {
        .species = SPECIES_CANDLEMON,
        .moves = {MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUDKIP] = {
        .species = SPECIES_BETAMON,
        .moves = {MOVE_WHIRLPOOL, MOVE_ENDEAVOR, MOVE_MUD_SPORT, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SQUIRTLE] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_WITHDRAW, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOTODILE] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_SCREECH, MOVE_ICY_WIND},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWPOKE] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_CONFUSION, MOVE_DISABLE, MOVE_WATER_PULSE, MOVE_YAWN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BULBASAUR] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHIKORITA] = {
        .species = SPECIES_FLORAMON,
        .moves = {MOVE_SECRET_POWER, MOVE_BULLET_SEED, MOVE_MUD_SLAP, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ODDISH] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SWEET_SCENT, MOVE_MOONLIGHT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PSYDUCK] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_CONFUSION, MOVE_FURY_SWIPES, MOVE_AERIAL_ACE, MOVE_DISABLE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HASTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CUBONE] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_BONE_CLUB, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLDEEN] = {
        .species = SPECIES_SWIMMON,
        .moves = {MOVE_WATERFALL, MOVE_FURY_ATTACK, MOVE_AGILITY, MOVE_PSYBEAM},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NATU] = {
        .species = SPECIES_FALCOMON,
        .moves = {MOVE_NIGHT_SHADE, MOVE_FUTURE_SIGHT, MOVE_CONFUSE_RAY, MOVE_FLASH},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLEFAIRY] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_FOLLOW_ME, MOVE_RETURN, MOVE_ENCORE, MOVE_SING},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGNEMITE] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SUPERSONIC, MOVE_METAL_SOUND, MOVE_REFLECT},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEEL] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_AURORA_BEAM, MOVE_DIVE, MOVE_BODY_SLAM, MOVE_FAKE_OUT},
        .heldItem = ITEM_ASPEAR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRIMER] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE, MOVE_ROCK_TOMB, MOVE_ACID_ARMOR, MOVE_MINIMIZE},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KRABBY] = {
        .species = SPECIES_SWIMMON,
        .moves = {MOVE_CRABHAMMER, MOVE_MUD_SHOT, MOVE_FLAIL, MOVE_KNOCK_OFF},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXEGGCUTE] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_CONFUSION, MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EEVEE] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_CHARM, MOVE_ATTRACT, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DROWZEE] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_CONFUSION, MOVE_HEADBUTT, MOVE_DISABLE, MOVE_BARRIER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VOLTORB] = {
        .species = SPECIES_HERISSMON,
        .moves = {MOVE_SPARK, MOVE_SCREECH, MOVE_ROLLOUT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHINCHOU] = {
        .species = SPECIES_JELLYMON,
        .moves = {MOVE_SPARK, MOVE_DIVE, MOVE_CONFUSE_RAY, MOVE_TAKE_DOWN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TEDDIURSA] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_SECRET_POWER, MOVE_FAKE_TEARS, MOVE_FEINT_ATTACK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DELIBIRD] = {
        .species = SPECIES_PENGUINMON,
        .moves = {MOVE_PRESENT, MOVE_ICE_BALL, MOVE_AERIAL_ACE, MOVE_HAIL},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOUNDOUR] = {
        .species = SPECIES_VEMMON,
        .moves = {MOVE_CRUNCH, MOVE_EMBER, MOVE_ROAR, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PHANPY] = {
        .species = SPECIES_SUNARZAMON,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_ROCK_TOMB, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPOINK] = {
        .species = SPECIES_PHASCOMON,
        .moves = {MOVE_PSYWAVE, MOVE_BOUNCE, MOVE_MAGIC_COAT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARON] = {
        .species = SPECIES_VEMMON,
        .moves = {MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_METAL_SOUND, MOVE_ROAR},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUVDISC] = {
        .species = SPECIES_JELLYMON,
        .moves = {MOVE_SWEET_KISS, MOVE_ATTRACT, MOVE_DIVE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TENTACOOL] = {
        .species = SPECIES_MODBETAMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_ACID, MOVE_BARRIER, MOVE_WRAP},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CACNEA] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FEINT_ATTACK, MOVE_COTTON_SPORE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UNOWN] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KOFFING] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TORMENT, MOVE_HAZE},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARYU] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MINIMIZE, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKIPLOOM] = {
        .species = SPECIES_LALAMON,
        .moves = {MOVE_MEGA_DRAIN, MOVE_CONFUSION, MOVE_COTTON_SPORE, MOVE_SYNTHESIS},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NUZLEAF] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_EXTRASENSORY, MOVE_FAKE_OUT, MOVE_RAZOR_WIND, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LOMBRE] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_WATER_PULSE, MOVE_FAKE_OUT, MOVE_BRICK_BREAK, MOVE_ABSORB},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VIBRAVA] = {
        .species = SPECIES_MONODRAMON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_DIG, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYHORN] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_ROCK_BLAST, MOVE_DIG, MOVE_SCARY_FACE, MOVE_ROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAMPERL] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_IRON_DEFENSE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_DEEP_SEA_SCALE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIDGEOTTO] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GROWLITHE] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_ROAR, MOVE_AGILITY},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FARFETCHD] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_SLASH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_LEEK,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OMANYTE] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ANCIENT_POWER, MOVE_TICKLE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KABUTO] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_MEGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_SAND_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LILEEP] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_ACID, MOVE_INGRAIN, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ANORITH] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_METAL_CLAW, MOVE_FURY_CUTTER, MOVE_ANCIENT_POWER, MOVE_WATER_GUN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AIPOM] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_FURY_SWIPES, MOVE_SAND_ATTACK, MOVE_BATON_PASS, MOVE_AGILITY},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELEKID] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_QUICK_ATTACK, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_NAIVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LOUDRED] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_STOMP, MOVE_HOWL, MOVE_ASTONISH, MOVE_SUPERSONIC},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPINDA] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDORINA] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_AERIAL_ACE, MOVE_FLATTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDORINO] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_DOUBLE_KICK, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_FLATTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLAAFFY] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_COTTON_SPORE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MILD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGBY] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FIRE_PUNCH, MOVE_SMOKESCREEN, MOVE_CONFUSE_RAY, MOVE_SMOG},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NOSEPASS] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SANDSTORM},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CORSOLA] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MIRROR_COAT, MOVE_ATTRACT, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAWILE] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_CRUNCH, MOVE_FAKE_TEARS, MOVE_IRON_DEFENSE, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BUTTERFREE] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_WHIRLWIND},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BEEDRILL] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_TWINEEDLE, MOVE_PURSUIT, MOVE_ENDEAVOR, MOVE_AGILITY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLIWHIRL] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_SLAP, MOVE_ICY_WIND, MOVE_RAIN_DANCE},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ONIX] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BIND, MOVE_DRAGON_BREATH, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BEAUTIFLY] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_SILVER_WIND, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_WHIRLWIND},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUSTOX] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_SILVER_WIND, MOVE_TOXIC, MOVE_PSYBEAM, MOVE_WHIRLWIND},
        .heldItem = ITEM_SILVER_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LEDIAN] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_COMET_PUNCH, MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARIADOS] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_SPIDER_WEB, MOVE_NIGHT_SHADE, MOVE_TOXIC},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_SERIOUS,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_YANMA] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_DETECT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DELCATTY_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_SECRET_POWER, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_HEAL_BELL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_FEINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_KNOCK_OFF, MOVE_FAKE_OUT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LICKITUNG_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_SLAM, MOVE_BRICK_BREAK, MOVE_LICK, MOVE_MUD_SLAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEPINBELL_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_WRAP, MOVE_SWEET_SCENT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRAVELER_1] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_DEFENSE_CURL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLOOM_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PETAL_DANCE, MOVE_ACID, MOVE_STUN_SPORE, MOVE_MOONLIGHT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_RECYCLE, MOVE_AGILITY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KADABRA_1] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_CONFUSION, MOVE_ROLE_PLAY, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILMER_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_WHIRLPOOL, MOVE_ROAR, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROSELIA_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_TOXIC, MOVE_GRASS_WHISTLE, MOVE_COTTON_SPORE},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_SILVER_WIND, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_SILVER_WIND, MOVE_WISH, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_IVYSAUR_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PETAL_DANCE, MOVE_GROWTH, MOVE_SWEET_SCENT, MOVE_FURY_CUTTER},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARMELEON_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_SLASH, MOVE_FIRE_SPIN, MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WARTORTLE_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_MUD_SLAP, MOVE_YAWN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLASH, MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_FLASH},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RASH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHOKE_1] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_LOW_KICK, MOVE_ROCK_TOMB, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HAUNTER_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_SPITE, MOVE_GRUDGE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RASH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BAYLEEF_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_RAZOR_LEAF, MOVE_TOXIC, MOVE_SAFEGUARD, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUILAVA_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAME_WHEEL, MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SMOKESCREEN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROCONAW_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_BITE, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOGETIC_1] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_AERIAL_ACE, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MURKROW_1] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_FEINT_ATTACK, MOVE_FLY, MOVE_TORMENT, MOVE_TAUNT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WOBBUFFET_1] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM, MOVE_SAFEGUARD},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_SPARK, MOVE_FAKE_TEARS, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_SPARK, MOVE_CHARM, MOVE_ENCORE, MOVE_HELPING_HAND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GROVYLE_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_FURY_CUTTER, MOVE_ENDEAVOR, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COMBUSKEN_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_EMBER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MARSHTOMP_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ROCK_TOMB, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PONYTA_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FIRE_SPIN, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_FACADE, MOVE_DIG, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FEINT_ATTACK, MOVE_SANDSTORM, MOVE_BLOCK},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EMBER, MOVE_ACID_ARMOR, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PUPITAR_1] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_DIG, MOVE_BITE, MOVE_SCARY_FACE, MOVE_SANDSTORM},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEALEO_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_ICE_BALL, MOVE_HAIL, MOVE_SNORE, MOVE_REST},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_ENDEAVOR, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_NAIVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_ICY_WIND, MOVE_STUN_SPORE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_SLAM, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_SERIOUS,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUNSPARCE_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_HEADBUTT, MOVE_GLARE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONAIR_1] = {
        .species = SPECIES_BETGAMAMON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_LEER, MOVE_WRAP, MOVE_SAFEGUARD},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_EYESMON,
        .moves = {MOVE_BITE, MOVE_POISON_FANG, MOVE_TAUNT, MOVE_ROAR},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_APEMON,
        .moves = {MOVE_SECRET_POWER, MOVE_SAND_ATTACK, MOVE_COVET, MOVE_TICKLE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_APEMON,
        .moves = {MOVE_EMBER, MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_ICY_WIND},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_HASTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHELGON_1] = {
        .species = SPECIES_BETGAMAMON,
        .moves = {MOVE_HEADBUTT, MOVE_DRAGON_BREATH, MOVE_PROTECT, MOVE_SCARY_FACE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METANG_1] = {
        .species = SPECIES_AURUMON,
        .moves = {MOVE_METAL_CLAW, MOVE_CONFUSION, MOVE_PURSUIT, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_SECRET_POWER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_PETAL_DANCE, MOVE_INGRAIN, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_PSYWAVE, MOVE_TAKE_DOWN, MOVE_HEAL_BELL, MOVE_SAFEGUARD},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLIGAR_1] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_METAL_CLAW, MOVE_DIG, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HASTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_MODBETAMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_PIN_MISSILE, MOVE_SPIKES, MOVE_MINIMIZE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNEASEL_1] = {
        .species = SPECIES_FRIGIMON,
        .moves = {MOVE_FEINT_ATTACK, MOVE_FAKE_OUT, MOVE_ICY_WIND, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_AERIAL_ACE, MOVE_STOCKPILE, MOVE_SWALLOW},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_FLY, MOVE_ENDEAVOR, MOVE_FACADE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAIRON_1] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_IRON_DEFENSE, MOVE_PROTECT},
        .heldItem = ITEM_METAL_COAT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TANGELA_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_MEGA_DRAIN, MOVE_SLAM, MOVE_TOXIC, MOVE_BIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_POISON_FANG, MOVE_DIG, MOVE_BITE, MOVE_GLARE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_FAKE_OUT, MOVE_SLASH, MOVE_TORMENT, MOVE_SWAGGER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEADRA_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_AURORA_BEAM, MOVE_SMOKESCREEN, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_SECRET_POWER, MOVE_PSYBEAM, MOVE_MAGIC_COAT, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 170, 0, 0, 0),
        .nature = NATURE_NAIVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VIGOROTH_1] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_SLASH, MOVE_COUNTER, MOVE_ENCORE, MOVE_UPROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_CONFUSION, MOVE_COSMIC_POWER, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_CONFUSION, MOVE_FIRE_SPIN, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_CONFUSION, MOVE_AERIAL_ACE, MOVE_FEINT_ATTACK, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_SWIFT, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_SLEEP_POWDER, MOVE_SKILL_SWAP},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_METRONOME, MOVE_REFRESH, MOVE_DEFENSE_CURL, MOVE_MINIMIZE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_PSYBEAM, MOVE_SWIFT, MOVE_AGILITY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_LALAMON,
        .moves = {MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_SYNTHESIS},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PILOSWINE_1] = {
        .species = SPECIES_ANKYLOMON,
        .moves = {MOVE_DIG, MOVE_ANCIENT_POWER, MOVE_HAIL, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLBAT_1] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_AIR_CUTTER, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_STEEL_WING},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_KARATE_CHOP, MOVE_COUNTER, MOVE_SWAGGER, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_ROLLING_KICK, MOVE_BRICK_BREAK, MOVE_FOCUS_ENERGY, MOVE_FACADE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_DETECT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_DEPUTYMON,
        .moves = {MOVE_PSYBEAM, MOVE_STOMP, MOVE_WISH, MOVE_SKILL_SWAP},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_TRIPLE_KICK, MOVE_DIG, MOVE_MACH_PUNCH, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_DEXDORUMON,
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_SPITE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_CHOUFLYMON,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_ENDURE, MOVE_DIG},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MILD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_DOKUGUMON,
        .moves = {MOVE_POISON_TAIL, MOVE_BITE, MOVE_GLARE, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_DORULUMON,
        .moves = {MOVE_SLASH, MOVE_DOUBLE_KICK, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_BIRDRAMON,
        .moves = {MOVE_MAGNITUDE, MOVE_PROTECT, MOVE_SANDSTORM, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_DEVIDRAMON,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_WATER_PULSE, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_BIRDRAMON,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_WHIRLWIND, MOVE_AERIAL_ACE, MOVE_STEEL_WING},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGNETON_1] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AERIAL_ACE, MOVE_RAIN_DANCE, MOVE_ICY_WIND},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STANTLER_1] = {
        .species = SPECIES_GARGOMON,
        .moves = {MOVE_EXTRASENSORY, MOVE_CONFUSE_RAY, MOVE_STOMP, MOVE_SAND_ATTACK},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_AXEMON,
        .moves = {MOVE_BITE, MOVE_RAZOR_WIND, MOVE_FUTURE_SIGHT, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_DOKUGUMON,
        .moves = {MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_SPIT_UP, MOVE_SLUDGE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_VISE_GRIP, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIDGEOT_1] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYBEAM, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_MAGIC_COAT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_GEOGREYMON,
        .moves = {MOVE_EMBER, MOVE_FIRE_SPIN, MOVE_SMOKESCREEN, MOVE_AMNESIA},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_CRABHAMMER, MOVE_METAL_CLAW, MOVE_MUD_SHOT, MOVE_PROTECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FEINT_ATTACK, MOVE_ACID, MOVE_MEGA_PUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HASTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PETAL_DANCE, MOVE_SAFEGUARD, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_OCTAZOOKA, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_ROCK_BLAST},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_WHIRLPOOL, MOVE_SCARY_FACE, MOVE_MUD_SLAP, MOVE_BITE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOREBYSS_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_WHIRLPOOL, MOVE_AMNESIA, MOVE_ICY_WIND, MOVE_CONFUSION},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_HARDEN, MOVE_AMNESIA},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SPIKE_CANNON, MOVE_TICKLE, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_SLASH, MOVE_DIG, MOVE_FURY_CUTTER, MOVE_KNOCK_OFF},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SUBMISSION, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_BUBBLE_BEAM},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCYTHER_1] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_FURY_CUTTER, MOVE_AERIAL_ACE, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_KUNEMON,
        .moves = {MOVE_SUBMISSION, MOVE_FOCUS_ENERGY, MOVE_SWORDS_DANCE, MOVE_REVENGE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_DIVE, MOVE_DIG, MOVE_HYPNOSIS, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_AURORA_BEAM, MOVE_SPIKE_CANNON, MOVE_SUPERSONIC, MOVE_PROTECT},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FEINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LICKITUNG_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEPINBELL_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_REFLECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRAVELER_2] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLOOM_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KADABRA_2] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RECOVER},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILMER_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_WATER_SPOUT, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROSELIA_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_TAIL_GLOW},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_SILVER_WIND, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_IVYSAUR_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARMELEON_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_ANCIENT_POWER, MOVE_DRAGON_RAGE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WARTORTLE_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHOKE_2] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HAUNTER_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BAYLEEF_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_BODY_SLAM, MOVE_GRASS_WHISTLE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUILAVA_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUSH_CLAW, MOVE_BODY_SLAM, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROCONAW_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_DIG},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOGETIC_2] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_RETURN, MOVE_SWEET_KISS, MOVE_AERIAL_ACE, MOVE_YAWN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MURKROW_2] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WOBBUFFET_2] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SEISMIC_TOSS, MOVE_WISH},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_ATTRACT, MOVE_CHARM, MOVE_WISH},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GROVYLE_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_CRUSH_CLAW, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COMBUSKEN_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SKY_UPPERCUT, MOVE_SLASH, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MARSHTOMP_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PONYTA_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_IRON_TAIL, MOVE_DIG},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_LOW_KICK, MOVE_SELF_DESTRUCT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PUPITAR_2] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEALEO_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM, MOVE_HAIL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_SUPER_FANG, MOVE_HYPER_FANG, MOVE_SHADOW_BALL, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_FOLLOW_ME},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUNSPARCE_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_ICE_BEAM, MOVE_ROCK_TOMB, MOVE_BITE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONAIR_2] = {
        .species = SPECIES_BETGAMAMON,
        .moves = {MOVE_RETURN, MOVE_REST, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_EYESMON,
        .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCARY_FACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_APEMON,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_THUNDER_WAVE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_APEMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_WATER_PULSE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHELGON_2] = {
        .species = SPECIES_BETGAMAMON,
        .moves = {MOVE_FRUSTRATION, MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METANG_2] = {
        .species = SPECIES_AURUMON,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_DREAM_EATER, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_GROWTH, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEAL_BELL},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLIGAR_2] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_GUILLOTINE, MOVE_SCREECH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_MODBETAMON,
        .moves = {MOVE_REVENGE, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNEASEL_2] = {
        .species = SPECIES_FRIGIMON,
        .moves = {MOVE_CRUSH_CLAW, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_SCREECH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 170, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_AERIAL_ACE, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAIRON_2] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROAR, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TANGELA_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_REST, MOVE_AMNESIA},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_GLARE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_ROAR, MOVE_FAKE_OUT},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEADRA_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FRUSTRATION, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_TRICK, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_SKILL_SWAP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VIGOROTH_2] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_CRUSH_CLAW, MOVE_REVERSAL, MOVE_ENDURE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_CALM_MIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COSMIC_POWER, MOVE_OVERHEAT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_PSYCHIC, MOVE_FEINT_ATTACK, MOVE_AERIAL_ACE, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUSH_CLAW, MOVE_SANDSTORM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HORN_DRILL, MOVE_MEGAHORN, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_LALAMON,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PILOSWINE_2] = {
        .species = SPECIES_ANKYLOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLBAT_2] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_AIR_CUTTER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_TOMB, MOVE_OVERHEAT, MOVE_BULK_UP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_FORESIGHT, MOVE_ROCK_TOMB},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_MACH_PUNCH, MOVE_DETECT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_DEPUTYMON,
        .moves = {MOVE_PSYCHIC, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_AGILITY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_DEXDORUMON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCREECH, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_CHOUFLYMON,
        .moves = {MOVE_SLASH, MOVE_SHADOW_BALL, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_DOKUGUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_DORULUMON,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_BIRDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_DEVIDRAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SURF},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_BIRDRAMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_BODY_SLAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGNETON_2] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STANTLER_2] = {
        .species = SPECIES_GARGOMON,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_AXEMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_DOKUGUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_GUILLOTINE, MOVE_FRUSTRATION, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIDGEOT_2] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_RETURN, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_MUD_SLAP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_GEOGREYMON,
        .moves = {MOVE_OVERHEAT, MOVE_BODY_SLAM, MOVE_SMOKESCREEN, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_GUILLOTINE, MOVE_ROCK_TOMB, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_MEGA_KICK, MOVE_TEETER_DANCE, MOVE_FEINT_ATTACK, MOVE_SANDSTORM},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_ATTRACT, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_OCTAZOOKA, MOVE_FIRE_BLAST, MOVE_THUNDER_WAVE, MOVE_MUD_SLAP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOREBYSS_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_BODY_SLAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_BRICK_BREAK, MOVE_HYPNOSIS, MOVE_REST, MOVE_BELLY_DRUM},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCYTHER_2] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_KUNEMON,
        .moves = {MOVE_GUILLOTINE, MOVE_SWORDS_DANCE, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_MUD_SLAP, MOVE_SWAGGER},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_SLASH, MOVE_SAND_TOMB},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_PSYCHIC, MOVE_HIGH_JUMP_KICK, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MISDREAVUS_1] = {
        .species = SPECIES_BAKEMON,
        .moves = {MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_FACADE, MOVE_MUD_SLAP},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_ANKYLOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_SMELLING_SALTS, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_PSYCHEMON,
        .moves = {MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUSCLOPS_1] = {
        .species = SPECIES_DEXDORUMON,
        .moves = {MOVE_WILL_O_WISP, MOVE_SEISMIC_TOSS, MOVE_PAIN_SPLIT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_PILLOMON,
        .moves = {MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_FAKE_OUT, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_FILMON,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_HEADBUTT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_BALISTAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_LIGHT_SCREEN, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_ANGEMON,
        .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SHADE, MOVE_WISH, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_COUNTER, MOVE_AGILITY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_HEADBUTT},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_ARCHELOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_METRONOME, MOVE_DOUBLE_TEAM, MOVE_REFLECT, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 170, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_FAKE_OUT},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH, MOVE_QUICK_ATTACK, MOVE_ROAR},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_AROMATHERAPY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_QUICK_ATTACK, MOVE_FAKE_OUT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_HAIL, MOVE_PROTECT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYDON_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTABUZZ_1] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_THRASH, MOVE_SWAGGER, MOVE_FACADE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_HEADBUTT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_PSYCHIC, MOVE_BRICK_BREAK, MOVE_AMNESIA, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_MILK_DRINK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_REFRESH, MOVE_BODY_SLAM},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_HORN_DRILL, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGMAR_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_BRICK_BREAK, MOVE_BARRIER},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ROCK_SLIDE, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SLASH, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER, MOVE_PROTECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DIG, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM, MOVE_SCREECH, MOVE_MINIMIZE},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_ATTRACT},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_BALISTAMON,
        .moves = {MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_COUNTER, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_CRUNCH, MOVE_AERIAL_ACE, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_WILL_O_WISP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DIGMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_ROCK_TOMB, MOVE_ROAR},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_MODBETAMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_DRAGON_BREATH, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_TRI_ATTACK, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_MAGICAL_LEAF, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 170, 0, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEEL_WING, MOVE_FEINT_ATTACK, MOVE_FACADE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ROAR, MOVE_BITE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_PROTECT},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_CHARM, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_BITE, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_LEAF_BLADE, MOVE_LEECH_SEED, MOVE_AERIAL_ACE, MOVE_DETECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_ROAR, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SMOKESCREEN, MOVE_ROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ATTRACT, MOVE_CONFUSE_RAY, MOVE_SING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_ANGEMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_ASTONISH, MOVE_SCREECH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_REST, MOVE_CURSE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_RETURN, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_EBIDRAMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_BREATH, MOVE_ICY_WIND, MOVE_ATTRACT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_SING, MOVE_SOFT_BOILED},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_METEOR_MASH, MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_YAWN, MOVE_BULK_UP, MOVE_SWAGGER, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_TRI_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_PSYCHIC, MOVE_FAKE_OUT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_ICY_WIND},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_ARCHELOMON,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_YAWN, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MISDREAVUS_2] = {
        .species = SPECIES_BAKEMON,
        .moves = {MOVE_PSYCHIC, MOVE_ATTRACT, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_ATTRACT, MOVE_PURSUIT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_ANKYLOMON,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FACADE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_PSYCHEMON,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_LOVELY_KISS, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUSCLOPS_2] = {
        .species = SPECIES_DEXDORUMON,
        .moves = {MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_FEINT_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_PILLOMON,
        .moves = {MOVE_BATON_PASS, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_PSYCHIC},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_FILMON,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_FOCUS_PUNCH, MOVE_SPORE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_BALISTAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_COUNTER, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_SPIKES, MOVE_ROAR, MOVE_DRILL_PECK, MOVE_TOXIC},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_ANGEMON,
        .moves = {MOVE_FLY, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_METEOR_MASH, MOVE_COSMIC_POWER, MOVE_DOUBLE_TEAM, MOVE_FOLLOW_ME},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_ENCORE, MOVE_DISABLE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_ROAR},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_INGRAIN, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_SERIOUS,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_SWAGGER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_LEECH_SEED, MOVE_DIG, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_EXPLOSION, MOVE_ENDURE, MOVE_BODY_SLAM, MOVE_ICY_WIND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_DREAM_EATER, MOVE_PSYCHIC},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYDON_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_MEMENTO, MOVE_SLUDGE_BOMB, MOVE_FACADE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTABUZZ_2] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_ATTRACT, MOVE_FOCUS_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_YAWN, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYCHIC},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_PERISH_SONG, MOVE_DRAGON_BREATH, MOVE_PURSUIT, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGMAR_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SMOKESCREEN, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_IRON_TAIL, MOVE_ANCIENT_POWER, MOVE_BRICK_BREAK, MOVE_KNOCK_OFF},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_SURF, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_BOUNCE, MOVE_DOUBLE_TEAM, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLUDGE_BOMB, MOVE_DYNAMIC_PUNCH},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_BALISTAMON,
        .moves = {MOVE_SILVER_WIND, MOVE_STEEL_WING, MOVE_SWORDS_DANCE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ATTRACT, MOVE_BULK_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_ROAR, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DIGMON,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_COSMIC_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_CURSE, MOVE_AMNESIA},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_HEAT_WAVE, MOVE_BODY_SLAM, MOVE_GRUDGE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SANDSTORM, MOVE_DIG, MOVE_FLASH, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_SANDSTORM, MOVE_BLOCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_MODBETAMON,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SURF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_RETURN, MOVE_CURSE, MOVE_SLEEP_POWDER, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DIG, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_GRASS_WHISTLE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_CURSE, MOVE_SCREECH, MOVE_DOUBLE_TEAM, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_BLAZE_KICK, MOVE_MEGA_KICK, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_ANGEMON,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_EBIDRAMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SING, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SAFEGUARD, MOVE_MIRROR_COAT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_CRUNCH, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_PSYCH_UP, MOVE_SWAGGER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_AMNESIA},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_FISSURE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEDICHAM_3] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MISDREAVUS_3] = {
        .species = SPECIES_BAKEMON,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FEAROW_3] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_DRILL_PECK, MOVE_RETURN, MOVE_STEEL_WING, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRANBULL_3] = {
        .species = SPECIES_ANKYLOMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JYNX_3] = {
        .species = SPECIES_PSYCHEMON,
        .moves = {MOVE_DREAM_EATER, MOVE_LOVELY_KISS, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUSCLOPS_3] = {
        .species = SPECIES_DEXDORUMON,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DODRIO_3] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MR_MIME_3] = {
        .species = SPECIES_PILLOMON,
        .moves = {MOVE_TRICK, MOVE_TORMENT, MOVE_PSYCHIC, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LANTURN_3] = {
        .species = SPECIES_FILMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_CONFUSE_RAY, MOVE_RAIN_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRELOOM_3] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_IRON_TAIL, MOVE_FOCUS_PUNCH, MOVE_ATTRACT, MOVE_SPORE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FORRETRESS_3] = {
        .species = SPECIES_BALISTAMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_ZAP_CANNON},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SLEEP_TALK, MOVE_REST, MOVE_SURF, MOVE_FISSURE},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_XATU_3] = {
        .species = SPECIES_ANGEMON,
        .moves = {MOVE_DRILL_PECK, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_STEEL_WING},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKARMORY_3] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_TOXIC, MOVE_CURSE, MOVE_REST, MOVE_FLY},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAROWAK_3] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAGSIRE_3] = {
        .species = SPECIES_ARCHELOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_MAGICAL_LEAF},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HARIYAMA_3] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FACADE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAICHU_3] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_IRON_TAIL, MOVE_ATTRACT},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DEWGONG_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HORN_DRILL, MOVE_SHEER_COLD, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANECTRIC_3] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_ATTRACT, MOVE_STUN_SPORE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VICTREEBEL_3] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_STUN_SPORE, MOVE_INGRAIN, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ENDURE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXPLOUD_3] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_OVERHEAT, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_EXTRASENSORY},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHIFTRY_3] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_SYNTHESIS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLALIE_3] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUDICOLO_3] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_MEGA_KICK, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLEM_3] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYDON_3] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_MEGAHORN, MOVE_CRUSH_CLAW, MOVE_EARTHQUAKE, MOVE_HORN_DRILL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALAKAZAM_3] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_TRICK, MOVE_DISABLE, MOVE_PSYCHIC, MOVE_SKILL_SWAP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KANGASKHAN_3] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTABUZZ_3] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDERBOLT, MOVE_CROSS_CHOP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWBRO_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 170, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILTANK_3] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALTARIA_3] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_SING, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOKING_3] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_HORN_DRILL, MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SURF},
        .heldItem = ITEM_LEPPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGMAR_3] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_MEGA_KICK, MOVE_CROSS_CHOP, MOVE_IRON_TAIL, MOVE_COUNTER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRADILY_3] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SUBSTITUTE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARMALDO_3] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLDUCK_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CROSS_CHOP, MOVE_BLIZZARD, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAPIDASH_3] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_HYPNOSIS},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_3] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN, MOVE_SKILL_SWAP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AMPHAROS_3] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_MEGA_KICK, MOVE_IRON_TAIL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_BALISTAMON,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY, MOVE_SLASH},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HERACROSS_3] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_3] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOUNDOOM_3] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DONPHAN_3] = {
        .species = SPECIES_DIGMON,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SECRET_POWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAYDOL_3] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FISSURE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_IRON_TAIL, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_3] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHUCKLE_3] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TENTACRUEL_3] = {
        .species = SPECIES_MODBETAMON,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 170, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON2_3] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_PSYCHIC, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_3] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_MAGICAL_LEAF},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENUSAUR_3] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VAPOREON_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ACID_ARMOR, MOVE_BATON_PASS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAIL, MOVE_ENDURE, MOVE_OVERHEAT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEGANIUM_3] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_ENDURE, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_WISH, MOVE_REFLECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ATTRACT, MOVE_SHADOW_BALL},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AGGRON_3] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLAZIKEN_3] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ENDURE, MOVE_REVERSAL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WALREIN_3] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SHEER_COLD, MOVE_FISSURE, MOVE_SURF, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCEPTILE_3] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_LEAF_BLADE, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARIZARD_3] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_BITE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYPHLOSION_3] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_OVERHEAT, MOVE_ENDURE, MOVE_REVERSAL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_ANGEMON,
        .moves = {MOVE_AIR_CUTTER, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWAMPERT_3] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_EBIDRAMON,
        .moves = {MOVE_FLAIL, MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_CALM_MIND, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILOTIC_3] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_ATTRACT, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_AERIAL_ACE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_3] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_3] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLAKING_3] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUGTRIO_4] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FISSURE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEDICHAM_4] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_MEGA_KICK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MISDREAVUS_4] = {
        .species = SPECIES_BAKEMON,
        .moves = {MOVE_DESTINY_BOND, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FEAROW_4] = {
        .species = SPECIES_DONSHOUMON,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SKY_ATTACK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRANBULL_4] = {
        .species = SPECIES_ANKYLOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JYNX_4] = {
        .species = SPECIES_PSYCHEMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_FAKE_TEARS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUSCLOPS_4] = {
        .species = SPECIES_DEXDORUMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DODRIO_4] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_DRILL_PECK, MOVE_FACADE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MR_MIME_4] = {
        .species = SPECIES_PILLOMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LANTURN_4] = {
        .species = SPECIES_FILMON,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRELOOM_4] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SLUDGE_BOMB, MOVE_SPORE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FORRETRESS_4] = {
        .species = SPECIES_BALISTAMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WHISCASH_4] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_FISSURE, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_XATU_4] = {
        .species = SPECIES_ANGEMON,
        .moves = {MOVE_PSYCHIC, MOVE_DRILL_PECK, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKARMORY_4] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_COUNTER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAROWAK_4] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_MEGA_KICK},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAGSIRE_4] = {
        .species = SPECIES_ARCHELOMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_AMNESIA},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HARIYAMA_4] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FAKE_OUT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAICHU_4] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_PROTECT, MOVE_MEGA_KICK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DEWGONG_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SHEER_COLD, MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANECTRIC_4] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VICTREEBEL_4] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTRODE_4] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXPLOUD_4] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_OVERHEAT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHIFTRY_4] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_EXPLOSION, MOVE_GIGA_DRAIN, MOVE_MEGA_KICK, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLALIE_4] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUDICOLO_4] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYPNO_4] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLEM_4] = {
        .species = SPECIES_ARMADILMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYDON_4] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HORN_DRILL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALAKAZAM_4] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEZING_4] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FRUSTRATION, MOVE_SHADOW_BALL},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KANGASKHAN_4] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTABUZZ_4] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_MEGA_KICK, MOVE_CROSS_CHOP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWBRO_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILTANK_4] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_DOUBLE_TEAM, MOVE_MILK_DRINK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALTARIA_4] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SUPERPOWER, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOKING_4] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_THUNDER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGMAR_4] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_CROSS_CHOP, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRADILY_4] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_TOXIC, MOVE_INGRAIN, MOVE_MIRROR_COAT, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARMALDO_4] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLDUCK_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_CROSS_CHOP, MOVE_ICE_BEAM, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAPIDASH_4] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_DOUBLE_KICK},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BRICK_BREAK, MOVE_GIGA_DRAIN, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_4] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AMPHAROS_4] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE, MOVE_REFLECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_BALISTAMON,
        .moves = {MOVE_SILVER_WIND, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HERACROSS_4] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_REVERSAL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_4] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOUNDOOM_4] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DONPHAN_4] = {
        .species = SPECIES_DIGMON,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAYDOL_4] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILORD_4] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_FISSURE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_4] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHUCKLE_4] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_WRAP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STEELIX_4] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TENTACRUEL_4] = {
        .species = SPECIES_MODBETAMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AERODACTYL_4] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_BITE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON2_4] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_4] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EXPLOSION},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_DOUBLE_EDGE, MOVE_CRUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENUSAUR_4] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VAPOREON_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ACID_ARMOR, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BITE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLAREON_4] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEGANIUM_4] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_BODY_SLAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_ATTRACT, MOVE_CALM_MIND},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UMBREON_4] = {
        .species = SPECIES_DARKTYRMON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLASTOISE_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FERALIGATR_4] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AGGRON_4] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLAZIKEN_4] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WALREIN_4] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_SHEER_COLD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCEPTILE_4] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARIZARD_4] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYPHLOSION_4] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_ANGEMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWAMPERT_4] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_4] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGDRA_4] = {
        .species = SPECIES_EBIDRAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ICE_BEAM, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLISSEY_4] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_COUNTER, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILOTIC_4] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCANINE_4] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_4] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLAKING_4] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_YAWN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_PENGUINMON,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_AERIAL_ACE, MOVE_MUD_SLAP, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_METAL_CLAW, MOVE_CURSE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_PENGUINMON,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_BLIZZARD, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DRILL_PECK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_TOXIC, MOVE_DIVE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD, MOVE_BRICK_BREAK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_PENGUINMON,
        .moves = {MOVE_ICE_BEAM, MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_3] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAIKOU_3] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_ROAR},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENTEI_3] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_EDGE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUICUNE_3] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIROCK_3] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGISTEEL_3] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_AMNESIA, MOVE_COUNTER, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_3] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_PENGUINMON,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_REFLECT},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_4] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SAFEGUARD},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAIKOU_4] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_REFLECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENTEI_4] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_BITE, MOVE_DOUBLE_TEAM, MOVE_REFLECT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUICUNE_4] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BITE, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIROCK_4] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGICE_4] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_ICE_BEAM, MOVE_HAIL, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGISTEEL_4] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_4] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_MIST_BALL, MOVE_SHADOW_BALL, MOVE_CHARM, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_4] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_LUSTER_PURGE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_5] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_6] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_7] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_8] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_5] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_6] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_YAWN, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_7] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_8] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_5] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_6] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_7] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_8] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_FACADE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_5] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENDURE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 170, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_6] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_7] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_8] = {
        .species = SPECIES_FLAWIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_5] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_6] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_7] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_8] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_5] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_6] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_7] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEPPA_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_8] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_SING, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_5] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_6] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_7] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_8] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_RETURN, MOVE_SHADOW_BALL, MOVE_BELLY_DRUM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_5] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_6] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_HEADBUTT, MOVE_AERIAL_ACE, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_7] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_8] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_5] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_6] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_7] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_8] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIROCK_5] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIROCK_6] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGICE_5] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGICE_6] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGISTEEL_5] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGISTEEL_6] = {
        .species = SPECIES_DECKDRAMON,
        .moves = {MOVE_SUPERPOWER, MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_5] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_6] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_MIST_BALL, MOVE_DRAGON_CLAW, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_7] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_8] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_5] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_6] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_LUSTER_PURGE, MOVE_SHADOW_BALL, MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_7] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_DRAGON_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_8] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_ATTRACT, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_4] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_5] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_OUTRAGE, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_6] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_FLAMETHROWER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_7] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_ICE_BEAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_8] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_9] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_10] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_THUNDERBOLT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_3] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_4] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_CRUNCH, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_5] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_6] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_7] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_8] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_9] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_10] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARTICUNO_5] = {
        .species = SPECIES_PENGUINMON,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_AGILITY, MOVE_SWAGGER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARTICUNO_6] = {
        .species = SPECIES_PENGUINMON,
        .moves = {MOVE_ICE_BEAM, MOVE_AERIAL_ACE, MOVE_REFLECT, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_5] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_6] = {
        .species = SPECIES_DEMIDEVMON,
        .moves = {MOVE_THUNDER, MOVE_DRILL_PECK, MOVE_RAIN_DANCE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_5] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_SWAGGER, MOVE_FACADE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_6] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_STEEL_WING},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAIKOU_5] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DOUBLE_EDGE, MOVE_ROAR, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAIKOU_6] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_SUBSTITUTE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENTEI_5] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_DOUBLE_EDGE, MOVE_ENDURE, MOVE_REFLECT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENTEI_6] = {
        .species = SPECIES_FLADRAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_ROAR, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUICUNE_5] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_ICY_WIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUICUNE_6] = {
        .species = SPECIES_DOLPHMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    }
};
