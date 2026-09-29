"""Curated, distinct Digimon; source spellings are kept separate from UI names."""
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[2]
UPSTREAM = Path(__file__).resolve().parent / "upstream"
REVISION = "75a0c3642ee14311f08d41db23da3ddf52562577"
URL = f"https://raw.githubusercontent.com/Luna3Step/DigimonEmerald/{REVISION}"
STARTERS = "AGUMON GABUMON BIYOMON TENTOMON PALMON GOMAMON PATAMON SALAMON".split()
ROOKIES = """
ANGORAMON ARMADILMON ARURAUMON BAKOMON BEARMON BETAMON BOKOMON
BULUCOMON BURGERMON CANDLEMON CHIKURIMON TYUTYUMON CHUUMON COMMDRAMON
CORONAMON CRABMON CUTEMON DAMEMON DEMIDEVMON DOKUNEMON DONDOKOMON DORUMON
DRACMON DRACOMON EKAKIMON ELECMON ESPIMON FALCOMON FANBEEMON FLAMEMON
FLORAMON GAMMAMON GAOMON GAOSSMON GAZIMON GHOSTMON GIZAMON GIZUMON
GOBLIMON GOTSUMON GUILMON GUMDRAMON HACKMON HAGURUMON HAWKMON HERISSMON
HYOKOMON IGNITEMON IMPMON JAZAMON JELLYMON JUNKMON KAMEMON KERAMON
KOKUWAMON KOTEMON KUDAMON KUNEMON LABRAMON LALAMON LIOLLMON LOOGAMON
LOPMON LUDOMON LUNAMON LUXMON MODBETAMON MONITAMON MONMON MONODRAMON
MORPHOMON MUCHOMON MUSHROOMON NEEMON OTAMAMON PAWNMON PENGUINMON
PHASCOMON PILLOMON POMUMON PSYCHEMON PULSEMON RENAMON RYUDAMON SANGOMON
SHAMANMON SHOUTMON SOLARMON SOUNBRDMON SPADAMON SPARROWMON STRABIMON
SUNARZAMON SWIMMON SYAKOMON TAPIRMON TERRIERMON TINKERMON TOYAGUMON
TSUKAIMON VEEMON VEMMON VORVOMON WORMMON ZENIMON ZUBAMON
""".split()
CHAMPIONS = """
AEGIOMON AGUNIMON AIRDRAMON AKATORIMON ALLOMON BAKEMON BALISTAMON
BALUCHIMON ANGELAMON ARESDRAMON ATAMADEMON ANGEMON ANKYLOMON ARCHELOMON
CHAMBLEMON CHAMELEMON BIRDRAMON DONSHOUMON DEXDORUMON DIATRYMON CLOCKMON
DEPTHMON DEPUTYMON FLYBEEMON DEVIDRAMON DEVIMON DOGGYMON DOKUGUMON
CHOUFLYMON CENTARUMON CYCLONEMON BETGAMAMON BOARMON BOMNANIMON CHRYSALMON
CITRAMON FANGMON FILMON DARCMON EYESMON DECKDRAMON DELTAMON COELAMON
BOOGIEMON BLIMPMON DARLIZAMON DARMAILMON EXVEEMON DRIMOGEMON EBIDRAMON
BULLMON AURUMON AXEMON BABOONMON BURAIMON ELEPHANMON BAOHUCKMON BAROMON
FIRAMON FLADRAMON FLAWIZAMON EXERMON DORUGAMON DORULUMON DARKTYRMON
FLARIZAMON DOLPHMON BULKMON DIGMON DINOHYUMON DOBERMON APEMON AQUILAMON
FLYMON FRIGIMON FROGMON FUGAMON GANEMON GAOGAMON GARGOMON GARGOYLMON
GARURUMON GEKOMON GEOGREYMON GATOMON GEREMON GESOMON
""".split()
DISPLAY = {
    "ARMADILMON": "Armadillomon", "COMMDRAMON": "Commandramon",
    "DEMIDEVMON": "DemiDevimon", "SOUNBRDMON": "Soundbirdmon",
    "MODBETAMON": "ModokiBtamon", "DARKTYRMON": "DarkTyranmon",
    "FLADRAMON": "Flamedramon", "GEOGREYMON": "GeoGreymon",
    "EXVEEMON": "ExVeemon", "DEXDORUMON": "DexDorugamon",
}
SLUG = {"LOPMON": "lopmon"}
DONOR_PATH = {"LOPMON": "lopmon/a/front.png", "DOLPHMON": "dolphmon/front_normal_form.png"}


def source_entries():
    text = (UPSTREAM / "species_info.h").read_text()
    return dict(re.findall(r"\[SPECIES_(\w+)\]\s*=\s*(?:/[^\n]*\n\s*)?\{(.*?)\n    \}", text, re.S))


def field(entry, name):
    match = re.search(r"\." + name + r"\s*=\s*([^,\n]+)", entry)
    if not match:
        raise ValueError(f"Missing {name}")
    return match[1].strip()


def roster():
    entries = source_entries()
    result = []
    for key in ROOKIES + CHAMPIONS:
        entry = entries[key]
        result.append({
            "key": key, "name": DISPLAY.get(key, key.capitalize()),
            "slug": SLUG.get(key, key.lower()),
            "donor_path": DONOR_PATH.get(key),
            "stage": "Rookie" if key in ROOKIES else "Champion",
            "types": [field(entry, "type1"), field(entry, "type2")],
            "attribute": field(entry, "type3").removeprefix("TYPE_").title(),
            "stats": {f: int(field(entry, f)) for f in (
                "baseHP", "baseAttack", "baseDefense", "baseSpeed",
                "baseSpAttack", "baseSpDefense")},
            "catchRate": int(field(entry, "catchRate")),
            "expYield": int(field(entry, "expYield")),
            "growthRate": field(entry, "growthRate"),
            "bodyColor": field(entry, "bodyColor"),
            "abilities": re.search(r"\.abilities\s*=\s*\{([^}]+)", entry)[1].strip(),
        })
    assert len(result) >= 150 and len({r["key"] for r in result}) == len(result)
    assert not set(STARTERS) & {r["key"] for r in result}
    assert all(len(r["name"]) <= 12 for r in result)
    return result
