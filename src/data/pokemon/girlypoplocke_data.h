#ifndef GUARD_GIRLYPOPLOCKE_DATA_H
#define GUARD_GIRLYPOPLOCKE_DATA_H

#include "constants/species.h"
#include "gba/defines.h"

// Structure to hold Girlypoplocke Pokemon data
struct GirlypoplockeEntry
{
    u16 speciesId;
    const u8 *nickname;
    u8 categoryId;
};

// Girlypoplocke Pokemon categories
#define GIRLYPOPLOCKE_SEASON_3   0
#define GIRLYPOPLOCKE_SEASON_4   1
#define GIRLYPOPLOCKE_SEASON_5   2
#define GIRLYPOPLOCKE_SEASON_6   3
#define GIRLYPOPLOCKE_SEASON_7   4
#define GIRLYPOPLOCKE_VETERANS   5
#define GIRLYPOPLOCKE_LEGENDS    6
#define GIRLYPOPLOCKE_CATEGORY_COUNT 7

// Category names
static const u8 sGirlypoplockeCategoryNames[][20] = {
    [GIRLYPOPLOCKE_SEASON_3] = "Season 3",
    [GIRLYPOPLOCKE_SEASON_4] = "Season 4",
    [GIRLYPOPLOCKE_SEASON_5] = "Season 5",
    [GIRLYPOPLOCKE_SEASON_6] = "Season 6",
    [GIRLYPOPLOCKE_SEASON_7] = "Season 7",
    [GIRLYPOPLOCKE_VETERANS] = "Veterans",
    [GIRLYPOPLOCKE_LEGENDS]  = "Legends",
};

