#include "global.h"
#include "girlypop_dex.h"
#include "text.h"
#include "pokemon.h"
#include "constants/species.h"

// Define trainer name strings
static const u8 sText_Toadette[] = _("Toadette");
static const u8 sText_SneeSnoo[] = _("SneeSnoo");
static const u8 sText_Tingyun[] = _("Tingyun");
// Add other trainer name strings here...

// Define the Girlypop Pokedex entries
const struct GirlypopDexEntry gGirlypopDexEntries[] = {
    { sText_Toadette, SPECIES_TURTWIG, 1 },
    { sText_SneeSnoo, SPECIES_SNOVER, 2 },
    { sText_Tingyun, SPECIES_MEGANIUM, 3 },
    // Add more entries here...
};

const u16 gGirlypopDexCount = ARRAY_COUNT(gGirlypopDexEntries);

u16 GetGirlypopDexNumber(u16 nationalDexNum)
{
    u16 i;
    u16 species = SpeciesToNationalPokedexNum(nationalDexNum);

    for (i = 0; i < gGirlypopDexCount; i++)
    {
        if (gGirlypopDexEntries[i].species == species)
            return gGirlypopDexEntries[i].girlypopDexNum;
    }
    return 0; // Not found in Girlypop dex
}

void SortPokedexByGirlypopOrder(struct PokedexListItem *pokedexList, u16 count)
{
    u16 i, j;
    struct PokedexListItem temp;

    // Sort based on Girlypop dex order
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            u16 num1 = GetGirlypopDexNumber(pokedexList[j].dexNum);
            u16 num2 = GetGirlypopDexNumber(pokedexList[j + 1].dexNum);

            // If not in Girlypop dex, put at end
            if (num1 == 0) num1 = 0xFFFF;
            if (num2 == 0) num2 = 0xFFFF;

            if (num1 > num2)
            {
                // Swap entries
                temp = pokedexList[j];
                pokedexList[j] = pokedexList[j + 1];
                pokedexList[j + 1] = temp;
            }
        }
    }
}
