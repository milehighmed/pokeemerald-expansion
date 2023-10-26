BigHouse1_MapScripts::
	.byte 0


WJSchoolkid::
	lockall
	faceplayer
	msgbox WJSchoolkid_Text_0
	waitmessage
	releaseall
	end


WJMom::
	lockall
	faceplayer
	msgbox WJMom_Text_0
	waitmessage
	releaseall
	end


WJSchoolkid_Text_0:
	.string "Have you challenged the Leader yet?\n"
	.string "He's tough!$"

WJMom_Text_0:
	.string "More than anything, I want my son to\n"
	.string "study hard. But all he seems to be\l"
	.string "interested in is Pokémon!$"
