Route15_MapScripts::
	.byte 0


GoodRod::
	lockall
	faceplayer
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, GoodRod_1
	msgbox GoodRod_Text_1
	waitmessage
	releaseall
	end

GoodRod_1:
	msgbox GoodRod_Text_0
	waitmessage
	giveitem ITEM_GOOD_ROD, 1
	setflag FLAG_RECEIVED_GOOD_ROD
	return


Route15Camper::
	trainerbattle_single TRAINER_TYRON, Route15Camper_Text_0, Route15Camper_Text_1
	releaseall
	end


Route15Picnicker::
	trainerbattle_single TRAINER_AUTUMN, Route15Picnicker_Text_0, Route15Picnicker_Text_1
	releaseall
	end


TrainerDessaBattle1::
	goto_if_unset FLAG_RECEIVED_6_SODA_POP, TrainerDessaBattle1_1
	end

TrainerDessaBattle1_1:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, PlayerExclamation
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 4, DessaWalkDown
	waitmovement 4
	msgbox TrainerDessaBattle1_Text_0
	waitmessage
	trainerbattle_single TRAINER_LEAF, TrainerDessaBattle1_Text_1, TrainerDessaBattle1_Text_2, DessaPostBattle
	return


DessaPostBattle::
	msgbox DessaPostBattle_Text_0
	waitmessage
	giveitem ITEM_LUCKY_EGG
	waitmessage
	applymovement 4, DessaWalkUp
	waitmovement 4
	setflag FLAG_RECEIVED_6_SODA_POP
	setvar VAR_EVER_GRANDE_CITY_STATE, 1
	releaseall
	end


PlayerExclamation:
	emote_exclamation_mark
	step_end

DessaWalkDown:
	walk_down
	walk_down
	walk_down
	step_end

DessaWalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

GoodRod_Text_0:
	.string "Hey, Trainer! You look you've got an eye\n"
	.string "for fishing! Here, take this. Go out and\l"
	.string "fish your heart out!$"

GoodRod_Text_1:
	.string "The Lake's the place to be!$"

Route15Camper_Text_0:
	.string "This is the great outdoors!$"

Route15Camper_Text_1:
	.string "Maybe I need to go\n farther from town...$"

Route15Picnicker_Text_0:
	.string "Don't you love the air here?$"

Route15Picnicker_Text_1:
	.string "I choked!$"

TrainerDessaBattle1_Text_0:
	.string "Hey, Trainer! Headed up to Lake Loral\n"
	.string "Resort? Sorry to say, but you just\l"
	.string "missed the Leader. I was his last\l"
	.string "challenger before he left for Lush\l"
	.string "Valley! He sure was strong, I barely\l"
	.string "came out on top! Here, want me to check\l"
	.string "if your team is ready for the\l"
	.string "challenge?$"

TrainerDessaBattle1_Text_1:
	.string "Me and my team are corn-fed!$"

TrainerDessaBattle1_Text_2:
	.string "I'm grass-finished!$"

DessaPostBattle_Text_0:
	.string "Yup, I don't think you'll have any\n"
	.string "trouble getting through Leader Ross'\l"
	.string "Gym! You should head up to Lush Valley\l"
	.string "though if you want a real challenge!\l"
	.string "Here, I found this in a pasture back\l"
	.string "home, consider it my badge!$"
