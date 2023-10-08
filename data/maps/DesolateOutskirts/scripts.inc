DesolateOutskirts_MapScripts::
	.byte 0


TruckGuy::
	lockall
	applymovement 2, TruckGuy_Exposition
	msgbox TruckGuy_Text_0
	setflag FLAG_UNUSED_0x4A7
	waitmessage
	releaseall
	end


TruckGuy_Exposition:
	face_player
	step_end

TruckGuy_Text_0:
	.string "This is as far as I can take you without\n"
	.string "my truck getting stuck in the sand!\l"
	.string "You oughta head East into town as fast\l"
	.string "as you can manage it! This Sandstorm is\l"
	.string "no joke! Good luck, and welcome to Nova\l"
	.string "City!$"
