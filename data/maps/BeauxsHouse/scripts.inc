BeauxsHouse_MapScripts::
	.byte 0


LeaderBeaux::
	lockall
	faceplayer
	msgbox LeaderBeaux_Text_0
	goto_if_unset FLAG_WONDER_CARD_UNUSED_1, LeaderBeaux_1
	msgbox LeaderBeaux_Text_3
	releaseall
	end

LeaderBeaux_1:
	trainerbattle_single TRAINER_JAMES_5, LeaderBeaux_Text_1, LeaderBeaux_Text_2, PostBeaux
	return


PostBeaux::
	msgbox PostBeaux_Text_0
	giveitem ITEM_TM54, 1
	setflag FLAG_WONDER_CARD_UNUSED_1
	releaseall
	end


LeaderBeaux_Text_0:
	.string "Alright, trainer. You have my attention.\n"
	.string "What is it that you came looking for me\l"
	.string "for in Sunbeam Forest?\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "I see. Leader Ross and the Mayor sent\n"
	.string "you on their behalf. I hope that you're\l"
	.string "a more talented negotiator than they\l"
	.string "were. Regardless, something that all\l"
	.string "Lush Valley citizens hold in high\l"
	.string "regard is the virtue of battle. Before\l"
	.string "I hear you out, I first need to see if\l"
	.string "you're even worth listening to!$"

LeaderBeaux_Text_1:
	.string "Let's see why Celebi chose you!$"

LeaderBeaux_Text_2:
	.string "Very impressive.$"

LeaderBeaux_Text_3:
	.string "My responsibility isn't to myself or to\n"
	.string "my pride, it's to the people of Lush\l"
	.string "Valley. Not just Verdeville. I'll meet\l"
	.string "with the other leaders again. Just let\l"
	.string "the Mayor know when you've got Horn\l"
	.string "Hollow's leader, Myra, in a listening\l"
	.string "mood again and I'll head down to\l"
	.string "Honeyport's Town Hall.$"

PostBeaux_Text_0:
	.string "My responsibility isn't to myself or to\n"
	.string "my pride, it's to the people of Lush\l"
	.string "Valley. Not just Verdeville. I'll meet\l"
	.string "with the other leaders again. Just let\l"
	.string "the Mayor know when you've got Horn\l"
	.string "Hollow's leader, Myra, in a listening\l"
	.string "mood again and I'll head down to\l"
	.string "Honeyport's Town Hall. Before you go,\l"
	.string "take this. It's my favorite TM. I hope\l"
	.string "you get some use out of it.$"
