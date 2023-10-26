WattJunctionGymleader_MapScripts::
	.byte 0


Leader_Niko::
	lockall
	compare VAR_UNUSED_0x409B, 0
	goto_if_eq Leader_Niko_1
	msgbox Leader_Niko_Text_0
	releaseall
	end

Leader_Niko_1:
	goto Leader_NikoBattle
	return


Leader_NikoBattle::
	lockall
	faceplayer
	msgbox Leader_NikoBattle_Text_0
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, Leader_NikoBattle_Text_1, Leader_NikoBattle_Text_2, WJ_Victory
	releaseall
	end


WJ_Victory::
	lockall
	setflag FLAG_BADGE02_GET
	msgbox WJ_Victory_Text_0
	waitmessage
	giveitem ITEM_TM51, 1
	waitfanfare
	msgbox WJ_Victory_Text_1
	call Common_EventScript_PlayGymBadgeFanfare
	setvar VAR_UNUSED_0x409B, 1
	setflag FLAG_UNUSED_0x274
	clearflag FLAG_UNUSED_0x273
	setvar VAR_UNUSED_0x40FC, 1
	msgbox WJ_Victory_Text_2
	waitmessage
	releaseall
	end


WJWorker1::
	lockall
	faceplayer
	msgbox WJWorker1_Text_0
	waitmessage
	releaseall
	end


WJWorker2::
	lockall
	faceplayer
	msgbox WJWorker2_Text_0
	waitmessage
	releaseall
	end


WJWorker3::
	lockall
	faceplayer
	msgbox WJWorker3_Text_0
	waitmessage
	releaseall
	end


WJWorker4::
	lockall
	faceplayer
	msgbox WJWorker4_Text_0
	waitmessage
	releaseall
	end


Leader_Niko_Text_0:
	.string "Can't you see I'm busy? Get out there\n"
	.string "and continue on your journey!$"

Leader_NikoBattle_Text_0:
	.string "Not another Trainer! I can't get\n"
	.string "anything done around here with all of\l"
	.string "you coming to challenge me. I even set\l"
	.string "up that trivia stuff in the stairwells\l"
	.string "to try to slow you down... This job is\l"
	.string "turning out to be more trouble than\l"
	.string "it's worth. Whatever, I'll just channel\l"
	.string "my frustration through battle! Come at\l"
	.string "me!$"

Leader_NikoBattle_Text_1:
	.string "I'll show you why\nI'm the boss!$"

Leader_NikoBattle_Text_2:
	.string "Yeesh. Looking for a job?$"

WJ_Victory_Text_0:
	.string "Here, you've earned these.$"

WJ_Victory_Text_1:
	.string "You got the Ohm Badge! Pokémon up to\n"
	.string "Level 30 will obey you.$"

WJ_Victory_Text_2:
	.string "Before you move on, you should see\n"
	.string "about getting yourself a Pokémon that\l"
	.string "can learn Interface. I've added Power\l"
	.string "Plant access onto your PassID, that's\l"
	.string "a good place to look. Remember,\l"
	.string "Interface is a manmade technique, so\l"
	.string "not very many Pokémon can learn it, and\l"
	.string "not all Electric types can learn it\l"
	.string "either. Manmade Pokémon, like Porygon,\l"
	.string "and Machine-like Pokémon like Voltorb\l"
	.string "can learn it no problem.$"

WJWorker1_Text_0:
	.string "Are you crazy! Mr. Niko is right there,\n"
	.string "don't bother me while I'm working!$"

WJWorker2_Text_0:
	.string "Please leave me alone, I have a lot to\n"
	.string "get done.$"

WJWorker3_Text_0:
	.string "I don't know what to tell you, I'm not a\n"
	.string "trainer. I just work here.$"

WJWorker4_Text_0:
	.string "Prepare to battle! Haha, just kidding. I\n"
	.string "don't get paid enough to battle.$"
