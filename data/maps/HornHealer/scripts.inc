HornHealer_MapScripts::
	.byte 0


HornNurse::
	lockall
	faceplayer
	msgbox HornNurse_Text_0
	waitmessage
	msgbox HornNurse_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq HornNurse_1
	msgbox HornNurse_Text_3, MSGBOX_NPC
	return

HornNurse_1:
	incrementgamestat GAME_STAT_USED_POKECENTER
	special HealPlayerParty
	playfanfare MUS_HEAL
	msgbox HornNurse_Text_2
	waitmessage
	release
	end


HornNurse_Text_0:
	.string "I'm an herbalist, and I specialize in\n"
	.string "medicinal herbs. I can help your team\l"
	.string "get back into fighting shape!$"

HornNurse_Text_1:
	.string "Would you like me to heal your party?$"

HornNurse_Text_2:
	.string "I'll be here if you need me!$"

HornNurse_Text_3:
	.string "Have a nice day$"
