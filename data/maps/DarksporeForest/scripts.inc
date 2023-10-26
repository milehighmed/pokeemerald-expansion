DarksporeForest_MapScripts::
	.byte 0


SporeSign::
	lockall
	msgbox SporeSign_Text_0
	waitmessage
	releaseall
	end


SporeBugCatcher1::
	trainerbattle_single TRAINER_DAVIS, SporeBugCatcher1_Text_0, SporeBugCatcher1_Text_1
	waitmessage
	end


SporeBugCatcher2::
	trainerbattle_single TRAINER_KENT, SporeBugCatcher2_Text_0, SporeBugCatcher2_Text_1
	waitmessage
	end


SporeBugCatcher3::
	trainerbattle_single TRAINER_JAMES_1, SporeBugCatcher3_Text_0, SporeBugCatcher3_Text_1
	waitmessage
	end


SporeBugCatcher4::
	trainerbattle_single TRAINER_RICK, SporeBugCatcher4_Text_0, SporeBugCatcher4_Text_1
	waitmessage
	end


SporeCamper::
	trainerbattle_single TRAINER_FLINT, SporeCamper_Text_0, SporeCamper_Text_1
	waitmessage
	end


SporeHexManiac1::
	trainerbattle_single TRAINER_LEAH, SporeHexManiac1_Text_0, SporeHexManiac1_Text_1
	waitmessage
	end


SporeHexManiac2::
	trainerbattle_single TRAINER_PATRICIA, SporeHexManiac2_Text_0, SporeHexManiac2_Text_1
	waitmessage
	end


SporeHexManiac3::
	trainerbattle_single TRAINER_KINDRA, SporeHexManiac3_Text_0, SporeHexManiac3_Text_1
	waitmessage
	end


SporeBattleGirl::
	trainerbattle_single TRAINER_LAURA, SporeBattleGirl_Text_0, SporeBattleGirl_Text_1
	waitmessage
	end


DarksporeItem4::
	lockall
	giveitem ITEM_DUSK_STONE, 1
	removeobject 12
	setflag FLAG_UNUSED_0x26E
	waitmessage
	releaseall
	end


DarksporeItem1::
	lockall
	giveitem ITEM_OLD_GATEAU, 1
	removeobject 9
	setflag FLAG_UNUSED_0x26F
	waitmessage
	releaseall
	end


DarksporeItem2::
	lockall
	giveitem ITEM_DREAD_PLATE, 1
	removeobject 10
	setflag FLAG_UNUSED_0x264
	waitmessage
	releaseall
	end


DarksporeItem3::
	lockall
	giveitem ITEM_GENGARITE, 1
	removeobject 8
	setflag FLAG_UNUSED_0x265
	waitmessage
	releaseall
	end


DarksporeGuard::
	lockall
	faceplayer
	msgbox DarksporeGuard_Text_0
	releaseall
	end


Darkspore_BlockPath::
	lockall
	faceplayer
	goto_if_set FLAG_BADGE01_GET, Darkspore_Stop
	msgbox Darkspore_BlockPath_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Route13_GoBack
	waitmessage
	releaseall
	end


Darkspore_Stop::
	msgbox Darkspore_Stop_Text_0
	waitmessage
	releaseall
	end


SporeSign_Text_0:
	.string "Darkspore Forest$"

SporeBugCatcher1_Text_0:
	.string "Caught in my web!$"

SporeBugCatcher1_Text_1:
	.string "You squashed me!$"

SporeBugCatcher2_Text_0:
	.string "Invincible exoskeleton,\n go!$"

SporeBugCatcher2_Text_1:
	.string "You broke right through!$"

SporeBugCatcher3_Text_0:
	.string "Scared of spiders?$"

SporeBugCatcher3_Text_1:
	.string "You're fearless!$"

SporeBugCatcher4_Text_0:
	.string "Bug-catching can be\n a lonely life.$"

SporeBugCatcher4_Text_1:
	.string "See what I mean?$"

SporeCamper_Text_0:
	.string "This spot's pretty\n out of the way!$"

SporeCamper_Text_1:
	.string "I guess that's for \n a reason...$"

SporeHexManiac1_Text_0:
	.string "Can you feel the\n spirits?$"

SporeHexManiac1_Text_1:
	.string "You've angered them!$"

SporeHexManiac2_Text_0:
	.string "Why do they gather\n here?$"

SporeHexManiac2_Text_1:
	.string "Is it because\n of you?$"

SporeHexManiac3_Text_0:
	.string "I see dead people.$"

SporeHexManiac3_Text_1:
	.string "You see them too?$"

SporeBattleGirl_Text_0:
	.string "I refuse to step foot\n in that forest!$"

SporeBattleGirl_Text_1:
	.string "I can't stand bugs!$"

DarksporeGuard_Text_0:
	.string "I check PassIDs.$"

Darkspore_BlockPath_Text_0:
	.string "STOP! You haven't been authorized by\n"
	.string "Leader Mikey to leave this district.$"

Darkspore_Stop_Text_0:
	.string "Hold on. I need to check your PassID...\n"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Alright, go ahead.$"
