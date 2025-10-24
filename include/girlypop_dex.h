#ifndef GUARD_GIRLYPOP_DEX_H
#define GUARD_GIRLYPOP_DEX_H

#include "global.h"

// Define the PokedexListItem structure here since we need it in multiple files
struct PokedexListItem
{
    u16 dexNum;
    u16 seen:1;
    u16 owned:1;
};

// Define the GirlypopDexEntry structure
struct GirlypopDexEntry
{
    const u8 *name;        // Pointer to ROM string
    u16 species;          // Species ID (not National Dex number)
    u16 girlypopDexNum;   // Girlypop Dex number
};

// External declarations
extern const struct GirlypopDexEntry gGirlypopDexEntries[];
extern const u16 gGirlypopDexCount;

// Function declarations
void LoadGirlypopDex(void);
void SortPokedexByGirlypopOrder(struct PokedexListItem *pokedexList, u16 count);
u16 GetGirlypopDexNumber(u16 nationalDexNum);

#endif // GUARD_GIRLYPOP_DEX_H
