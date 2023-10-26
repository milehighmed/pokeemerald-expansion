SunbeamForest_MapScripts::
	.byte 0


CelebiBattle::
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
	lockall
	faceplayer
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_CELEBI, 25
	dowildbattle
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_RECEIVED_CONTEST_PASS
	fadescreen FADE_FROM_BLACK
	msgbox CelebiBattle_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, PlayerExclamation
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 2, BeauxDown
	msgbox CelebiBattle_Text_1
	waitmessage
	applymovement 2, BeauxUp
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
	clearflag FLAG_WONDER_CARD_UNUSED_2
	setflag FLAG_WONDER_CARD_UNUSED_3
	removeobject 2
	releaseall
	end


BeauxDown:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

BeauxUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CelebiBattle_Text_0:
	.string "That was Celebi, the nature spirit. It\n"
	.string "has the power to travel through time,\l"
	.string "and thus wanders from one age to the\l"
	.string "next.$"

CelebiBattle_Text_1:
	.string "It has appeared to me before, but never\n"
	.string "like that. It appears to have deemed\l"
	.string "you worthy. How interesting. I came\l"
	.string "here to commune with it and to seek its\l"
	.string "aid, but it seems as if I was meant to\l"
	.string "find you instead. Come find me at\l"
	.string "Verdeville when you're ready$"