// Girlypoplocke Pokemon list
static const struct GirlypoplockeEntry sGirlypoplockeList[] = {
    // Season 3
    {SPECIES_SHROOMISH,     (const u8 *)"Toadette",      GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_BRELOOM,       (const u8 *)"Toadette",      GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_TREECKO,       (const u8 *)"Koko",          GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_GROVYLE,       (const u8 *)"Koko",          GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_SCEPTILE,      (const u8 *)"Koko",          GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_SKITTY,        (const u8 *)"Blush",         GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_DELCATTY,      (const u8 *)"Blush",         GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_POOCHYENA,     (const u8 *)"Missy",         GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_MIGHTYENA,     (const u8 *)"Missy",         GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_WHISMUR,       (const u8 *)"Tiny",          GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_LOUDRED,       (const u8 *)"Tiny",          GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_EXPLOUD,       (const u8 *)"Tiny",          GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_LOTAD,         (const u8 *)"Toad",          GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_LOMBRE,        (const u8 *)"Toad",          GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_LUDICOLO,      (const u8 *)"Toad",          GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_AZURILL,       (const u8 *)"Squishy",       GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_MARILL,        (const u8 *)"Squishy",       GIRLYPOPLOCKE_SEASON_3},
    {SPECIES_AZUMARILL,     (const u8 *)"Squishy",       GIRLYPOPLOCKE_SEASON_3},
    
    // Season 4
    {SPECIES_PIPLUP,        (const u8 *)"LinguinePR",    GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_PRINPLUP,      (const u8 *)"LinguinePR",    GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_EMPOLEON,      (const u8 *)"LinguinePR",    GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_WURMPLE,       (const u8 *)"Chanel",        GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_SILCOON,       (const u8 *)"Chanel",        GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_BEAUTIFLY,     (const u8 *)"Chanel",        GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_BIDOOF,        (const u8 *)"Bidookie",      GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_BIBAREL,       (const u8 *)"Bidookie",      GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_BUNEARY,       (const u8 *)"So Julia",      GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_LOPUNNY,       (const u8 *)"So Julia",      GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_PACHIRISU,     (const u8 *)"xX Brat Xx",    GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_BUDEW,         (const u8 *)"Nahida",        GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_ROSELIA,       (const u8 *)"Nahida",        GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_ROSERADE,      (const u8 *)"Nahida",        GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_FINNEON,       (const u8 *)"Jinsoul",       GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_LUMINEON,      (const u8 *)"Jinsoul",       GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_PONYTA,        (const u8 *)"Chappel",       GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_RAPIDASH,      (const u8 *)"Chappel",       GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_EEVEE,         (const u8 *)"Eevee",         GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_GLACEON,       (const u8 *)"Tyra Bangs",    GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_CLEFFA,        (const u8 *)"USAGI",         GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_CLEFAIRY,      (const u8 *)"USAGI",         GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_CLEFABLE,      (const u8 *)"USAGI",         GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_HOUNDOUR,      (const u8 *)"Hellina",       GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_HOUNDOOM,      (const u8 *)"Hellina",       GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_SHELLOS,       (const u8 *)"Jeli P Bob",    GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_GASTRODON,     (const u8 *)"Jeli P Bob",    GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_MISDREAVUS,    (const u8 *)"Montoya",       GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_MISMAGIUS,     (const u8 *)"Montoya",       GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_SWABLU,        (const u8 *)"Wendy Dae",     GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_ALTARIA,       (const u8 *)"Wendy Dae",     GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_SNORUNT,       (const u8 *)"Kamalass",      GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_FROSLASS,      (const u8 *)"Kamalass",      GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_GIBLE,         (const u8 *)"Niblette",      GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_GABITE,        (const u8 *)"Niblette",      GIRLYPOPLOCKE_SEASON_4},
    {SPECIES_GARCHOMP,      (const u8 *)"Niblette",      GIRLYPOPLOCKE_SEASON_4},
    
    // Season 5
    {SPECIES_PANPOUR,       (const u8 *)"SneeSnoo",      GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_SIMIPOUR,      (const u8 *)"SneeSnoo",      GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_FENNEKIN,      (const u8 *)"Delphaba",      GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_BRAIXEN,       (const u8 *)"Delphaba",      GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_DELPHOX,       (const u8 *)"Delphaba",      GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_SCATTERBUG,    (const u8 *)"Vivienne W.",   GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_SPEWPA,        (const u8 *)"Vivienne W.",   GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_VIVILLON,      (const u8 *)"Vivienne W.",   GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_LEDYBA,        (const u8 *)"LedyBaBa",      GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_LEDIAN,        (const u8 *)"LedyBaBa",      GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_BUNNELBY,      (const u8 *)"TRIX",          GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_DIGGERSBY,     (const u8 *)"TRIX",          GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_BURMY,         (const u8 *)"Bore Worm",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_MOTHIM,        (const u8 *)"Bore Worm",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_HOPPIP,        (const u8 *)"Eden",          GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_SKIPLOOM,      (const u8 *)"Eden",          GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_JUMPLUFF,      (const u8 *)"Eden",          GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_SNUBBULL,      (const u8 *)"Bambalina",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_GRANBULL,      (const u8 *)"Bambalina",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_FURFROU,       (const u8 *)"Paris",         GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_PLUSLE,        (const u8 *)"Tokyo Lights",  GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_PLUSLE,        (const u8 *)"Kyoto Nights",  GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_DEDENNE,       (const u8 *)"Hamtaro",       GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_BUDEW,         (const u8 *)"Nahid'eux",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_ROSELIA,       (const u8 *)"Nahid'eux",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_ROSERADE,      (const u8 *)"Nahid'eux",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_FLABEBE,       (const u8 *)"Poppy",         GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_FLOETTE,       (const u8 *)"Poppy",         GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_FLORGES,       (const u8 *)"Poppy",         GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_MILTANK,       (const u8 *)"Joanne",        GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_INKAY,         (const u8 *)"Kali Mari",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_MALAMAR,       (const u8 *)"Kali Mari",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_SYLVEON,       (const u8 *)"Glindeon",      GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_SWIRLIX,       (const u8 *)"Lebkuchen",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_SLURPUFF,      (const u8 *)"Lebkuchen",     GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_ABSOL,         (const u8 *)"xXD4RK4NGLXx",  GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_WOOBAT,        (const u8 *)"Rouge",         GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_SWOOBAT,       (const u8 *)"Rouge",         GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_LAPRAS,        (const u8 *)"Furina Lapis",  GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_KLEFKI,        (const u8 *)"KeyKeyPalmer",  GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_AMAURA,        (const u8 *)"Rinka",         GIRLYPOPLOCKE_SEASON_5},
    {SPECIES_AURORUS,       (const u8 *)"Rinka",         GIRLYPOPLOCKE_SEASON_5},
    
    // Season 6
    {SPECIES_VULPIX,        (const u8 *)"Tingyun",       GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_NINETALES,     (const u8 *)"Tingyun",       GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_TORCHIC,       (const u8 *)"Thee Chic",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_COMBUSKEN,     (const u8 *)"Thee Chic",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_BLAZIKEN,      (const u8 *)"Thee Chic",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_WURMPLE,       (const u8 *)"Yves",          GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_CASCOON,       (const u8 *)"Yves",          GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_DUSTOX,        (const u8 *)"Yves",          GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_SENTRET,       (const u8 *)"Brioche",       GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_FURRET,        (const u8 *)"Brioche",       GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_ODDISH,        (const u8 *)"Just Jade",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_GLOOM,         (const u8 *)"Just Jade",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_BELLOSSOM,     (const u8 *)"Just Jade",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_CORSOLA,       (const u8 *)"Daphne Rose",   GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_CLAMPERL,      (const u8 *)"Shimmer",       GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_GOREBYSS,      (const u8 *)"Shimmer",       GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_MAROWAK_ALOLA,    (const u8 *)"Morticia",      GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_SPINDA,        (const u8 *)"Britney Jean",  GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_SMOOCHUM,      (const u8 *)"Roman",         GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_JYNX,          (const u8 *)"Roman",         GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_IGGLYBUFF,     (const u8 *)"Botox",         GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_JIGGLYPUFF,    (const u8 *)"Botox",         GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_WIGGLYTUFF,    (const u8 *)"Botox",         GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_TINKATINK,     (const u8 *)"Amy Rose",      GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_TINKATUFF,     (const u8 *)"Amy Rose",      GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_TINKATON,      (const u8 *)"Amy Rose",      GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_GIRAFARIG,     (const u8 *)"Gnarly",        GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_FARIGIRAF,     (const u8 *)"Gnarly",        GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_CHINGLING,     (const u8 *)"B.B. Bells",    GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_CHIMECHO,      (const u8 *)"B.B. Bells",    GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_MISDREAVUS,    (const u8 *)"Agatha",        GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_MISMAGIUS,     (const u8 *)"Agatha",        GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_ELGYEM,        (const u8 *)"Elgyem",        GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_BEHEEYEM,      (const u8 *)"Beeheeyem",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_PORYGON,       (const u8 *)"VRTL ANGL",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_PORYGON2,      (const u8 *)"VRTL ANGL",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_PORYGON_Z,     (const u8 *)"VRTL ANGL",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_LILEEP,       (const u8 *)"Lilly Root",    GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_CRADILY,       (const u8 *)"Lilly Root",    GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_MAWILE,        (const u8 *)"Osaka",         GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_MAWILE,        (const u8 *)"Shebuya",       GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_APPLIN,        (const u8 *)"Pink Lady",     GIRLYPOPLOCKE_SEASON_6},
    {SPECIES_APPLETUN,      (const u8 *)"Pink Lady",     GIRLYPOPLOCKE_SEASON_6},
    
    // Season 7
    {SPECIES_POPPLIO,       (const u8 *)"Calypsa",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_BRIONNE,       (const u8 *)"Calypsa",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_PRIMARINA,     (const u8 *)"Calypsa",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_CUTIEFLY,      (const u8 *)"Labugbu",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_RIBOMBEE,      (const u8 *)"Labugbu",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_PIKIPEK,       (const u8 *)"Jet2",          GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_TRUMBEAK,      (const u8 *)"Jet2",          GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_TOUCANNON,     (const u8 *)"Jet2",          GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_PICHU,         (const u8 *)"Pancake",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_PIKACHU,       (const u8 *)"Pancake",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_RAICHU_ALOLA, (const u8 *)"Pancake",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_MUDBRAY,       (const u8 *)"Reneigh",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_MUDSDALE,      (const u8 *)"Reneigh",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_WINGULL,       (const u8 *)"Pleeko",        GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_PELIPPER,      (const u8 *)"Pelipper",      GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_STUFFUL,       (const u8 *)"Plushii",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_BEWEAR,        (const u8 *)"Plushii",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_GOLDEEN,       (const u8 *)"Chihiro",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_SEAKING,       (const u8 *)"Chihiro",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_BRUXISH,       (const u8 *)"Face Tuna",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_MINCCINO,      (const u8 *)"Mr. Fluff",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_CINCCINO,      (const u8 *)"Mr. Fluff",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_VULPIX_ALOLA, (const u8 *)"Fugue",         GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_NINETALES_ALOLA, (const u8 *)"Fugue",      GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_MIME_JR,       (const u8 *)"Clown Lee",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_MR_MIME,       (const u8 *)"Clown Lee",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_STARYU,        (const u8 *)"Emma Star",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_STARMIE,       (const u8 *)"Emma Star",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_MEOWTH_ALOLA, (const u8 *)"Mittenz",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_PERSIAN_ALOLA,(const u8 *)"Mittens",       GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_PYUKUMUKU,     (const u8 *)"Jeli Q Cumber", GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_DITTO,         (const u8 *)"Pleigh Doe",    GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_SALANDIT,      (const u8 *)"Vertoxika",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_SALAZZLE,      (const u8 *)"Vertoxika",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_BOUNSWEET,     (const u8 *)"What Eva",      GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_STEENEE,       (const u8 *)"What Eva",      GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_TSAREENA,      (const u8 *)"What Eva",      GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_FOMANTIS,      (const u8 *)"Hana Lulu",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_LURANTIS,      (const u8 *)"Hana Lulu",     GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_ORICORIO,      (const u8 *)"Lemonsalsa",    GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_MINIOR_CORE_YELLOW,  (const u8 *)"Hope",   GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_MINIOR_RED,    (const u8 *)"Starburst", GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_NOIBAT,        (const u8 *)"BB Fangz",      GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_NOIVERN,       (const u8 *)"BB Fangz",      GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_ZORUA,         (const u8 *)"Facade",        GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_ZOROARK,       (const u8 *)"Facade",        GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_CASTFORM,      (const u8 *)"Janna",         GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_MIMIKYU,       (const u8 *)"Burlap Doll",   GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_COSMOG,        (const u8 *)"Miss Bag",      GIRLYPOPLOCKE_SEASON_7},
    {SPECIES_COSMOEM,       (const u8 *)"Miss Bag",      GIRLYPOPLOCKE_SEASON_7},
    
    // Veterans
    {SPECIES_CHIKORITA,     (const u8 *)"Chic P.",       GIRLYPOPLOCKE_VETERANS},
    {SPECIES_BAYLEEF,       (const u8 *)"Chic P.",       GIRLYPOPLOCKE_VETERANS},
    {SPECIES_MEGANIUM,      (const u8 *)"Chic P.",       GIRLYPOPLOCKE_VETERANS},
    {SPECIES_WEEDLE,        (const u8 *)"ITZY",          GIRLYPOPLOCKE_VETERANS},
    {SPECIES_KAKUNA,        (const u8 *)"ITZY",          GIRLYPOPLOCKE_VETERANS},
    {SPECIES_BEEDRILL,      (const u8 *)"ITZY",          GIRLYPOPLOCKE_VETERANS},
    {SPECIES_NIDORAN_F,     (const u8 *)"Bri",           GIRLYPOPLOCKE_VETERANS},
    {SPECIES_NIDORINA,      (const u8 *)"Bri",           GIRLYPOPLOCKE_VETERANS},
    {SPECIES_NIDOQUEEN,     (const u8 *)"Bri",           GIRLYPOPLOCKE_VETERANS},
    {SPECIES_ZUBAT,         (const u8 *)"No-ehl",        GIRLYPOPLOCKE_VETERANS},
    {SPECIES_GOLBAT,        (const u8 *)"No-ehl",        GIRLYPOPLOCKE_VETERANS},
    {SPECIES_CROBAT,        (const u8 *)"No-ehl",        GIRLYPOPLOCKE_VETERANS},
    {SPECIES_MAREEP,        (const u8 *)"Shinxz",        GIRLYPOPLOCKE_VETERANS},
    {SPECIES_FLAAFFY,       (const u8 *)"Shinxz",        GIRLYPOPLOCKE_VETERANS},
    {SPECIES_AMPHAROS,      (const u8 *)"Shinxz",        GIRLYPOPLOCKE_VETERANS},
    {SPECIES_MAREEP,        (const u8 *)"CashmereDoll",  GIRLYPOPLOCKE_VETERANS},
    {SPECIES_FLAAFFY,       (const u8 *)"CashmereDoll",  GIRLYPOPLOCKE_VETERANS},
    {SPECIES_AMPHAROS,      (const u8 *)"CashmereDoll",  GIRLYPOPLOCKE_VETERANS},
    {SPECIES_TOGEPI,        (const u8 *)"Josue",         GIRLYPOPLOCKE_VETERANS},
    {SPECIES_TOGETIC,       (const u8 *)"Josue",         GIRLYPOPLOCKE_VETERANS},
    {SPECIES_TOGEKISS,      (const u8 *)"Josue",         GIRLYPOPLOCKE_VETERANS},
    
    // Legends
    {SPECIES_HAPPINY,       (const u8 *)"B1NC0R",        GIRLYPOPLOCKE_LEGENDS},
    {SPECIES_CHANSEY,       (const u8 *)"B1NC0R",        GIRLYPOPLOCKE_LEGENDS},
    {SPECIES_BLISSEY,       (const u8 *)"B1NC0R",        GIRLYPOPLOCKE_LEGENDS},
    {SPECIES_REGIROCK,      (const u8 *)"Regirock",      GIRLYPOPLOCKE_LEGENDS},
    {SPECIES_GARDEVOIR,     (const u8 *)"Mio",           GIRLYPOPLOCKE_LEGENDS},
};

