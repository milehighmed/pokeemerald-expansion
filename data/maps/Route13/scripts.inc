Route13_MapScripts::
	.byte 0


Route13Fisherman::
	trainerbattle_single TRAINER_ANDREW, Route13Fisherman_Text_0, Route13Fisherman_Text_1
	waitmessage
	end


Route13Item1::
	lockall
	giveitem ITEM_BEEDRILLITE, 1
	removeobject 3
	setflag FLAG_UNUSED_0x26C
	waitmessage
	releaseall
	end


Route13Item2::
	lockall
	giveitem ITEM_ANTIDOTE, 1
	removeobject 1
	setflag FLAG_UNUSED_0x26D
	return


Route13Guard::
	lockall
	faceplayer
	msgbox Route13Guard_Text_0
	releaseall
	end


Route13_BlockPath::
	lockall
	faceplayer
	goto_if_set FLAG_BADGE01_GET, Route13_Stop
	msgbox Route13_BlockPath_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Route13_GoBack
	waitmessage
	releaseall
	end


Route13_Stop::
	msgbox Route13_Stop_Text_0
	waitmessage
	releaseall
	end


Route13_GoBack:
	walk_down
	step_end

Route13Fisherman_Text_0:
	.string "Fish on!$"

Route13Fisherman_Text_1:
	.string "I came all the way\n out here for shallow\n water!$"

Route13Guard_Text_0:
	.string "I check PassIDs.$"

Route13_BlockPath_Text_0:
	.string "STOP! You haven't been authorized by\n"
	.string "Leader Mikey to leave this district.$"

Route13_Stop_Text_0:
	.string "Hold on. I need to check your PassID...\n"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Alright, go ahead.$"
