FileIsland_RuinsSanctum_MapScripts::
	.byte 0

FileIsland_RuinsSanctum_EventScript_Kuwagamon::
	lock
	faceplayer
	msgbox FileIsland_RuinsSanctum_Text_Roar, MSGBOX_DEFAULT
	waitse
	playmoncry SPECIES_KUWAGAMON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_KUWAGAMON, 18
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, FileIsland_RuinsSanctum_EventScript_Calmed
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, FileIsland_RuinsSanctum_EventScript_Calmed
	msgbox FileIsland_RuinsSanctum_Text_StillRaging, MSGBOX_DEFAULT
	release
	end

FileIsland_RuinsSanctum_EventScript_Calmed::
	setflag FLAG_DEFEATED_KUWAGAMON
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_RUINS_SANCTUM_KUWAGAMON
	fadescreen FADE_FROM_BLACK
	msgbox FileIsland_RuinsSanctum_Text_Calmed, MSGBOX_DEFAULT
	msgbox FileIsland_RuinsSanctum_Text_EndOfPlaytest, MSGBOX_DEFAULT
	special HealPlayerParty
	warp MAP_FILE_ISLAND_PRIMARY_VILLAGE, 15, 18
	waitstate
	release
	end

FileIsland_RuinsSanctum_Text_Roar:
	.string "Kuwagamon's eyes flash red!\n"
	.string "It charges, pincers snapping!$"

FileIsland_RuinsSanctum_Text_StillRaging:
	.string "Kuwagamon is still raging…\n"
	.string "Heal up and try again.$"

FileIsland_RuinsSanctum_Text_Calmed:
	.string "The corruption drains from Kuwagamon.\n"
	.string "It flies off into the forest, calm.\p"
	.string "Somewhere outside, the thickets\n"
	.string "crumble into harmless data.$"

FileIsland_RuinsSanctum_Text_EndOfPlaytest:
	.string "Thank you for playing the Digimon\n"
	.string "Digital Nexus playtest!\p"
	.string "This is the end of the test route.\n"
	.string "The rest of File Island is now open\l"
	.string "if you want to keep exploring.\p"
	.string "Remember to save, and please share\n"
	.string "your feedback with the team!$"
