BigHouse3_MapScripts::
	.byte 0


WJToddler1::
	lockall
	faceplayer
	msgbox WJToddler1_Text_0
	waitmessage
	releaseall
	end


WJGentleman1::
	lockall
	faceplayer
	msgbox WJGentleman1_Text_0
	waitmessage
	releaseall
	end


WJToddler1_Text_0:
	.string "When Daddy gets back from his job at\n"
	.string "the Power Plant, he's taking me fishing!$"

WJGentleman1_Text_0:
	.string "Three generations of men under one\n"
	.string "roof! Both my son and I work for Watt\l"
	.string "City Power Company.$"
