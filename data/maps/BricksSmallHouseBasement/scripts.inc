BricksSmallHouseBasement_MapScripts::
	.byte 0


TriggerHolly::
	compare VAR_UNUSED_0x40A1, 0
	goto_if_ne TriggerHolly_2
	compare VAR_UNUSED_0x40A1, 0
	goto_if_eq TriggerHolly_4
	return

TriggerHolly_2:
	end

TriggerHolly_4:
	goto HollyBattle
	return


HollyBattle::
	lockall
	applymovement 1, HollyFaceUp
	waitmovement 1
	msgbox HollyBattle_Text_0
	waitmessage
	applymovement 1, HollyToPlayer
	waitmovement 1
	message HollyBattle_Text_1
	trainerbattle_single TRAINER_GABRIELLE_1, HollyBattle_Text_2, HollyBattle_Text_3, HollyPostBattle
	return


HollyPostBattle::
	msgbox HollyPostBattle_Text_0
	waitmessage
	setflag FLAG_UNUSED_0x279
	setvar VAR_UNUSED_0x40A1, 1
	releaseall
	end


HollyFaceUp:
	face_up
	step_end

HollyToPlayer:
	walk_left
	acro_wheelie_hop_face_up
	step_end

HollyBattle_Text_0:
	.string "Hey! Who are you?? How did you get past\n"
	.string "that girl upstairs? ...\p"
	.string "...\p"
	.string "...\p"
	.string "I see. So she let you pass because she\n"
	.string "saw potential in you. Very well. I shall\l"
	.string "test you myself, if you are ready.$"

HollyBattle_Text_1:
	.string "Are you ready?$"

HollyBattle_Text_2:
	.string "Let me see what you've got.$"

HollyBattle_Text_3:
	.string "Incredible...$"

HollyPostBattle_Text_0:
	.string "Amazing! You're just what I needed! I\n"
	.string "was kicked out of my Gym by the new\l"
	.string "Leader, Sam, so that he could acquire\l"
	.string "the political standing necessary to\l"
	.string "bring his company here to The Bricks to\l"
	.string "begin work on renovating the District.\l"
	.string "Now, people are losing their homes and\l"
	.string "his thugs are trashing my town! I've\l"
	.string "been in hiding ever since, so I'm stuck\l"
	.string "down here. But with your help we can\l"
	.string "start to retake The Bricks! Our first\l"
	.string "mission is simple, we need to get you\l"
	.string "into the Gym and use you as a show of\l"
	.string "force against Sam. All we need is for\l"
	.string "that goon blocking the front door to\l"
	.string "be drawn somewhere else. The rest of\l"
	.string "them usually hang out in the Flower\l"
	.string "Shop during the day since its one of\l"
	.string "the few buildings around here with air\l"
	.string "conditioning. Maybe you could stir up\l"
	.string "some trouble there and see what\l"
	.string "happens?$"
