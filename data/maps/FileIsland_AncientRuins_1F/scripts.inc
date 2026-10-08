FileIsland_AncientRuins_1F_MapScripts::
	.byte 0

FileIsland_AncientRuins_1F_EventScript_Oda::
	trainerbattle_single TRAINER_TAMER_ODA, FileIsland_AncientRuins_1F_Text_OdaIntro, FileIsland_AncientRuins_1F_Text_OdaDefeated
	msgbox FileIsland_AncientRuins_1F_Text_OdaPostBattle, MSGBOX_AUTOCLOSE
	end

FileIsland_AncientRuins_1F_Text_OdaIntro:
	.string "These glyphs predate the Digital\n"
	.string "World itself! Don't touch anything!$"

FileIsland_AncientRuins_1F_Text_OdaDefeated:
	.string "My research… scattered like data!$"

FileIsland_AncientRuins_1F_Text_OdaPostBattle:
	.string "The ladder in the east hall leads\n"
	.string "up. Kuwagamon's roars come from above.$"
