VerdeHouse2_MapScripts::
	.byte 0


VerdeNurse::
	lockall
	faceplayer
	msgbox VerdeNurse_Text_0
	waitmessage
	msgbox VerdeNurse_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq VerdeNurse_1
	msgbox VerdeNurse_Text_3, MSGBOX_NPC
	return

VerdeNurse_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	playfanfare MUS_HEAL
	msgbox VerdeNurse_Text_2
	waitmessage
	release
	end


VerdeNurse_Text_0:
	.string "I'm an herbalist, and I specialize in\n"
	.string "medicinal herbs. I can help your team\l"
	.string "get back into fighting shape!$"

VerdeNurse_Text_1:
	.string "Would you like me to heal your party?$"

VerdeNurse_Text_2:
	.string "I'll be here if you need me!$"

VerdeNurse_Text_3:
	.string "Have a nice day$"
