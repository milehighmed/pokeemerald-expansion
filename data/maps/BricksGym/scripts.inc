BricksGym_MapScripts::
	.byte 0


BricksGymSponsor::
	lockall
	faceplayer
	msgbox BricksGymSponsor_Text_0
	goto_if_unset FLAG_UNUSED_0x281, BricksGymSponsor_2
	msgbox BricksGymSponsor_Text_0
BricksGymSponsor_1:
	waitmessage
	releaseall
	end

BricksGymSponsor_2:
	msgbox BricksGymSponsor_Text_1
	waitmessage
	giveitem ITEM_SODA_POP, 1
	setflag FLAG_UNUSED_0x281
	goto BricksGymSponsor_1


Leader_Sam::
	lockall
	compare VAR_UNUSED_0x40FF, 0
	goto_if_eq Leader_Sam_1
	msgbox Leader_Sam_Text_0
	releaseall
	end

Leader_Sam_1:
	goto Leader_SamBattle
	return


Leader_SamBattle::
	lockall
	faceplayer
	msgbox Leader_SamBattle_Text_0
	trainerbattle_single TRAINER_WALTER_2, Leader_SamBattle_Text_1, Leader_SamBattle_Text_2, Bricks_Victory
	releaseall
	end


Bricks_Victory::
	lockall
	setflag FLAG_BADGE03_GET
	msgbox Bricks_Victory_Text_0
	waitmessage
	giveitem ITEM_TM53, 1
	giveitem ITEM_ASSAULT_VEST, 1
	waitfanfare
	msgbox Bricks_Victory_Text_1
	call Common_EventScript_PlayGymBadgeFanfare
	setvar VAR_UNUSED_0x40FF, 1
	msgbox Bricks_Victory_Text_2
	waitmessage
	releaseall
	end


BricksGymBattle1::
	trainerbattle_single TRAINER_KIYO, BricksGymBattle1_Text_0, BricksGymBattle1_Text_1
	releaseall
	end


BricksGymBattle2::
	trainerbattle_single TRAINER_KOICHI, BricksGymBattle2_Text_0, BricksGymBattle2_Text_1
	releaseall
	end


BricksGymSponsor_Text_0:
	.string "Hey! I was wondering when you'd make it\n"
	.string "in here, Champ-In-The-Making! You're\l"
	.string "actually Sam's first challenger, so\l"
	.string "information on his tactics are scarce!\l"
	.string "All I can tell you is that his team of\l"
	.string "Fighting types broke the former\l"
	.string "leader's legendary winstreak! Prepare\l"
	.string "for a tough fight!$"

BricksGymSponsor_Text_1:
	.string "Here, stay hydrated!$"

Leader_Sam_Text_0:
	.string "Fly away, little bird. We'll meet again\n"
	.string "soon.$"

Leader_SamBattle_Text_0:
	.string "What's this? A challenger? I thought I\n"
	.string "had a man at the door just to prevent\l"
	.string "this sort of thing. Well, the rules are\l"
	.string "the rules. It was only a matter of time\l"
	.string "until I eventually had to accept a\l"
	.string "challenge.$"

Leader_SamBattle_Text_1:
	.string "I'm ready, aren't you?$"

Leader_SamBattle_Text_2:
	.string "Who sent you??$"

Bricks_Victory_Text_0:
	.string "Here, take these.$"

Bricks_Victory_Text_1:
	.string "You got the Combat Badge! Pokémon in\n"
	.string "your party are slightly faster than\l"
	.string "before.$"

Bricks_Victory_Text_2:
	.string "Your fighting style is reminiscent of\n"
	.string "someone else that I know. You don't\l"
	.string "need to say anything, I know who you're\l"
	.string "working for. Let her know that this\l"
	.string "isn't over.$"

BricksGymBattle1_Text_0:
	.string "I'll avenge my brothers!$"

BricksGymBattle1_Text_1:
	.string "No flair for the\ndramatic.$"

BricksGymBattle2_Text_0:
	.string "Face my poison-style!$"

BricksGymBattle2_Text_1:
	.string "I should stick to\nkarate...$"
