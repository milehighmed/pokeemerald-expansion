NewMap3_MapScripts::
	.byte 0


BricksMerchant3::
	lock
	faceplayer
	msgbox BricksMerchant3_Text_0
	waitmessage
	release
	end


BricksMerchant3_Text_0:
	.string "I'm an electronics merchant. I'm not\n"
	.string "quite open yet, but please check back\l"
	.string "soon!$"
