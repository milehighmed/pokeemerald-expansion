LoralGym_MapScripts::
	.byte 0


LoralSponsor::
	lockall
	faceplayer
	msgbox LoralSponsor_Text_0
	goto_if_unset FLAG_UNUSED_0x1E0, LoralSponsor_2
	msgbox LoralSponsor_Text_2
LoralSponsor_1:
	waitmessage
	releaseall
	end

LoralSponsor_2:
	msgbox LoralSponsor_Text_1
	waitmessage
	giveitem ITEM_SODA_POP, 1
	setflag FLAG_UNUSED_0x1E0
	goto LoralSponsor_1


Leader_Ross::
	lockall
	compare VAR_ROUTE103_STATE, 0
	goto_if_eq Leader_Ross_1
	msgbox Leader_Ross_Text_0
	releaseall
	end

Leader_Ross_1:
	goto Leader_RossBattle
	return


Leader_RossBattle::
	lockall
	faceplayer
	msgbox Leader_RossBattle_Text_0
	trainerbattle_single TRAINER_BRICE, Leader_RossBattle_Text_1, Leader_RossBattle_Text_2, Loral_Victory
	releaseall
	end


Loral_Victory::
	lockall
	setflag FLAG_BADGE04_GET
	msgbox Loral_Victory_Text_0
	waitmessage
	giveitem ITEM_HM03, 1
	giveitem ITEM_TM56, 1
	waitfanfare
	msgbox Loral_Victory_Text_1
	call Common_EventScript_PlayGymBadgeFanfare
	setvar VAR_ROUTE103_STATE, 1
	msgbox Leader_Ross_Text_0
	waitmessage
	releaseall
	end


LoralSponsor_Text_0:
	.string "Hey, Champ-In-The-Making! I was\n"
	.string "wondering where you were! Leader Ross'\l"
	.string "battle style is torrential! Hope you\l"
	.string "saved up for a rainy day!$"

LoralSponsor_Text_1:
	.string "Here, stay hydrated!$"

LoralSponsor_Text_2:
	.string "Hey, Champ-In-The-Making! I was\n"
	.string "wondering where you were! Leader Ross'\l"
	.string "battle style is totally torrential!\l"
	.string "Hope you saved up for a rainy day!$"

Leader_Ross_Text_0:
	.string "You should have no issues wherever\n"
	.string "your journey takes you next. Good\l"
	.string "luck!$"

Leader_RossBattle_Text_0:
	.string "I already heard all about your success\n"
	.string "at Lush Valley! I'm gonna be honest, I\l"
	.string "had no real expectation for you to\l"
	.string "actually pull that off! So, I figured\l"
	.string "I'd send my Trainers home for the day.\l"
	.string "Yup, that's right. You've done enough\l"
	.string "as it is, all you have left is to\l"
	.string "challenge me and earn my badge for\l"
	.string "your PassID.$"

Leader_RossBattle_Text_1:
	.string "I won't go easy on you!$"

Leader_RossBattle_Text_2:
	.string "Hah! Just as I expected.$"

Loral_Victory_Text_0:
	.string "Here, take these. They're my favorite\n"
	.string "moves! I know you'll use them well.$"

Loral_Victory_Text_1:
	.string "You got the Bay Badge! Pokémon up to\n"
	.string "Level 50 will now obey you.$"
