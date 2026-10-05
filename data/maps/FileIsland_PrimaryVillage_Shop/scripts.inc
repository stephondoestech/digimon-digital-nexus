FileIsland_PrimaryVillage_Shop_MapScripts::
	.byte 0

FileIsland_PrimaryVillage_Shop_EventScript_Clerk::
	lock
	faceplayer
	message FileIsland_PrimaryVillage_Shop_Text_Welcome
	waitmessage
	pokemart FileIsland_PrimaryVillage_Shop_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FileIsland_PrimaryVillage_Shop_Items:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	pokemartlistend

FileIsland_PrimaryVillage_Shop_Text_Welcome:
	.string "DIGITAMAMON: Welcome, welcome!\n"
	.string "What can I get for you?$"
