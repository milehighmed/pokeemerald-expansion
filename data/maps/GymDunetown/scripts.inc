GymDunetown_MapScripts::
	.byte 0


Dunetown_Sponsor::
	lockall
	faceplayer
	msgbox Dunetown_Sponsor_Text_0
	goto_if_unset FLAG_UNUSED_0x26A, Dunetown_Sponsor_2
	msgbox Dunetown_Sponsor_Text_2
Dunetown_Sponsor_1:
	waitmessage
	releaseall
	end

Dunetown_Sponsor_2:
	msgbox Dunetown_Sponsor_Text_1
	waitmessage
	giveitem ITEM_FRESH_WATER, 1
	setflag FLAG_UNUSED_0x26A
	goto Dunetown_Sponsor_1


GymTest::
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, GymTest_Text_0, GymTest_Text_1
	waitmessage
	end


Dunetown_Sponsor_Text_0:
	.string "Hey! Glad you made it,\n"
	.string "Champ-In-The-Making! A quick word of\l"
	.string "advice. Mikey is a Sandstorm expert,\l"
	.string "both in terms of his research and his\l"
	.string "battling style. I hope you have a\l"
	.string "better strategy than hoping you can\l"
	.string "counter his Ground-Types just by\l"
	.string "using types strong against them!$"

Dunetown_Sponsor_Text_1:
	.string "Here, this sand in here is killer!$"

Dunetown_Sponsor_Text_2:
	.string "Hey! Glad you made it\n"
	.string "Champ-In-The-Making! A quick word of\l"
	.string "advice. Mikey is a Sandstorm expert,\l"
	.string "both in terms of his research and his\l"
	.string "battling style. I hope you have a\l"
	.string "better strategy than hoping you can\l"
	.string "counter his Ground-Types just by\l"
	.string "using types strong against them!$"

GymTest_Text_0:
	.string "I've studied the sands my\n whole life!$"

GymTest_Text_1:
	.string "So much that I still don't\n know...$"
