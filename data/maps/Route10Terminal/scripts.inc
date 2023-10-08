Route10Terminal_MapScripts::
	.byte 0


Terminal10_Camper::
	lockall
	msgbox Terminal10_Camper_Text_0
	waitmessage
	releaseall
	end


Terminal10_Item::
	lockall
	giveitem ITEM_QUICK_CLAW, 1
	removeobject 2
	setflag FLAG_UNUSED_0x4AA
	waitmessage
	releaseall
	end


Terminal10_Camper_Text_0:
	.string "My friend got approved by Leader Mikey\n"
	.string "to travel to Watt Junction by battling\l"
	.string "him, and he told me that he used a rare\l"
	.string "pokemon that he found in a cave\l"
	.string "outside of town to do it! So here I am\l"
	.string "searching...$"
