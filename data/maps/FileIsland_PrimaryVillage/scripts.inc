FileIsland_PrimaryVillage_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FileIsland_PrimaryVillage_OnTransition
	.byte 0

FileIsland_PrimaryVillage_OnTransition:
	setrespawn HEAL_LOCATION_PRIMARY_VILLAGE
	end

FileIsland_PrimaryVillage_EventScript_Digivice::
	lock
	msgbox FileIsland_PrimaryVillage_Text_DigiviceGlows, MSGBOX_DEFAULT
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_B_DASH
	special ChooseStarterNoBattle
	setflag FLAG_FILE_ISLAND_DIGIVICE_TAKEN
	removeobject LOCALID_PRIMARY_VILLAGE_DIGIVICE
	special HealPlayerParty
	msgbox FileIsland_PrimaryVillage_Text_PartnerChosen, MSGBOX_DEFAULT
	release
	end

FileIsland_PrimaryVillage_EventScript_Leomon::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_KUWAGAMON, FileIsland_PrimaryVillage_EventScript_LeomonThanks
	goto_if_set FLAG_SYS_POKEMON_GET, FileIsland_PrimaryVillage_EventScript_LeomonRuins
	msgbox FileIsland_PrimaryVillage_Text_LeomonWelcome, MSGBOX_DEFAULT
	release
	end

FileIsland_PrimaryVillage_EventScript_LeomonRuins::
	msgbox FileIsland_PrimaryVillage_Text_LeomonRuins, MSGBOX_DEFAULT
	release
	end

FileIsland_PrimaryVillage_EventScript_LeomonThanks::
	msgbox FileIsland_PrimaryVillage_Text_LeomonThanks, MSGBOX_DEFAULT
	release
	end

FileIsland_PrimaryVillage_EventScript_NeedPartnerNorth::
	goto_if_set FLAG_SYS_POKEMON_GET, Common_EventScript_NopReturn
	lockall
	msgbox FileIsland_PrimaryVillage_Text_NeedPartner, MSGBOX_DEFAULT
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

FileIsland_PrimaryVillage_EventScript_NeedPartnerSouth::
	goto_if_set FLAG_SYS_POKEMON_GET, Common_EventScript_NopReturn
	lockall
	msgbox FileIsland_PrimaryVillage_Text_NeedPartner, MSGBOX_DEFAULT
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	releaseall
	end

FileIsland_PrimaryVillage_Text_DigiviceGlows:
	.string "A Digivice is resting here.\n"
	.string "Its screen flickers to life…$"

FileIsland_PrimaryVillage_Text_PartnerChosen:
	.string "Your new partner is ready.\p"
	.string "Leomon is waiting nearby.\n"
	.string "Talk to him before heading out.$"

FileIsland_PrimaryVillage_Text_LeomonWelcome:
	.string "LEOMON: Welcome to Primary Village,\n"
	.string "where every Digimon begins.\p"
	.string "That Digivice in the plaza has been\n"
	.string "waiting for a Tamer. Go on, take it!$"

FileIsland_PrimaryVillage_Text_LeomonRuins:
	.string "LEOMON: Kuwagamon has been raging\n"
	.string "in the Ancient Ruins north of here.\p"
	.string "Follow the Native Forest path to the\n"
	.string "rocky mound. The ruins are inside.\p"
	.string "Rest at the Recovery Terminal first!$"

FileIsland_PrimaryVillage_Text_LeomonThanks:
	.string "LEOMON: You calmed Kuwagamon!\n"
	.string "The forest paths are clear again.\p"
	.string "The rest of File Island is open\n"
	.string "to you now. Explore it all!$"

FileIsland_PrimaryVillage_Text_NeedPartner:
	.string "It's dangerous to go without a\n"
	.string "partner Digimon. Find the Digivice!$"

FileIsland_PrimaryVillage_EventScript_Sign::
	msgbox FileIsland_PrimaryVillage_Text_Sign, MSGBOX_SIGN
	end

FileIsland_PrimaryVillage_Text_Sign:
	.string "PRIMARY VILLAGE\n"
	.string "Where every Digimon begins.$"
