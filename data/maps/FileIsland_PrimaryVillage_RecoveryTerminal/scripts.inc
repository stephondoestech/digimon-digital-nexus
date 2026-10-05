FileIsland_PrimaryVillage_RecoveryTerminal_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FileIsland_PrimaryVillage_RecoveryTerminal_OnTransition
	.byte 0

FileIsland_PrimaryVillage_RecoveryTerminal_OnTransition:
	setrespawn HEAL_LOCATION_PRIMARY_VILLAGE
	end

FileIsland_PrimaryVillage_RecoveryTerminal_EventScript_Monzaemon::
	lock
	faceplayer
	call FileIsland_EventScript_RecoveryTerminal
	release
	end

@ Shared by every Recovery Terminal on File Island.
FileIsland_EventScript_RecoveryTerminal::
	msgbox FileIsland_Text_RecoveryWelcome, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FileIsland_EventScript_RecoveryDeclined
	incrementgamestat GAME_STAT_USED_POKECENTER
	msgbox FileIsland_Text_RecoveryStart, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	msgbox FileIsland_Text_RecoveryDone, MSGBOX_DEFAULT
	return

FileIsland_EventScript_RecoveryDeclined::
	msgbox FileIsland_Text_RecoveryDeclined, MSGBOX_DEFAULT
	return

FileIsland_Text_RecoveryWelcome:
	.string "MONZAEMON: Welcome to the Recovery\n"
	.string "Terminal! Shall I restore your\l"
	.string "Digimon's data?$"

FileIsland_Text_RecoveryStart:
	.string "MONZAEMON: Big, warm, fluffy hug\n"
	.string "coming up!$"

FileIsland_Text_RecoveryDone:
	.string "MONZAEMON: All better! Your partners\n"
	.string "are full of energy again.$"

FileIsland_Text_RecoveryDeclined:
	.string "MONZAEMON: Come back any time you\n"
	.string "need a hug!$"
