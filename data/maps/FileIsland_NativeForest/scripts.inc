FileIsland_NativeForest_MapScripts::
	.byte 0

FileIsland_NativeForest_EventScript_Thicket::
	msgbox FileIsland_NativeForest_Text_Thicket, MSGBOX_SIGN
	end

FileIsland_NativeForest_Text_Thicket:
	.string "A tangle of glitching vines blocks\n"
	.string "the path.\p"
	.string "It pulses in time with the roars\n"
	.string "coming from the Ancient Ruins…$"

FileIsland_NativeForest_EventScript_Kai::
	trainerbattle_single TRAINER_TAMER_KAI, FileIsland_NativeForest_Text_KaiIntro, FileIsland_NativeForest_Text_KaiDefeated
	msgbox FileIsland_NativeForest_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
	end

FileIsland_NativeForest_Text_KaiIntro:
	.string "Hey! You got a Digivice too?\n"
	.string "Let's see whose partner is tougher!$"

FileIsland_NativeForest_Text_KaiDefeated:
	.string "Whoa… your partner's the real deal!$"

FileIsland_NativeForest_Text_KaiPostBattle:
	.string "The tall grass is full of wild Digimon.\n"
	.string "Battling them makes your partner grow!$"

FileIsland_NativeForest_EventScript_Mia::
	trainerbattle_single TRAINER_TAMER_MIA, FileIsland_NativeForest_Text_MiaIntro, FileIsland_NativeForest_Text_MiaDefeated
	msgbox FileIsland_NativeForest_Text_MiaPostBattle, MSGBOX_AUTOCLOSE
	end

FileIsland_NativeForest_Text_MiaIntro:
	.string "My Digimon and I train here every\n"
	.string "day. Show me what you've got!$"

FileIsland_NativeForest_Text_MiaDefeated:
	.string "Aww, we lost.\n"
	.string "You two make a great team.$"

FileIsland_NativeForest_Text_MiaPostBattle:
	.string "Rest at the Recovery Terminal in\n"
	.string "the village if your partner gets tired.$"

FileIsland_NativeForest_EventScript_Ren::
	trainerbattle_single TRAINER_TAMER_REN, FileIsland_NativeForest_Text_RenIntro, FileIsland_NativeForest_Text_RenDefeated
	msgbox FileIsland_NativeForest_Text_RenPostBattle, MSGBOX_AUTOCLOSE
	end

FileIsland_NativeForest_Text_RenIntro:
	.string "The ruins are just past here.\n"
	.string "Prove you're ready first!$"

FileIsland_NativeForest_Text_RenDefeated:
	.string "Okay, okay! You're ready.$"

FileIsland_NativeForest_Text_RenPostBattle:
	.string "Kuwagamon is in the deepest room.\n"
	.string "Get your partner to Lv 16 so it can\l"
	.string "Digivolve before you face it!$"
