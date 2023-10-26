BricksSmallHouse_MapScripts::
	.byte 0


BricksSmallHouseItem::
	lockall
	giveitem ITEM_TM52, 1
	removeobject 2
	setflag FLAG_UNUSED_0x278
	releaseall
	end


BricksSmallHouseLass::
	lockall
	faceplayer
	applymovement 0, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox BricksSmallHouseLass_Text_0
	waitmessage
	releaseall
	end


BricksSmallHouseLass_Text_0:
	.string "Woah! I didn't even hear you come in.\n"
	.string "Hmm... you don't look like one of Sam's\l"
	.string "thugs... and you've got this heavy air\l"
	.string "about you. Do me a favor, go through\l"
	.string "that passage and talk to Leader Holly.\l"
	.string "Just don't mention that you found me\l"
	.string "distracted by the TV, okay?$"
