OfficeBuilding1_MapScripts::
	.byte 0


WJOldMan::
	lockall
	faceplayer
	msgbox WJOldMan_Text_0
	waitmessage
	releaseall
	end


WJOldMan_Text_0:
	.string "I remember when they built these tall\n"
	.string "buildings. I was the first to move in!$"
