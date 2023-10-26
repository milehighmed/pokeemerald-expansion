GymleaderDunetown_MapScripts::
	.byte 0


Leader_Mikey::
	lockall
	compare VAR_UNUSED_0x408B, 0
	goto_if_eq Leader_Mikey_1
	msgbox Leader_Mikey_Text_0
	releaseall
	end

Leader_Mikey_1:
	goto Leader_MikeyBattle
	return


Leader_MikeyBattle::
	lockall
	faceplayer
	msgbox Leader_MikeyBattle_Text_0
	trainerbattle_single TRAINER_VITO, Leader_MikeyBattle_Text_1, Leader_MikeyBattle_Text_2, Dunetown_Victory
	releaseall
	end


Dunetown_Victory::
	lockall
	setflag FLAG_BADGE01_GET
	msgbox Dunetown_Victory_Text_0
	waitmessage
	giveitem ITEM_TM37, 1
	waitfanfare
	msgbox Dunetown_Victory_Text_1
	call Common_EventScript_PlayGymBadgeFanfare
	setvar VAR_UNUSED_0x408B, 1
	setflag FLAG_UNUSED_0x273
	releaseall
	end


Leader_Mikey_Text_0:
	.string "We're all rooting for you here in\n"
	.string "Dunetown!$"

Leader_MikeyBattle_Text_0:
	.string "Your timing is impeccable! I'm just\n"
	.string "about to leave for another foray into\l"
	.string "the Desolate Desert. We're so close to\l"
	.string "solving the mystery of Nova City's\l"
	.string "natural outer walls. Why do weather\l"
	.string "patterns act the way they do in these\l"
	.string "areas? Why are the changing seasons\l"
	.string "seen in other regions altered here?\l"
	.string "How is it possible for so many biomes to\l"
	.string "be present in a relatively small region?\l"
	.string "These are all questions that I've\l"
	.string "sought to answer ever since I became\l"
	.string "Dunetown's Leader years ago. I could\l"
	.string "really use your help, you know. If you\l"
	.string "can beat me, I'll approve for you to\l"
	.string "leave Dunetown. Otherwise, you'll join\l"
	.string "me and my team as we strike back out\l"
	.string "into the wastes!$"

Leader_MikeyBattle_Text_1:
	.string "Why would you want to leave\n Dunetown?$"

Leader_MikeyBattle_Text_2:
	.string "Your potential is wasted\n here, good luck on your\p journey.$"

Dunetown_Victory_Text_0:
	.string "Here, you've earned these.$"

Dunetown_Victory_Text_1:
	.string "You got the Oasis Badge! Pokemon up to\n"
	.string "Level 18 will obey you.$"
