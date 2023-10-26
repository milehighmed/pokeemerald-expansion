OfficeBuilding1SecondFloor_MapScripts::
	.byte 0


WJTeacher::
	lockall
	faceplayer
	msgbox WJTeacher_Text_0
	waitmessage
	releaseall
	end


WJStudent1::
	lockall
	faceplayer
	msgbox WJStudent1_Text_0
	waitmessage
	releaseall
	end


WJStudent2::
	lockall
	faceplayer
	msgbox WJStudent2_Text_0
	waitmessage
	releaseall
	end


WJTeacher_Text_0:
	.string "I used to teach at a big university.\n"
	.string "Working with little kids is harder, but\l"
	.string "their innocence is refreshing!$"

WJStudent1_Text_0:
	.string "Today I learned that some Pokémon only\n"
	.string "come out at night!$"

WJStudent2_Text_0:
	.string "If I was a Pokémon, I wonder which one\n"
	.string "I'd be?$"
