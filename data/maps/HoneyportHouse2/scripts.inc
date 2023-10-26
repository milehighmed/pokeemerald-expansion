HoneyportHouse2_MapScripts::
	.byte 0


HoneyportItem1::
	lockall
	giveitem ITEM_THROAT_SPRAY, 1
	removeitem 2
	setflag FLAG_UNUSED_0x1DA
	releaseall
	end


HoneyportMan1::
	lockall
	faceplayer
	msgbox HoneyportMan1_Text_0
	releaseall
	end


HoneyportMan1_Text_0:
	.string "I moved here with my girlfriend! She\n"
	.string "works on Route 25 as a Pokémon\l"
	.string "Breeder! We moved so that we could get\l"
	.string "away from the cosntant drone of Silver\l"
	.string "City. Me, I used to be the lead singer in\l"
	.string "a rock band! Now, now I don't do much of\l"
	.string "anything... But at least the air is nice\l"
	.string "here!$"
