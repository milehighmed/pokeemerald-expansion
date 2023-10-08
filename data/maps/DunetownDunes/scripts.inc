DunetownDunes_MapScripts::
	.byte 0


DunesElder::
	lockall
	faceplayer
	msgbox DunesElder_Text_0
	releaseall
	end


DunesTriathlete::
	lockall
	faceplayer
	msgbox DunesTriathlete_Text_0
	releaseall
	end


DunesWoman::
	lockall
	faceplayer
	msgbox DunesWoman_Text_0
	releaseall
	end


DunesElder_Text_0:
	.string "Leader Mikey is in the Desolate Desert\n"
	.string "collecting data on the Sandstorm\l"
	.string "that's raging at this very moment! He'll\l"
	.string "be back soon, be patient.$"

DunesTriathlete_Text_0:
	.string "I'm training to run from here, around\n"
	.string "Lake Loral, and back again! And you\l"
	.string "better believe I'm stopping in Lush\l"
	.string "Valley to try their world-famous\l"
	.string "Gogoat cheese and Combee Honey!$"

DunesWoman_Text_0:
	.string "Dunetown is the most isolated of Nova\n"
	.string "City's districts, and its also where a\l"
	.string "lot of newcomers enter from. Leader\l"
	.string "Mikey is pretty good about granting\l"
	.string "travel access, and depending on which\l"
	.string "direction you go you could end up at\l"
	.string "Lake Loral, Watt Junction, or The\l"
	.string "Bricks.$"
