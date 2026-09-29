#ifndef GUARD_DIGIMON_SCAN_DATA_H
#define GUARD_DIGIMON_SCAN_DATA_H

#include "constants/species.h"

#define DIGIMON_SCAN_COMPLETE 100
#define DIGIMON_SCAN_STEP     20

u8 Digimon_GetScanPercent(enum Species species);
void Digimon_RecordScan(enum Species species);
void Digimon_RecordBattleScan(enum Species species, u32 battleFlags, u8 outcome);
u32 Digimon_TryReconstructAgumon(void);
bool8 Digimon_ReconstructAgumon(void);
u32 Digimon_DigiLab(void);
bool32 Digimon_CanScan(enum Species species);
u8 Digimon_GetWildScanPercent(enum Species species);
void Digimon_RecordWildScan(enum Species species);
bool32 Digimon_IsReconstructed(enum Species species);
u32 Digimon_TryReconstruct(enum Species species);
u8 Digimon_ReconstructionLevel(enum Species species);

#endif // GUARD_DIGIMON_SCAN_DATA_H
