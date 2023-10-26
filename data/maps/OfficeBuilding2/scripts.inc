OfficeBuilding2_MapScripts::
	.byte 0


WJCollegekid::
	lockall
	faceplayer
	msgbox WJCollegekid_Text_0
	waitmessage
	releaseall
	end


WJRareCandy::
	lockall
	giveitem ITEM_DUBIOUS_DISC, 1
	removeobject 2
	setflag FLAG_UNUSED_0x271
	releaseall
	end


WJCollegekid_Text_0:
	.string "I moved here for school. I used to have\n"
	.string "a roommate, but some people came\l"
	.string "looking for him and then I never saw\l"
	.string "him again!$"
