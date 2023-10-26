Route25_MapScripts::
	.byte 0


TrainerDessaBattle2::
	goto_if_unset FLAG_WONDER_CARD_UNUSED_10, TrainerDessaBattle2_1
	end

TrainerDessaBattle2_1:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, PlayerExclamation
	applymovement OBJ_EVENT_ID_PLAYER, turnright
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 4, DessaWalkLeft
	waitmovement 4
	msgbox TrainerDessaBattle2_Text_0
	waitmessage
	trainerbattle_single TRAINER_RED, TrainerDessaBattle2_Text_1, TrainerDessaBattle2_Text_2, DessaPostBattle1
	return


DessaPostBattle1::
	msgbox DessaPostBattle1_Text_0
	giveitem ITEM_TM55, 1
	waitmessage
	applymovement 8, DessaWalkRight
	waitmovement 8
	removeobject 8
	setflag FLAG_WONDER_CARD_UNUSED_10
	setvar VAR_ROUTE102_STATE, 1
	releaseall
	end


turnright:
	face_right
	step_end

DessaWalkLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

DessaWalkRight:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Breeder1::
	trainerbattle_single TRAINER_ISAAC_1, Breeder1_Text_0, Breeder1_Text_1
	releaseall
	end


Breeder2::
	trainerbattle_single TRAINER_ISAAC_2, Breeder2_Text_0, Breeder2_Text_1
	releaseall
	end


Breeder3::
	trainerbattle_single TRAINER_LYDIA_1, Breeder3_Text_0, Breeder3_Text_1
	releaseall
	end


Breeder4::
	trainerbattle_single TRAINER_LYDIA_2, Breeder4_Text_0, Breeder4_Text_1
	releaseall
	end


Route25Item1::
	lockall
	giveitem ITEM_GROUNDIUM_Z, 1
	removeobject 7
	setflag FLAG_WONDER_CARD_UNUSED_12
	releaseall
	end


Route25Item2::
	lockall
	giveitem ITEM_AMPHAROSITE, 1
	removeobject 6
	setflag FLAG_WONDER_CARD_UNUSED_13
	releaseall
	end


TrainerDessaBattle2_Text_0:
	.string "Hey, Trainer! Fancy seeing you here! Me?\n"
	.string "Oh why I just had to stop at home to\l"
	.string "refresh myself before heading down to\l"
	.string "Silver City. If you haven't been yet,\l"
	.string "you really should! There's a terminal\l"
	.string "there that you need four badges to\l"
	.string "register to use, and they say that you\l"
	.string "get a really valuable Trainer Kit when\l"
	.string "you do! Say, let's have a rematch since\l"
	.string "I'm ready to go!$"

TrainerDessaBattle2_Text_1:
	.string "Who doesn't love a rematch!$"

TrainerDessaBattle2_Text_2:
	.string "Maybe next time!$"

DessaPostBattle1_Text_0:
	.string "Here, my older sister is stubborn as a\n"
	.string "Mudbray. If you're going to meet her,\l"
	.string "you might end up needing this!$"

Breeder1_Text_0:
	.string "I worked hard to raise these Pokémon!$"

Breeder1_Text_1:
	.string "I won't give up on them!$"

Breeder2_Text_0:
	.string "I love working out in the sunshine!$"

Breeder2_Text_1:
	.string "I should get back to it!$"

Breeder3_Text_0:
	.string "I raise the cutest Pokémon!$"

Breeder3_Text_1:
	.string "Yours are cute too!$"

Breeder4_Text_0:
	.string "Strong Pokémon, soft Pokémon!$"

Breeder4_Text_1:
	.string "My perfect combination...$"
