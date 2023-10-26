TownHall_MapScripts::
	.byte 0


TownHall_Ross::
	lockall
	faceplayer
	applymovement 1, PlayerExclamation
	waitmovement 1
	msgbox TownHall_Ross_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveRoss
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, RossExit
	waitmovement 1
	removeobject 1
	setflag FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE
	releaseall
	end


Mayor::
	lockall
	setflag FLAG_UNUSED_0x1DF
	setflag FLAG_WONDER_CARD_UNUSED_4
	faceplayer
	checktrainerflag TRAINER_JAMES_5
	goto_if 1, Mayor_3
Mayor_2:
	msgbox Mayor_Text_21
	releaseall
	end

Mayor_1:
	msgbox Mayor_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	setflag FLAG_WONDER_CARD_UNUSED_17
	fadescreen FADE_TO_BLACK
	clearflag FLAG_WONDER_CARD_UNUSED_16
	removeobject 2
	fadescreen FADE_FROM_BLACK
	delay 40
	msgbox Mayor_Text_1
	waitmessage
	msgbox Mayor_Text_2
	waitmessage
	msgbox Mayor_Text_3
	waitmessage
	msgbox Mayor_Text_4
	waitmessage
	msgbox Mayor_Text_5
	waitmessage
	msgbox Mayor_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Mayor_6
	msgbox Mayor_Text_18
	waitmessage
	msgbox Mayor_Text_19, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Mayor_12
	applymovement 5, PlayerExclamation
	msgbox Mayor_Text_12
	waitmessage
	msgbox Mayor_Text_13
	waitmessage
	applymovement 6, PlayerExclamation
	msgbox Mayor_Text_14
	waitmessage
	msgbox Mayor_Text_15
	waitmessage
	msgbox Mayor_Text_16
	waitmessage
	msgbox Mayor_Text_17
	setflag FLAG_WONDER_CARD_UNUSED_16
	fadescreen FADE_TO_BLACK
	removeobject 3
	removeobject 4
	removeobject 5
	fadescreen FADE_FROM_BLACK
	releaseall
	end

Mayor_3:
	checktrainerflag TRAINER_GRUNT_WEATHER_INST_3
	goto_if 1, Mayor_1
	goto Mayor_2

Mayor_6:
	applymovement 4, PlayerExclamation
	msgbox Mayor_Text_7
	waitmessage
	msgbox Mayor_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Mayor_9
	applymovement 5, PlayerExclamation
	msgbox Mayor_Text_12
	waitmessage
	msgbox Mayor_Text_13
	waitmessage
	applymovement 6, PlayerExclamation
	msgbox Mayor_Text_14
	waitmessage
	msgbox Mayor_Text_15
	waitmessage
	msgbox Mayor_Text_16
	waitmessage
	msgbox Mayor_Text_17
	setflag FLAG_WONDER_CARD_UNUSED_16
	fadescreen FADE_TO_BLACK
	removeobject 3
	removeobject 4
	removeobject 5
	fadescreen FADE_FROM_BLACK
	releaseall
	end

Mayor_9:
	msgbox Mayor_Text_9
	waitmessage
	msgbox Mayor_Text_10
	waitmessage
	msgbox Mayor_Text_11
	setflag FLAG_WONDER_CARD_UNUSED_16
	fadescreen FADE_TO_BLACK
	removeobject 3
	removeobject 4
	removeobject 5
	fadescreen FADE_FROM_BLACK
	releaseall
	end

Mayor_12:
	msgbox Mayor_Text_20
	waitmessage
	msgbox Mayor_Text_11
	setflag FLAG_WONDER_CARD_UNUSED_16
	fadescreen FADE_TO_BLACK
	removeobject 3
	removeobject 4
	removeobject 5
	fadescreen FADE_FROM_BLACK
	releaseall
	end


PlayerMoveRoss:
	walk_down
	face_up
	step_end

RossExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

FaceRight:
	walk_left
	walk_left
	walk_down
	walk_down
	face_right
	step_end

TownHall_Ross_Text_0:
	.string "Oh hey, Trainer.\p"
	.string "...\p"
	.string "...\p"
	.string "I see. So the boat Captain brought you\n"
	.string "here. Well, if you were expecting to be\l"
	.string "able to challenge me, I'm afraid I don't\l"
	.string "have time for it right now. Other than\l"
	.string "approving citizens for travel between\l"
	.string "districts, Leaders also have to handle\l"
	.string "local political matters. Normally, the\l"
	.string "dock at Loral Resort receives\l"
	.string "shipments of food from Lush Valley\l"
	.string "that is then shipped throughout Nova\l"
	.string "City, but according to the leaders\l"
	.string "here, they haven't been paid correctly\l"
	.string "for two orders in a row. I came to\l"
	.string "investigate and attempt negotiations,\l"
	.string "but the leaders of the other two towns\l"
	.string "in Lush Valley couldn't reach a\l"
	.string "compromise. Now, I'm out of time and\l"
	.string "have to return back to Loral Resort.\l"
	.string "But I'll cut you a deal! If you can work\l"
	.string "with the Mayor here to find a solution,\l"
	.string "I'll open the Gym back up for you early!\l"
	.string "Good luck, I've gotta get going!$"

Mayor_Text_0:
	.string "Hello, Trainer. I've received word from\n"
	.string "Beaux and Myra. We're all ready to meet\l"
	.string "again. Please, help me oversee the\l"
	.string "proceedings as a mediator. We'll begin\l"
	.string "shortly.$"

