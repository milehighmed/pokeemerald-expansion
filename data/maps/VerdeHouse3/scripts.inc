VerdeHouse3_MapScripts::
	.byte 0


VerdeRiolu::
	lockall
	goto_if_unset FLAG_UNUSED_0x1DE, VerdeRiolu_2
	hidemonpic
	msgbox VerdeRiolu_Text_3
VerdeRiolu_1:
	waitmessage
	releaseall
	end

VerdeRiolu_2:
	showmonpic SPECIES_RIOLU, 10, 3
	msgbox VerdeRiolu_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq VerdeRiolu_6
VerdeRiolu_5:
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq VerdeRiolu_9
VerdeRiolu_8:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq VerdeRiolu_11
	goto VerdeRiolu_1

VerdeRiolu_6:
	givemon SPECIES_RIOLU, 20, ITEM_SOOTHE_BELL
	goto VerdeRiolu_5

VerdeRiolu_9:
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdeRiolu_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x1DE
	call NicknamePartyMon
	goto VerdeRiolu_8

VerdeRiolu_11:
	playfanfare MUS_OBTAIN_ITEM
	msgbox VerdeRiolu_Text_2
	removeobject 1
	setflag FLAG_UNUSED_0x1DE
	call NicknamePartyMon
	goto VerdeRiolu_1


VerdeDiary::
	lockall
	msgbox VerdeDiary_Text_0
	waitmessage
	releaseall
	end


VerdeRiolu_Text_0:
	.string "Will you let Riolu join you?$"

VerdeRiolu_Text_1:
	.string "You received Riolu! A strong desire\n"
	.string "emanates from its Pokéball. You feel as\l"
	.string "if it wants to search for its original\l"
	.string "owner!$"

VerdeRiolu_Text_2:
	.string "You received Riolu! A strong desire\n"
	.string "emanates from its Pokéball. You feel as\l"
	.string "if it wants to search for its original\l"
	.string "owner! Riolu was sent to the PC.$"

VerdeRiolu_Text_3:
	.string "What if the trainer comes back for it?$"

VerdeDiary_Text_0:
	.string "I had that dream again, about the shack\n"
	.string "in Darkspore Forest. From there, I flew\l"
	.string "up into the air, all the way to Silver\l"
	.string "City. All the way to a building I had\l"
	.string "never seen before. I walked right in,\l"
	.string "and went up to the thirteenth floor.\l"
	.string "The elevator doors opened, and I felt\l"
	.string "the air around me become heavy. Then I\l"
	.string "woke up. I must know what's there! I'm\l"
	.string "leaving in the morning. I'm leaving Riolu\l"
	.string "behind, it's too dangerous for it to\l"
	.string "come along. I only hope that the rest\l"
	.string "of my Pokémon are safe with me, I have\l"
	.string "a feeling I'll need them.$"
