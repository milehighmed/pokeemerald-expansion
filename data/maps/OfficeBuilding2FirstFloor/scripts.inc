OfficeBuilding2FirstFloor_MapScripts::
	.byte 0


WJCook::
	lockall
	faceplayer
	msgbox WJCook_Text_0
	waitmessage
	releaseall
	end


WJCook_Text_0:
	.string "I'm trying to learn how to cook for\n"
	.string "myself. I wish I had a Rotom to help me\l"
	.string "with this finicky oven!$"
