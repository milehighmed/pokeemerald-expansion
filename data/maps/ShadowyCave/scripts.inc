ShadowyCave_MapScripts::
	.byte 0


ShadowCaveSNSGrunt1::
	lockall
	msgbox ShadowCaveSNSGrunt1_Text_0
	waitmessage
	releaseall
	end


ShadowCaveSNSGrunt2::
	lockall
	msgbox ShadowCaveSNSGrunt2_Text_0
	waitmessage
	releaseall
	end


Prep_ShadowyCave::
	compare VAR_UNUSED_0x4083, 1
	goto_if_ne Prep_ShadowyCave_2
	compare VAR_UNUSED_0x4083, 1
	goto_if_eq Prep_ShadowyCave_4
	return

Prep_ShadowyCave_2:
	end

Prep_ShadowyCave_4:
	goto ShadowyCaveBattle
	return


ShadowyCaveBattle::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Face_BikeOwner
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox PinkSNSGrunt_ShadowyCave1
	waitmessage
	msgbox GreenSNSGrunt_ShadowyCave1
	waitmessage
	applymovement 1, PinkSNSGrunt_NoticePlayer
	msgbox PinkSNSGrunt_ShadowyCave2
	applymovement 1, PinkSNSGrunt_ShadowyCaveAttack
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, ShadowyCaveBattle_Text_0, ShadowyCaveBattle_Text_1, ShadowyCaveBattle2
	return


ShadowyCaveBattle2::
	msgbox GreenSNSGrunt_ShadowyCave2, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 1, PinkSNSGruntBacksUp
	waitmovement 1
	applymovement 2, GreenSNSGruntAttacks
	waitmovement 2
	trainerbattle_single TRAINER_KATELYNN, ShadowyCaveBattle2_Text_0, ShadowyCaveBattle2_Text_1, ShadowyCaveBattle3
	return


ShadowyCaveBattle3::
	msgbox PinkSNSGrunt_ShadowyCave3
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBacksUp
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 2, GreenRunAway
	waitmovement 2
	applymovement 1, PinkRunAway
	waitmovement 1
	removeobject 1
	removeobject 2
	msgbox ShadowyCaveBattle3_Text_0
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	setflag FLAG_UNUSED_0x030
	setvar VAR_UNUSED_0x4083, 2
	releaseall
	end


PinkRunAway:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

GreenRunAway:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

PinkSNSGruntBacksUp:
	face_up
	walk_up
	face_down
	step_end

GreenSNSGruntAttacks:
	face_down
	walk_down
	face_left
	walk_left
	face_down
	step_end

PlayerBacksUp:
	walk_left
	face_right
	step_end

PinkSNSGrunt_NoticePlayer:
	face_down
	walk_in_place_down
	step_end

PinkSNSGrunt_ShadowyCaveAttack:
	walk_down
	step_end

PichuBattle::
	lockall
	faceplayer
	playmoncry SPECIES_PICHU, CRY_MODE_ENCOUNTER
	msgbox PichuBattle_Text_0
	delay 40
	waitmoncry
	setwildbattle SPECIES_PICHU, 10, ITEM_LIGHT_BALL
	dowildbattle
	fadescreen FADE_TO_BLACK
	removeobject 3
	setflag FLAG_UNUSED_0x031
	fadescreen FADE_FROM_BLACK
	waitmessage
	releaseall
	end


ShadowCaveSNSGrunt1_Text_0:
	.string "It cost us the last of our budget to\n"
	.string "buy this Interface TM, how are we going\l"
	.string "to get a terminal for this spot now?\l"
	.string "The Lieutenant won't want to make this\l"
	.string "spot a new base if it doesn't at least\l"
	.string "have an Interface Terminal!$"

ShadowCaveSNSGrunt2_Text_0:
	.string "Stop talking so loud! The last thing we\n"
	.string "need is some passing trainer hearing us\l"
	.string "and telling Leader Mikey. Or WORSE...\l"
	.string "stealing our idea!!$"

ShadowyCaveBattle_Text_0:
	.string "Feel the might of the Shadow\n Net Syndicate!$"

ShadowyCaveBattle_Text_1:
	.string "No! How...$"

ShadowyCaveBattle2_Text_0:
	.string "I'll just take YOUR Pokémon!$"

ShadowyCaveBattle2_Text_1:
	.string "Please dont take my Purrloin!$"

ShadowyCaveBattle3_Text_0:
	.string "You retrieved the Interface Terminal\n"
	.string "Components!$"

PichuBattle_Text_0:
	.string "Pi! Pichu!$"

PostBattle_PinkCave::
	.string "{COLOR RED}{SHADOW LIGHT_RED}"
	.string "    Grr...$"

PinkSNSGrunt_ShadowyCave1::
	.string "{COLOR RED}{SHADOW LIGHT_RED}You idiot!\n "
	.string "This Pokémon you stole can't\p"
	.string "even learn Interface!\n"
	.string "Those parts we got from\p"
	.string "the Bike Shop are useless!$"

GreenSNSGrunt_ShadowyCave1::
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}"
	.string "How is that my fault?? You're the\n"
	.string "the planner! You pointed it out\p"
	.string "to me to steal!\n "
	.string "Whatever. It's not the end of the\p"
	.string "world. We can go to Watt Junction\n"
	.string "and just get a Pokémon that CAN\p"
	.string "learn interface.$"

PinkSNSGrunt_ShadowyCave2::
	.string "{COLOR RED}{SHADOW LIGHT_RED}"
	.string "Hey!You're from the Bike Shop!\n "
	.string "What're YOU doing here?\p"
	.string "It doesn't matter.\n"
	.string "I won't let you interfere!$"

GreenSNSGrunt_ShadowyCave2::
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}"
	.string "Fine! Leave it to me to do\n"
	.string "all the dirty work, again!$"

PinkSNSGrunt_ShadowyCave3::
	.string "{COLOR RED}{SHADOW LIGHT_RED}"
	.string "Let's get out of here!$"
