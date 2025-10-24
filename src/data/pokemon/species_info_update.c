#include "global.h"
#include "species_info_update.h"
#include "constants/species.h"

// This array contains the updates for each species's girlypopdexNum.
// Species not listed here will have girlypopdexNum = 0, meaning they won't appear in the Girlypopdex.
const struct SpeciesInfoUpdate gSpeciesInfoUpdates[] = {
    // NOTE: This array will be populated by the update_girlypopdex.py script
    // Run the script to generate the actual entries
    // The format will be:
    // [NATIONAL_TO_SPECIES(SPECIES_NAME)] = { .girlypopdexNum = GIRLYPOPDEX_NUM }
};
