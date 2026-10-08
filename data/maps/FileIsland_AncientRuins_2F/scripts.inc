FileIsland_AncientRuins_2F_MapScripts::
	.byte 0

FileIsland_AncientRuins_2F_EventScript_Sora::
	trainerbattle_single TRAINER_TAMER_SORA, FileIsland_AncientRuins_2F_Text_SoraIntro, FileIsland_AncientRuins_2F_Text_SoraDefeated
	msgbox FileIsland_AncientRuins_2F_Text_SoraPostBattle, MSGBOX_AUTOCLOSE
	end

FileIsland_AncientRuins_2F_Text_SoraIntro:
	.string "I came for a picnic and got lost in\n"
	.string "here. A battle will cheer me up!$"

FileIsland_AncientRuins_2F_Text_SoraDefeated:
	.string "Ha! That was fun, even though I lost.$"

FileIsland_AncientRuins_2F_Text_SoraPostBattle:
	.string "I found a strange egg up here once.\n"
	.string "It's in the far corner, I think.$"

FileIsland_AncientRuins_2F_EventScript_Jun::
	trainerbattle_single TRAINER_TAMER_JUN, FileIsland_AncientRuins_2F_Text_JunIntro, FileIsland_AncientRuins_2F_Text_JunDefeated
	msgbox FileIsland_AncientRuins_2F_Text_JunPostBattle, MSGBOX_AUTOCLOSE
	end

FileIsland_AncientRuins_2F_Text_JunIntro:
	.string "Nobody goes past me to Kuwagamon\n"
	.string "until I'm sure they can handle it!$"

FileIsland_AncientRuins_2F_Text_JunDefeated:
	.string "…Fine. You've earned it.$"

FileIsland_AncientRuins_2F_Text_JunPostBattle:
	.string "The Sanctum ladder is right there.\n"
	.string "Heal up first. Kuwagamon is Lv 18.$"
