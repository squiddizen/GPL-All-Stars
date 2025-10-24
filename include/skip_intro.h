#ifndef GUARD_SKIP_INTRO_H
#define GUARD_SKIP_INTRO_H

#include "debug.h"
#include "event_data.h"
#include "constants/flags.h"
#include "constants/vars.h"
#include "pokedex.h"
#include "string_util.h"
#include "text.h"

// If debug skip intro is enabled, set all needed flags to skip intro
// and set up the national dex
static inline void HandleDebugFlags(void) {
    #if DEBUG_SKIP_INTRO == TRUE
        // Set player defaults 
        gSaveBlock2Ptr->playerGender = MALE;
        StringCopy(gSaveBlock2Ptr->playerName, COMPOUND_STRING("DEBUG")); // Set default name
        
        // Enable basic functionality and story progress
        FlagSet(FLAG_SYS_POKEMON_GET);
        FlagSet(FLAG_RESCUED_BIRCH);        // Rescued Birch
        FlagSet(FLAG_DEFEATED_RIVAL_ROUTE103); // Defeated rival
        
        // Set story progression states
        VarSet(VAR_BIRCH_LAB_STATE, 5);  // Received Pokedex (state 5 means received pokedex)
        VarSet(VAR_LITTLEROOT_INTRO_STATE, 4); // Skip intro cutscenes
        VarSet(VAR_BIRCH_STATE, 3);  // Professor Birch finished intro
        VarSet(VAR_ROUTE101_STATE, 3);    // Completed Route 101
        
        // Mark that we've started the adventure and have Pokemon
        FlagSet(FLAG_SYS_POKEMON_GET);
        FlagSet(FLAG_RESCUED_BIRCH);
        FlagSet(FLAG_ADVENTURE_STARTED);
        
        // Enable and initialize Pokedex - order matters here
        FlagSet(FLAG_SYS_POKEDEX_GET);
        FlagSet(FLAG_RECEIVED_POKEDEX_FROM_BIRCH);
        
        // Set story progression vars
        VarSet(VAR_BIRCH_LAB_STATE, 5);  // Received Pokedex
        VarSet(VAR_LITTLEROOT_INTRO_STATE, 4); // Skip intro cutscenes
        VarSet(VAR_BIRCH_STATE, 3);  // Professor Birch finished intro
        VarSet(VAR_ROUTE101_STATE, 3);    // Completed Route 101
        
        // Initialize Pokedex struct - do this after all other flags
        gSaveBlock2Ptr->pokedex.mode = DEX_MODE_HOENN;
        gSaveBlock2Ptr->pokedex.order = 0;
        gSaveBlock2Ptr->pokedex.nationalMagic = 0;
        gSaveBlock2Ptr->pokedex.unknown2 = 0;
        ResetPokedexScrollPositions();
        
        // Set up Pokedex view state for Hoenn first
        gSaveBlock2Ptr->pokedex.mode = DEX_MODE_HOENN;
        gSaveBlock2Ptr->pokedex.order = 0;
        gSaveBlock2Ptr->pokedex.unknown2 = 0;
        ResetPokedexScrollPositions();
        
        // Enable National Dex properly
        gSaveBlock2Ptr->pokedex.nationalMagic = 0xDA;  // Magic number for National Dex
        VarSet(VAR_NATIONAL_DEX, 0x302);  // Required value for National Dex
        FlagSet(FLAG_SYS_NATIONAL_DEX);   // National Dex flag

        // Now enable National dex which will update the above values properly
        EnableNationalPokedex(); // This sets additional flags and vars
    #endif
    
    #if DEBUG_COMPLETE_POKEDEX == TRUE
        // Make sure National Dex is enabled
        if (!IsNationalPokedexEnabled())
            EnableNationalPokedex();

        // Mark all pokemon as seen and caught
        u16 i;
        for (i = 0; i < NATIONAL_DEX_COUNT; i++) {
            u16 dexNum = i + 1;
            GetSetPokedexFlag(dexNum, FLAG_SET_SEEN);
            GetSetPokedexFlag(dexNum, FLAG_SET_CAUGHT);
        }
        
        // Make sure the Pokedex knows it has entries
        if (!IsNationalPokedexEnabled())
            gSaveBlock2Ptr->pokedex.mode = DEX_MODE_HOENN;
        else
            gSaveBlock2Ptr->pokedex.mode = DEX_MODE_NATIONAL;
            
        ResetPokedexScrollPositions();
    #endif
}

#endif /* GUARD_SKIP_INTRO_H */