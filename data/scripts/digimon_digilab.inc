Digimon_EventScript_DigiLab::
	lockall
Digimon_EventScript_DigiLabMenu:
	closemessage
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Digimon_Text_ScanMenu, Digimon_Text_ReconstructMenu, Digimon_Text_StorageMenu, Digimon_Text_PartnerMenu, Digimon_Text_FieldGuideMenu, Digimon_Text_ExitMenu
	switch VAR_RESULT
	case 0, Digimon_EventScript_ViewScan
	case 1, Digimon_EventScript_Reconstruct
	case 2, Digimon_EventScript_Storage
	case 3, Digimon_EventScript_Partner
	case 4, Digimon_EventScript_FieldGuide
	releaseall
	end

Digimon_EventScript_ViewScan:
	setvar VAR_0x8007, 1
	goto Digimon_EventScript_GuideStart

Digimon_EventScript_Reconstruct:
	setvar VAR_0x8007, 2
	goto Digimon_EventScript_GuideStart

Digimon_EventScript_Storage:
	special ShowPokemonStorageSystemPC
	goto Digimon_EventScript_DigiLabMenu

Digimon_EventScript_Partner:
	specialvar VAR_RESULT, Digimon_PartnerInfo
	switch VAR_RESULT
	case 1, Digimon_EventScript_PartnerParty
	case 2, Digimon_EventScript_PartnerStorage
	case 3, Digimon_EventScript_PartnerMissing
	msgbox Digimon_Text_RegisterPartner, MSGBOX_YESNO
	goto_if_ne VAR_RESULT, YES, Digimon_EventScript_DigiLabMenu
	specialvar VAR_RESULT, Digimon_RegisterLeadPartner
	goto_if_eq VAR_RESULT, TRUE, Digimon_EventScript_Partner
	msgbox Digimon_Text_RegisterFailed, MSGBOX_DEFAULT
	goto Digimon_EventScript_DigiLabMenu

Digimon_EventScript_PartnerParty:
	msgbox Digimon_Text_PartnerParty, MSGBOX_DEFAULT
	goto Digimon_EventScript_DigiLabMenu

Digimon_EventScript_PartnerStorage:
	msgbox Digimon_Text_PartnerStorage, MSGBOX_DEFAULT
	goto Digimon_EventScript_DigiLabMenu

Digimon_EventScript_PartnerMissing:
	msgbox Digimon_Text_PartnerMissing, MSGBOX_DEFAULT
	goto Digimon_EventScript_DigiLabMenu

Digimon_EventScript_FieldGuide:
	setvar VAR_0x8007, 0
	goto Digimon_EventScript_GuideStart

	.include "data/scripts/digimon_guide.inc"

Digimon_Text_ScanMenu:
	.string "Scan Data$"
Digimon_Text_ReconstructMenu:
	.string "Reconstruct$"
Digimon_Text_StorageMenu:
	.string "Storage$"
Digimon_Text_PartnerMenu:
	.string "Partner$"
Digimon_Text_ExitMenu:
	.string "Exit$"
Digimon_Text_FieldGuideMenu:
	.string "Field Guide$"
Digimon_Text_RegisterPartner:
	.string "No Partner is registered.\p"
	.string "Place a Rookie first in your party.\n"
	.string "Register that Digimon as Partner?$"
Digimon_Text_RegisterFailed:
	.string "Place a hatched starter Rookie first\n"
	.string "in your party, then try again.$"
Digimon_Text_PartnerParty:
	.string "PARTNER: {STR_VAR_1}\n"
	.string "Your Partner is in your party.$"
Digimon_Text_PartnerStorage:
	.string "PARTNER: {STR_VAR_1}\n"
	.string "Your Partner is in DigiLab storage.$"
Digimon_Text_PartnerMissing:
	.string "Your registered Partner is absent.\n"
	.string "Check any trades or the Day Care.$"
Digimon_Text_FieldGuideEntry:
	.string "{STR_VAR_1}\n"
	.string "Attribute: {STR_VAR_2}\p"
	.string "Element: {STR_VAR_3}$"