#define GIRLYPOPLOCKE_COUNT ARRAY_COUNT(sGirlypoplockeList)

// Function to get category name from category ID
static UNUSED const u8 *GetGirlypoplockeCategoryName(u8 categoryId)
{
    if (categoryId < GIRLYPOPLOCKE_CATEGORY_COUNT)
        return sGirlypoplockeCategoryNames[categoryId];
    return NULL;
}

// Function to check if a species is in the Girlypoplocke list
static UNUSED bool8 IsGirlypoplockeSpecies(u16 species)
{
    u32 i;
    for (i = 0; i < GIRLYPOPLOCKE_COUNT; i++)
    {
        if (sGirlypoplockeList[i].speciesId == species)
            return TRUE;
    }
    return FALSE;
}

// Function to get the Girlypoplocke entry for a species (returns first match)
static UNUSED const struct GirlypoplockeEntry *GetGirlypoplockeEntry(u16 species)
{
    u32 i;
    for (i = 0; i < GIRLYPOPLOCKE_COUNT; i++)
    {
        if (sGirlypoplockeList[i].speciesId == species)
            return &sGirlypoplockeList[i];
    }
    return NULL;
}

// Function to get all Girlypoplocke entries for a species (for multiple nicknames)
static UNUSED u8 GetGirlypoplockeEntriesForSpecies(u16 species, const struct GirlypoplockeEntry **entries, u8 maxEntries)
{
    u32 i;
    u8 count = 0;
    
    for (i = 0; i < GIRLYPOPLOCKE_COUNT && count < maxEntries; i++)
    {
        if (sGirlypoplockeList[i].speciesId == species)
        {
            entries[count] = &sGirlypoplockeList[i];
            count++;
        }
    }
    return count;
}

#endif // GUARD_GIRLYPOPLOCKE_DATA_H
