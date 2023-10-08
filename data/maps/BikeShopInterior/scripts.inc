BikeShopInterior_MapScripts::
	.byte 0


Prep_BikeShop::
	compare VAR_UNUSED_0x4083, 1
	goto_if_eq Prep_BikeShop_1
	setflag FLAG_UNUSED_0x4A8
	goto BikeShopOwner
	return

Prep_BikeShop_1:
	end


PartsRetrieved::
	compare VAR_UNUSED_0x4083, 2
	goto_if_ne PartsRetrieved_2
	compare VAR_UNUSED_0x4083, 2
	goto_if_eq PartsRetrieved_4
	return

PartsRetrieved_2:
	end

PartsRetrieved_4:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Face_BikeOwner
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox PartsRetrieved_Text_0
	waitmessage
	setflag FLAG_UNUSED_0x032
	setvar VAR_UNUSED_0x4083, 3
	releaseall
	end


BikeShopOwner::
	lockall
	faceplayer
	goto_if_set FLAG_UNUSED_0x4A8, Bikeshop_SNS
	msgbox BikeShopOwner_Text_0
	waitmessage
	releaseall
	end


Bikeshop_SNS::
	applymovement OBJ_EVENT_ID_PLAYER, Face_BikeOwner
	applymovement 2, PinkSNSGrunt_BikeShop
	msgbox PinkBikeLine1
	applymovement 3, GreenSNSGrunt_BikeShop
	msgbox GreenBikeLine1
	waitmessage
	applymovement 3, PinkSNSGrunt_BikeShop
	playfanfare MUS_OBTAIN_ITEM
	msgbox Bikeshop_SNS_Text_0
	applymovement 3, GreenSNSGrunt_LeaveShop
	waitmovement 3
	msgbox PinkBikeLine2
	applymovement 2, PinkSNSGrunt_LeaveShop
	waitmovement 2
	removeobject 2
	removeobject 3
	setflag FLAG_UNUSED_0x4A9
	applymovement OBJ_EVENT_ID_PLAYER, Approach_BikeOwner
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox Bikeshop_SNS_Text_1
	clearflag FLAG_UNUSED_0x4A8
	setvar VAR_UNUSED_0x4083, 1
	waitmessage
	releaseall
	end


Face_BikeOwner:
	face_up
	step_end

Approach_BikeOwner:
	walk_up
	step_end

PinkSNSGrunt_BikeShop:
	walk_in_place_up
	step_end

GreenSNSGrunt_BikeShop:
	walk_right
	walk_right
	walk_right
	face_up
	step_end

PinkSNSGrunt_LeaveShop:
	face_down
	face_right
	walk_right
	walk_right
	face_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	step_end

GreenSNSGrunt_LeaveShop:
	face_left
	walk_left
	walk_left
	face_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	step_end

PartsRetrieved_Text_0:
	.string "You did it! You got my parts back! Like I\n"
	.string "said, I owe you big time. I'm working on\l"
	.string "a new bicycle design, once my terminal\l"
	.string "is repaired you'll be able to get here\l"
	.string "from any Interface Terminal in Nova\l"
	.string "City! By the time you get access to the\l"
	.string "Digital Underworld, my new prototype\l"
	.string "bicycle should be ready. Come back\l"
	.string "then and its yours!$"

BikeShopOwner_Text_0:
	.string "Welcome!$"

Bikeshop_SNS_Text_0:
	.string "The stranger opens a panel on the\n"
	.string "strange machine and removes the\l"
	.string "electronics inside!$"

Bikeshop_SNS_Text_1:
	.string "Oh no! They stole my Interface Terminal\n"
	.string "components! I needed those to finish\l"
	.string "setting up my Terminal! Without that, I\l"
	.string "won't be able to support customers\l"
	.string "from outside of Dunetown! I'll go out\l"
	.string "of business...\p"
	.string "...\p"
	.string "...\p"
	.string "I know! You can help me! The Police in\n"
	.string "Nova City are horrible extortionists,\l"
	.string "and trying to get anything done\l"
	.string "through them would cost me the last of\l"
	.string "my savings... but if we can keep this\l"
	.string "business between you and me, I'll make\l"
	.string "it worth your while! Now... where could\l"
	.string "they have headed off to?$"

PinkBikeLine1::
	.string "{COLOR RED}{SHADOW LIGHT_RED}Hey, Gramps!\n "
	.string "This is what you might call,\p"
	.string "if this were like an old-timey\n"
	.string "movie or whatnot, a stick-up!$"

GreenBikeLine1::
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Yeah! And hey, Trainer! Don't\n"
	.string "even think about trying to do anything.\p"
	.string "Unless you wanna get VAPORIZED,\n "
	.string "by our super-powerful Pokémon.\p"
	.string "...\n"
	.string "Not that you'd have enough time \p"
	.string "to stop us anyways, we've got what\n"
	.string "we need.$"

PinkBikeLine2::
	.string "{COLOR RED}{SHADOW LIGHT_RED}Thanks a lot!$"
