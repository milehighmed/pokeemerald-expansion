HornHollowBeach_MapScripts::
	.byte 0


BeachBattle::
	lockall
	msgbox BeachBattle_Text_0
	waitmessage
	msgbox BeachBattle_Text_1
	waitmessage
	msgbox BeachBattle_Text_2
	waitmessage
	msgbox BeachBattle_Text_3
	waitmessage
	applymovement 1, FacePlayer
	applymovement 1, PlayerExclamation
	waitmovement 1
	msgbox BeachBattle_Text_4
	waitmessage
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, BeachBattle_Text_5, BeachBattle_Text_6, BeachBattleSNS
	return


BeachBattleSNS::
	msgbox BeachBattleSNS_Text_0
	waitmessage
	applymovement 4, FacePlayer
	waitmovement 4
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, BeachBattleSNS_Text_1, BeachBattleSNS_Text_2, SNSBeachBattle1
	return


SNSBeachBattle1::
	msgbox SNSBeachBattle1_Text_0
	waitmessage
	fadescreen FADE_TO_BLACK
	msgbox SNSBeachBattle1_Text_1
	waitmessage
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	setflag FLAG_WONDER_CARD_UNUSED_14
	setflag FLAG_WONDER_CARD_UNUSED_5
	fadescreen FADE_FROM_BLACK
	releaseall
	end


FacePlayer:
	face_player
	step_end

BeachBattle_Text_0:
	.string "Grunt: This Poochyena won't leave me\n"
	.string "alone!$"

BeachBattle_Text_1:
	.string "Woman: I don't care! It's going to blow\n"
	.string "our cover. Catch it in a Pokéball or\l"
	.string "something!$"

BeachBattle_Text_2:
	.string "Grunt: I tried already, it's a trainer's!\n"
	.string "I can't catch it.$"

BeachBattle_Text_3:
	.string "Woman: Fine. Knock it out and we'll\n"
	.string "proceed with the mission.$"

BeachBattle_Text_4:
	.string "Hey! It's you, from the dock! I won't let\n"
	.string "you embarrass me again!$"

BeachBattle_Text_5:
	.string "Feel the might of the Shadow\n Net Syndicate!$"

BeachBattle_Text_6:
	.string "Not in front of Ana!$"

BeachBattleSNS_Text_0:
	.string "Woman: Out of my way, let me handle\n"
	.string "this!$"

BeachBattleSNS_Text_1:
	.string "Sorry for the cold shoulder!$"

BeachBattleSNS_Text_2:
	.string "You melted right through...$"

SNSBeachBattle1_Text_0:
	.string "Woman: Tch! Whatever. We didn't need to\n"
	.string "meet with the leaders here anyways. It\l"
	.string "was just going to be a bonus. A\l"
	.string "courtesy, even. To let them know what's\l"
	.string "coming. You'll see, you'll all see. Lush\l"
	.string "Valley is going to wish it started\l"
	.string "stockpiling supplies a lot earlier...$"

SNSBeachBattle1_Text_1:
	.string "The Shadow Net Syndicate members climb\n"
	.string "onto the Lapras' back and head back\l"
	.string "out to sea. Once they are out of\l"
	.string "eyesight, Poochyena runs back towards\l"
	.string "Route 25.$"
