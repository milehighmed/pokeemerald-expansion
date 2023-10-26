MyrasHouse_MapScripts::
	.byte 0


LeaderMyra::
	lockall
	faceplayer
	msgbox LeaderMyra_Text_0
	goto_if_unset FLAG_WONDER_CARD_UNUSED_15, LeaderMyra_1
	msgbox LeaderMyra_Text_3
	releaseall
	end

LeaderMyra_1:
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, LeaderMyra_Text_1, LeaderMyra_Text_2, PostMyra
	return


PostMyra::
	msgbox PostMyra_Text_0
	giveitem ITEM_TM_REST, 1
	setflag FLAG_WONDER_CARD_UNUSED_15
	releaseall
	end


LeaderMyra_Text_0:
	.string "Your timing couldn't be worse, Trainer.\n"
	.string "There's a lot of work to be done and\l"
	.string "not enough time for any of it. Why have\l"
	.string "you come here?\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "I see. Leader Ross and the Mayor sent\n"
	.string "you on their behalf. Fitting that they\l"
	.string "would send a messenger, knowing full\l"
	.string "well they wouldn't be able to pass my\l"
	.string "test. Fine. I'll listen, but only if you\l"
	.string "can prove yourself through the virtue\l"
	.string "of battle!$"

LeaderMyra_Text_1:
	.string "Let's get going!$"

LeaderMyra_Text_2:
	.string "That power!$"

LeaderMyra_Text_3:
	.string "Even if my intuition is telling me\n"
	.string "otherwise, it is my responsibility to\l"
	.string "represent the interests of my people.\l"
	.string "That includes those of Honeyport and\l"
	.string "Verdeville. We will convene again.$"

PostMyra_Text_0:
	.string "Even if my intuition is telling me\n"
	.string "otherwise, it is my responsibility to\l"
	.string "represent the interests of my people.\l"
	.string "That includes those of Honeyport and\l"
	.string "Verdeville. We will convene again. In\l"
	.string "the meantime, take this. I hope it\l"
	.string "serves you well.$"
