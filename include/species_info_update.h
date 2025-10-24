#ifndef GUARD_SPECIES_INFO_UPDATE_H
#define GUARD_SPECIES_INFO_UPDATE_H

struct SpeciesInfoUpdate {
    u16 girlypopdexNum;
};

extern const struct SpeciesInfoUpdate gSpeciesInfoUpdates[];

// Used to convert from National Dex number to species ID
#define NATIONAL_TO_SPECIES(natDexNum) GetSpeciesFromNationalDex(natDexNum)

#endif // GUARD_SPECIES_INFO_UPDATE_H
