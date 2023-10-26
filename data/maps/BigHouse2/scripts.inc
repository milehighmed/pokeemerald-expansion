BigHouse2_MapScripts::
	.byte 0


WJBabysitter::
	lockall
	faceplayer
	msgbox WJBabysitter_Text_0
	waitmessage
	releaseall
	end


WJToddler::
	lockall
	faceplayer
	msgbox WJToddler_Text_0
	waitmessage
	releaseall
	end


WJBabysitter_Text_0:
	.string "I couldn't beat Leader Niko, and I've\n"
	.string "already beaten all the trainers in this\l"
	.string "area, so now all I have for income is\l"
	.string "babysitting! What if I have to get a\l"
	.string "real job??$"

WJToddler_Text_0:
	.string "I want a Scyther!$"
