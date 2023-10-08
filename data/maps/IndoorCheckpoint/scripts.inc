IndoorCheckpoint_MapScripts::
	.byte 0


IndoorCheckpoint_Registrar::
	lockall
	msgbox IndoorCheckpoint_Registrar_Text_0
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_NATIONAL_DEX
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_SYS_B_DASH
	setrespawn HEAL_LOCATION_DESOLATE_CHECKPOINT
	releaseall
	return


Registrar_EventScript_Starter1::
	lockall
	goto_if_unset FLAG_UNUSED_0x493, Registrar_EventScript_Starter1_2
	msgbox Registrar_EventScript_Starter1_Text_3
Registrar_EventScript_Starter1_1:
	waitmessage
	releaseall
	end

Registrar_EventScript_Starter1_2:
	showmonpic SPECIES_SEEDOT, 10, 3
	msgbox Registrar_EventScript_Starter1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Registrar_EventScript_Starter1_5
	hidemonpic
	msgbox Registrar_EventScript_Starter1_Text_2
	goto Registrar_EventScript_Starter1_1

Registrar_EventScript_Starter1_5:
	givemon SPECIES_SEEDOT, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Registrar_EventScript_Starter1_8
	goto Registrar_EventScript_Starter1_1

Registrar_EventScript_Starter1_8:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Registrar_EventScript_Starter1_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x493
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMon
	goto Registrar_EventScript_Starter1_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	msgbox NicknameBoxMon_Text_1
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	goto NicknameBoxMon_1


Registrar_EventScript_Starter2::
	lockall
	goto_if_unset FLAG_UNUSED_0x493, Registrar_EventScript_Starter2_2
	msgbox Registrar_EventScript_Starter1_Text_3
Registrar_EventScript_Starter2_1:
	waitmessage
	releaseall
	end

Registrar_EventScript_Starter2_2:
	showmonpic SPECIES_FLETCHLING, 10, 3
	msgbox Registrar_EventScript_Starter2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Registrar_EventScript_Starter2_5
	hidemonpic
	msgbox Registrar_EventScript_Starter1_Text_2
	goto Registrar_EventScript_Starter2_1

Registrar_EventScript_Starter2_5:
	givemon SPECIES_FLETCHLING, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Registrar_EventScript_Starter2_8
	goto Registrar_EventScript_Starter2_1

Registrar_EventScript_Starter2_8:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Registrar_EventScript_Starter2_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x493
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMon
	goto Registrar_EventScript_Starter2_1


Registrar_EventScript_Starter3::
	lockall
	goto_if_unset FLAG_UNUSED_0x493, Registrar_EventScript_Starter3_2
	msgbox Registrar_EventScript_Starter1_Text_3
Registrar_EventScript_Starter3_1:
	waitmessage
	releaseall
	end

Registrar_EventScript_Starter3_2:
	showmonpic SPECIES_GEODUDE, 10, 3
	msgbox Registrar_EventScript_Starter3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Registrar_EventScript_Starter3_5
	hidemonpic
	msgbox Registrar_EventScript_Starter1_Text_2
	goto Registrar_EventScript_Starter3_1

Registrar_EventScript_Starter3_5:
	givemon SPECIES_GEODUDE, 5, ITEM_NONE
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Registrar_EventScript_Starter3_8
	goto Registrar_EventScript_Starter3_1

Registrar_EventScript_Starter3_8:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Registrar_EventScript_Starter3_Text_1
	removeobject 4
	setflag FLAG_UNUSED_0x493
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMon
	goto Registrar_EventScript_Starter3_1


IndoorCheckpoint_Registrar_Text_0:
	.string "Welcome, I'm a PassID registrar.\p"
	.string "What's that?? You don't know what a\n"
	.string "PassID is?\n"
	.string "Okay! I'll explain.\p"
	.string "In other regions, where travel in\n"
	.string "between towns and cities is\l"
	.string "unrestricted, citizens carry Trainer\l"
	.string "IDs that serve as identification in\l"
	.string "addition to records of the Gym Badges\l"
	.string "they've collected over the course of\l"
	.string "their journey. In Nova City, it's up to\l"
	.string "each district's Leader to approve\l"
	.string "individual citizens for travel from\l"
	.string "district to district. Badges serve as\l"
	.string "as proof of approval, and also allow for\l"
	.string "the ownership of stronger Pokémon.\l"
	.string "Over there, you'll find some Pokémon to\l"
	.string "choose from that are available to you\l"
	.string "as a new resident to Nova City.\p"
	.string "Remember! If your Pokémon become too\n"
	.string "powerful for your current licensure,\l"
	.string "you may find that you've lost control\l"
	.string "of them. Authorities will also take\l"
	.string "notice if you use Pokémon unfit for\l"
	.string "your licensure. Good luck!$"

Registrar_EventScript_Starter1_Text_0:
	.string "Do you want to choose Seedot?$"

Registrar_EventScript_Starter1_Text_1:
	.string "Received Seedot!$"

Registrar_EventScript_Starter1_Text_2:
	.string "Let's look around some more.$"

Registrar_EventScript_Starter1_Text_3:
	.string "Don't be greedy!$"

NicknamePartyMon_Text_0:
	.string "Give It a nickname?$"

NicknameBoxMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_1:
	.string "Transferred to PC$"

Registrar_EventScript_Starter2_Text_0:
	.string "Do you want to choose Fletchling?$"

Registrar_EventScript_Starter2_Text_1:
	.string "Received Fletchling!$"

Registrar_EventScript_Starter3_Text_0:
	.string "Do you want to choose Geodude?$"

Registrar_EventScript_Starter3_Text_1:
	.string "Received Geodude!$"
