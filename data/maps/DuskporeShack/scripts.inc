DuskporeShack_MapScripts::
	.byte 0


DuskporeGhostBattle::
	lockall
	fadescreen FADE_TO_BLACK
	msgbox DuskporeGhostBattle_Text_0
	waitmessage
	fadescreen FADE_FROM_BLACK
	msgbox DuskporeGhostBattle_Text_1
	waitmessage
	trainerbattle_single TRAINER_TIANA, DuskporeGhostBattle_Text_2, DuskporeGhostBattle_Text_3, DuskporePostBattle
	return


DuskporePostBattle::
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_UNUSED_0x266
	msgbox DuskporePostBattle_Text_0
	waitmessage
	fadescreen FADE_FROM_BLACK
	waitmessage
	releaseall
	end


DuskporeShackItem::
	lockall
	giveitem ITEM_METRONOME, 1
	removeobject 2
	setflag FLAG_UNUSED_0x267
	waitmessage
	releaseall
	end


DuskporeGhostBattle_Text_0:
	.string "...tik\p"
	.string "...tik\p"
	.string "...tik\p"
	.string "...tik\p"
	.string "$"

DuskporeGhostBattle_Text_1:
	.string "The air goes cold and heavy around you!$"

DuskporeGhostBattle_Text_2:
	.string "...tik$"

DuskporeGhostBattle_Text_3:
	.string "...tok$"

DuskporePostBattle_Text_0:
	.string "You feel a chill run down your spine as\n"
	.string "warmth returns to the space around\l"
	.string "you$"
