EntryCave_MapScripts::
	.byte 0


EntryCaveItem::
	lockall
	giveitem ITEM_POKE_BALL, 1
	removeobject 2
	setflag FLAG_UNUSED_0x298
	waitmessage
	releaseall
	end


EntryCaveBattleRegistrar::
	trainerbattle_single TRAINER_WALTER_1, EntryCaveBattleRegistrar_Text_0, EntryCaveBattleRegistrar_Text_1
	waitmessage
	end


EntryCaveYoungster::
	trainerbattle_single TRAINER_BILLY, EntryCaveYoungster_Text_0, EntryCaveYoungster_Text_1
	waitmessage
	end


EntryCaveBattleNurse::
	trainerbattle_single TRAINER_DAISY, EntryCaveBattleNurse_Text_0, EntryCaveBattleNurse_Text_1
	msgbox EntryCaveBattleNurse_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EntryCaveBattleNurse_1
	msgbox EntryCaveBattleNurse_Text_4, MSGBOX_NPC
	return

EntryCaveBattleNurse_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	playfanfare MUS_HEAL
	msgbox EntryCaveBattleNurse_Text_3
	waitmessage
	release
	end


Sponsor_Intro::
	lockall
	faceplayer
	msgbox Sponsor_Intro_Text_0
	waitmessage
	releaseall
	end


EntryCave_LeagueSponsor::
	goto_if_set FLAG_UNUSED_0x4A7, Entry_Intro
	return


Entry_Intro::
	lockall
	applymovement 1, Entry_Right
	faceplayer
	msgbox Entry_Intro_Text_0
	giveitem ITEM_FRESH_WATER, 1
	applymovement 1, Entry_Left
	clearflag FLAG_UNUSED_0x4A7
	setvar VAR_UNUSED_0x404E, 1
	waitmessage
	releaseall
	end


Entry_Right:
	walk_right
	face_down
	step_end

Entry_Left:
	walk_left
	face_right
	step_end

EntryCaveBattleRegistrar_Text_0:
	.string "I'm the Registrar for this sector.\p If you want to enter Nova City,\p you'll first have to go through\p me!$"

EntryCaveBattleRegistrar_Text_1:
	.string "Well done, you've earned your PassID.$"

EntryCaveYoungster_Text_0:
	.string "Are you here to get your PassID too?$"

EntryCaveYoungster_Text_1:
	.string "I thought you'd be a good warm-up \p but you flattened me!$"

EntryCaveBattleNurse_Text_0:
	.string "I'm a traveling nurse, \p I'm trying to come to Nova City\p for work. If you can beat me, \p I'll heal your Pokémon!$"

EntryCaveBattleNurse_Text_1:
	.string "A deal's a deal!$"

EntryCaveBattleNurse_Text_2:
	.string "Would you like me to heal your party?$"

EntryCaveBattleNurse_Text_3:
	.string "I'll be here if you need me!$"

EntryCaveBattleNurse_Text_4:
	.string "Have a nice day$"

Sponsor_Intro_Text_0:
	.string "Who me? Well, depending on how well you\n"
	.string "do here, I'll be your sponsor! It'll be\l"
	.string "like I'm always one step ahead of you,\l"
	.string "because I am! I'll be at all your Gym\l"
	.string "appearances, cheering you on! But\l"
	.string "listen... there's a lot riding on this, so\l"
	.string "do great things, okay?$"

Entry_Intro_Text_0:
	.string "Hey there! I can tell just by looking at\n"
	.string "you that you're not from around these\l"
	.string "parts. Nevermind that there would be\l"
	.string "no reason for you to be here if you\l"
	.string "weren't a newcomer...\p"
	.string "...\p"
	.string "...\p"
	.string "Anyways! Welcome. This cave serves as\n"
	.string "the exam grounds for you to obtain\l"
	.string "your PassID, which will allow you entry\l"
	.string "into the Dunetown district that lies\l"
	.string "just beyond here! You came at a great\l"
	.string "time, there are only two other\l"
	.string "candidates here currently. You'll find\l"
	.string "the Registrar at the very opposite end\l"
	.string "of the cave. Here, you look parched.\l"
	.string "Good luck and see you around!$"
