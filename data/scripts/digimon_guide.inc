@ VAR_8004: guide index; 8005: branch; 8006: preview/commit;
@ VAR_8007: guide/scan/reconstruct mode; 8009: portrait species.
Digimon_EventScript_GuideStart:
	setvar VAR_0x8004, 0
Digimon_EventScript_GuideList:
	closemessage
	special Digimon_GuideList
	dynmultichoice 0, 0, FALSE, 8, VAR_0x8004, DYN_MULTICHOICE_CB_NONE, NULL
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, Digimon_EventScript_DigiLabMenu
	copyvar VAR_0x8004, VAR_RESULT
	specialvar VAR_RESULT, Digimon_FieldGuideEntry
	goto_if_eq VAR_RESULT, FALSE, Digimon_EventScript_DigiLabMenu
	showmonpic VAR_0x8009, 18, 0
	msgbox Digimon_Text_FieldGuideEntry, MSGBOX_DEFAULT
	special Digimon_GuideStatus
	msgbox Digimon_Text_GuideStatus, MSGBOX_DEFAULT
Digimon_EventScript_GuideActions:
	closemessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Digimon_Text_Evolutions, Digimon_Text_ReconstructMenu, Digimon_Text_PartnerMenu, Digimon_Text_Back
	switch VAR_RESULT
	case 0, Digimon_EventScript_GuideEvolutions
	case 1, Digimon_EventScript_GuideConfirm
	case 2, Digimon_EventScript_GuidePartner
	hidemonpic
	goto Digimon_EventScript_GuideList

Digimon_EventScript_GuidePartner:
	specialvar VAR_RESULT, Digimon_PartnerInfo
	switch VAR_RESULT
	case 1, Digimon_EventScript_GuidePartnerParty
	case 2, Digimon_EventScript_GuidePartnerStorage
	msgbox Digimon_Text_NoPartner, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions
Digimon_EventScript_GuidePartnerParty:
	msgbox Digimon_Text_PartnerParty, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions
Digimon_EventScript_GuidePartnerStorage:
	msgbox Digimon_Text_PartnerStorage, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions

Digimon_EventScript_GuideEvolutions:
	setvar VAR_0x8005, 0
	specialvar VAR_RESULT, Digimon_GuideEvolution
	goto_if_eq VAR_RESULT, FALSE, Digimon_EventScript_NoEvolution
Digimon_EventScript_GuideBranch:
	msgbox Digimon_Text_GuideEvolution, MSGBOX_DEFAULT
	addvar VAR_0x8005, 1
	specialvar VAR_RESULT, Digimon_GuideEvolution
	goto_if_eq VAR_RESULT, TRUE, Digimon_EventScript_GuideBranch
	goto Digimon_EventScript_GuideActions
Digimon_EventScript_NoEvolution:
	msgbox Digimon_Text_NoEvolution, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions

Digimon_EventScript_GuideConfirm:
	setvar VAR_0x8006, 0
	specialvar VAR_RESULT, Digimon_GuideReconstruct
	goto_if_eq VAR_RESULT, FALSE, Digimon_EventScript_EventOnly
	msgbox Digimon_Text_GuideConfirm, MSGBOX_YESNO
	goto_if_ne VAR_RESULT, YES, Digimon_EventScript_GuideActions
	setvar VAR_0x8006, 1
	specialvar VAR_RESULT, Digimon_GuideReconstruct
	switch VAR_RESULT
	case DIGILAB_PARTY, Digimon_EventScript_GuideParty
	case DIGILAB_STORAGE, Digimon_EventScript_GuideStorage
	case DIGILAB_FULL, Digimon_EventScript_GuideFull
	case DIGILAB_ALREADY_RECONSTRUCTED, Digimon_EventScript_GuideAlready
	msgbox Digimon_Text_GuideIncomplete, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions
Digimon_EventScript_EventOnly:
	msgbox Digimon_Text_EventOnly, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions
Digimon_EventScript_GuideParty:
	msgbox Digimon_Text_GuideParty, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions
Digimon_EventScript_GuideStorage:
	msgbox Digimon_Text_GuideStorage, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions
Digimon_EventScript_GuideFull:
	msgbox Digimon_Text_GuideFull, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions
Digimon_EventScript_GuideAlready:
	msgbox Digimon_Text_GuideAlready, MSGBOX_DEFAULT
	goto Digimon_EventScript_GuideActions

Digimon_Text_Evolutions:
	.string "Digivolution$"
Digimon_Text_Back:
	.string "Back to list$"
Digimon_Text_GuideStatus:
	.string "Stage: {STR_VAR_1}\n"
	.string "Scan: {STR_VAR_2}\p"
	.string "Reconstruction:\n{STR_VAR_3}$"
Digimon_Text_GuideEvolution:
	.string "Form: {STR_VAR_1}\n"
	.string "{STR_VAR_2}\p{STR_VAR_3}$"
Digimon_Text_NoEvolution:
	.string "No further digivolution is\n"
	.string "available for this form yet.$"
Digimon_Text_NoPartner:
	.string "Your Partner is not available.\n"
	.string "Check Partner in the DigiLab menu.$"
Digimon_Text_GuideConfirm:
	.string "Reconstruct {STR_VAR_1}\n"
	.string "at level {STR_VAR_2}?\p"
	.string "Requires 100% Scan Data.\n"
	.string "One reconstruction per species.$"
Digimon_Text_EventOnly:
	.string "This is an event or Partner form.\n"
	.string "It cannot be reconstructed here.$"
Digimon_Text_GuideIncomplete:
	.string "Scan Data must reach 100%.\p"
	.string "Win wild battles against this\n"
	.string "species to gain 20% each time.$"
Digimon_Text_GuideParty:
	.string "{STR_VAR_1} was reconstructed!\n"
	.string "It joined your party.$"
Digimon_Text_GuideStorage:
	.string "{STR_VAR_1} was reconstructed!\n"
	.string "It is in DigiLab storage.$"
Digimon_Text_GuideFull:
	.string "Your party and storage are full.\n"
	.string "Make room, then try again.$"
Digimon_Text_GuideAlready:
	.string "This species was reconstructed.\n"
	.string "Your Scan Data remains complete.$"
