LakeLoral_MapScripts::
	.byte 0


BoatToHoneyport::
	msgbox BoatToHoneyport_Text_0
	warp MAP_HONEYPORT_SOUTH, [ 0 ]
	releaseall
	end


SaveCaptain::
	goto_if_unset FLAG_MOSSDEEP_GYM_SWITCH_1, SaveCaptain_1
	end

SaveCaptain_1:
	lockall
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
	setflag FLAG_WONDER_CARD_UNUSED_2
	setflag FLAG_WONDER_CARD_UNUSED_16
	msgbox SaveCaptain_Text_0
	waitmessage
	applymovement 4, PlayerExclamation
	msgbox SaveCaptain_Text_1
	waitmessage
	msgbox SaveCaptain_Text_2
	waitmessage
	msgbox SaveCaptain_Text_3
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, PlayerExclamation
	msgbox SaveCaptain_Text_4
	waitmessage
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL, SaveCaptain_Text_5, SaveCaptain_Text_6, CaptainSaved
	return


CaptainSaved::
	msgbox CaptainSaved_Text_0
	waitmessage
	fadescreen FADE_TO_BLACK
	removeobject 4
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
	setvar VAR_CURRENT_SECRET_BASE, 1
	fadescreen FADE_FROM_BLACK
	waitmessage
	msgbox CaptainSaved_Text_1
	waitmessage
	releaseall
	end


LoralGymDude::
	lockall
	faceplayer
	msgbox LoralGymDude_Text_0
	releaseall
	end


BoatToHoneyport_Text_0:
	.string "Let's set sail for Honeyport!$"

SaveCaptain_Text_0:
	.string "Captain: No! I refuse.$"

SaveCaptain_Text_1:
	.string "SNS Grunt: Refuse? You can't refuse!\n"
	.string "You have a responsibility to take\l"
	.string "people across the lake to Lush Valley.\l"
	.string "You've never turned me down before.\l"
	.string "Why now?$"

SaveCaptain_Text_2:
	.string "Captain: Because. Leader Ross is there\n"
	.string "negotiating with the leaders of Lush\l"
	.string "Valley right now. He forbade me from\l"
	.string "ferrying you and your group across!$"

SaveCaptain_Text_3:
	.string "SNS Grunt: I don't think you\n"
	.string "understand. This isn't a request. You\l"
	.string "WILL take my Lieutenant and I to\l"
	.string "Honeyport.$"

SaveCaptain_Text_4:
	.string "Captain: You there! Trainer! Help me!$"

SaveCaptain_Text_5:
	.string "Don't get it in my way!$"

SaveCaptain_Text_6:
	.string "What's the Lt. gonna say?$"

CaptainSaved_Text_0:
	.string "SNS Grunt: You haven't stopped\n"
	.string "anything. We can find another boat,\l"
	.string "just you watch!$"

CaptainSaved_Text_1:
	.string "Captain: Thank you for your help. If\n"
	.string "you ever want to sail to the other side\l"
	.string "of the lake, let me know. I owe you!$"

LoralGymDude_Text_0:
	.string "Woah there! Leader Ross has the Gym\n"
	.string "closed right now. He's got some\l"
	.string "important business to attend to, come\l"
	.string "back later!$"
