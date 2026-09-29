#ifndef GUARD_DIGIMON_PARTNER_H
#define GUARD_DIGIMON_PARTNER_H

#include "constants/species.h"

enum Species Digimon_GetPartner(void);
struct Pokemon;
struct BoxPokemon;
bool8 Digimon_RegisterPartner(struct Pokemon *mon);
bool8 Digimon_IsPartnerMon(struct BoxPokemon *mon);
u32 Digimon_PartnerInfo(void);
u32 Digimon_RegisterLeadPartner(void);

#endif // GUARD_DIGIMON_PARTNER_H