Mayor_Text_1:
	.string "Mayor: Well, everyone's here. Let's\n"
	.string "begin where we left off: Leader Ross\l"
	.string "proposed that Lush Valley continue\l"
	.string "supplying Nova City with food, with the\l"
	.string "understanding that the payment\l"
	.string "discrepancy would be fulfilled at a\l"
	.string "later date. Leader Beaux, you agreed\l"
	.string "with this plan, citing that our\l"
	.string "community would lose its only source of\l"
	.string "outside income if we stopped supplying\l"
	.string "Nova City, regardless of what they pay\l"
	.string "us. Is that correct?$"

Mayor_Text_2:
	.string "Beaux: That's correct. I reasoned that\n"
	.string "it's better than nothing, and we can at\l"
	.string "least get something while we work on\l"
	.string "ironing out a permanent solution.$"

Mayor_Text_3:
	.string "Myra: Meanwhile, I actually offered a\n"
	.string "permanent solution. We can take this\l"
	.string "opportunity to distance ourselves\l"
	.string "from Nova City. Who says we need their\l"
	.string "money anyways? We have enough food\l"
	.string "for ourselves here, we should turn our\l"
	.string "attention inwards.$"

Mayor_Text_4:
	.string "Mayor: Myra, please refrain from\n"
	.string "interrupting. There's an order to this\l"
	.string "sort of thing! Both of you offer fair\l"
	.string "reasoning.$"

Mayor_Text_5:
	.string "Beaux: Trainer, now may be a good time\n"
	.string "to get your opinion.$"

Mayor_Text_6:
	.string "Do you think it's a good idea to\ncontinue trade with Nova City?$"

Mayor_Text_7:
	.string "Myra: Then what about us? What if we\n"
	.string "deplete our stores for nothing? What\l"
	.string "if we don't end up with enough money\l"
	.string "from bad trades to survive?$"

Mayor_Text_8:
	.string "Should we trust Nova City to pay\nenough?$"

Mayor_Text_9:
	.string "Beaux: Perfect, I knew you would side\n"
	.string "with me. It's settled then, we'll\l"
	.string "continue selling to Nova City and keep\l"
	.string "track of the debts we're owed.$"

Mayor_Text_10:
	.string "Myra: What if we don't have enough for\n"
	.string "ourselves though? All it would take is\l"
	.string "for Nova City to lower payment again\l"
	.string "and we'd be out of food and out of\l"
	.string "money. We'd starve!$"

Mayor_Text_11:
	.string "Mayor: In that case, we'll do what we've\n"
	.string "always done. We'll get through it\l"
	.string "together. Trainer, thank you for your\l"
	.string "help in resolving this. Please tell\l"
	.string "Leader Ross the decision we've come to.\l"
	.string "Good luck to you on the rest of your\l"
	.string "journey.$"

Mayor_Text_12:
	.string "Beaux: What're you saying, then? We\n"
	.string "can't have it both ways!$"

Mayor_Text_13:
	.string "Myra: Yeah, how can we keep our stores\n"
	.string "stocked while still continuing trade\l"
	.string "with Nova City?$"

Mayor_Text_14:
	.string "Mayor: Aha! I get it! You're saying that\n"
	.string "we should build up our stores first, and\l"
	.string "then reopen trade with Nova City\l"
	.string "afterwards!$"

Mayor_Text_15:
	.string "Beaux: Oh! That means we would be able\n"
	.string "to meet in the middle!$"

Mayor_Text_16:
	.string "Myra: You're kidding! Why didn't I think\n"
	.string "of that?$"

Mayor_Text_17:
	.string "Mayor: Hah! You two were so preoccupied\n"
	.string "with being right that you didn't stop\l"
	.string "to consider if there was a middleground\l"
	.string "between you! It's settled then. We'll\l"
	.string "continue to build up our own\l"
	.string "stockpiles. Hopefully, Nova City will\l"
	.string "come to their senses in the meantime\l"
	.string "and start paying what they owe us!\l"
	.string "Trainer, thank you for your help in\l"
	.string "resolving this. Please tell Leader Ross\l"
	.string "the decision we've come to. Good luck\l"
	.string "to you on the rest of your journey.$"

Mayor_Text_18:
	.string "Myra: So you agree with me then! It's\n"
	.string "settled, we'll start stockpiling and\l"
	.string "prepare to become wholly independent\l"
	.string "of Nova City.$"

Mayor_Text_19:
	.string "You do agree with me, right?$"

Mayor_Text_20:
	.string "Beaux: I guess that isn't the end of\n"
	.string "the world, if it's what's best. It is\l"
	.string "true that we have enough food to go\l"
	.string "around, I just worry about what might\l"
	.string "happen if our community suddenly can't\l"
	.string "provide enough for itself. All it would\l"
	.string "take is a single disaster to ruin us...$"

Mayor_Text_21:
	.string "Well, it's just as you heard from Leader\n"
	.string "Ross. We're in a bit of a bad way over\l"
	.string "here in Lush Valley at the moment. We\l"
	.string "aren't technically a part of Nova City,\l"
	.string "but we still depend on the export of\l"
	.string "our goods in order to make enough\l"
	.string "money to live. Lately, the City hasn't\l"
	.string "been paying what it used to and\l"
	.string "refuses to explain why. Beaux, the\l"
	.string "leader of Verdeville, is worried that if\l"
	.string "we don't keep fulfilling orders\l"
	.string "regardless, we'll run out of money.\l"
	.string "Myra, the leader of Horn Hollow,\l"
	.string "believes that we should take this as an\l"
	.string "opportunity to become independent\l"
	.string "from Nova City, and begin stockpiling\l"
	.string "food. Both sides have good points, but\l"
	.string "now they won't even come together to\l"
	.string "meet! No matter the decision, I know\l"
	.string "that if the three communities in Lush\l"
	.string "Valley can't work together, then we'll\l"
	.string "all fail. Please, go see if you can get\l"
	.string "the leaders to convene just once more.$"
