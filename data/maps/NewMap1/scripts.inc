NewMap1_MapScripts::
	.byte 0


Farmer1::
	trainerbattle_single TRAINER_JAMES_2, Farmer1_Text_0, Farmer1_Text_1
	releaseall
	end


Farmer2::
	trainerbattle_single TRAINER_JAMES_3, Farmer2_Text_0, Farmer2_Text_1
	releaseall
	end


Farmer3::
	trainerbattle_single TRAINER_JAMES_4, Farmer3_Text_0, Farmer3_Text_1
	releaseall
	end


FarmItem1::
	lockall
	giveitem ITEM_VENUSAURITE, 1
	removeobject 3
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
	releaseall
	end


FarmItem2::
	lockall
	giveitem ITEM_MIRACLE_SEED, 1
	removeobject 7
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
	releaseall
	end


FarmItem3::
	lockall
	giveitem ITEM_SITRUS_BERRY, 1
	removeobject 2
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
	releaseall
	end


SleepingSnorlax::
	lockall
	goto_if_set FLAG_WONDER_CARD_UNUSED_3, SleepingSnorlax_1
	msgbox SleepingSnorlax_Text_1
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SNORLAX, 30
	dowildbattle
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_WONDER_CARD_UNUSED_4
	fadescreen FADE_FROM_BLACK
	releaseall
	end

SleepingSnorlax_1:
	msgbox SleepingSnorlax_Text_0
	releaseall
	end


Farmer1_Text_0:
	.string "Hey! Don't trample my crops!$"

Farmer1_Text_1:
	.string "Crushed underfoot...$"

Farmer2_Text_0:
	.string "I'm on break! Pass the time with me?$"

Farmer2_Text_1:
	.string "Back to work!$"

Farmer3_Text_0:
	.string "Keeping pests out is hard work!$"

Farmer3_Text_1:
	.string "Talk about a pest!$"

SleepingSnorlax_Text_0:
	.string "You attempt to rouse the slumbering\n"
	.string "giant, but it doesn't seem to care.\l"
	.string "You'll have to find a way to get it to\l"
	.string "listen to you.$"

SleepingSnorlax_Text_1:
	.string "After your encounter with Celebi,\n"
	.string "Snorlax seems to be listening to you!\l"
	.string "It wakes up!$"
