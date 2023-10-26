WattJunction_MapScripts::
	.byte 0


WJGentleman::
	lockall
	faceplayer
	msgbox WJGentleman_Text_0
	waitmessage
	releaseall
	end


WJOldLady::
	lockall
	faceplayer
	msgbox WJOldLady_Text_0
	waitmessage
	releaseall
	end


WJGirl::
	lockall
	faceplayer
	msgbox WJGirl_Text_0
	waitmessage
	releaseall
	end


WJWoman::
	lockall
	faceplayer
	msgbox WJWoman_Text_0
	waitmessage
	releaseall
	end


WJBoy::
	lockall
	faceplayer
	msgbox WJBoy_Text_0
	waitmessage
	releaseall
	end


WJGymSign::
	lockall
	msgbox WJGymSign_Text_0
	waitmessage
	releaseall
	end


Route15Guard::
	lockall
	faceplayer
	msgbox Route15Guard_Text_0
	releaseall
	end


Route15_BlockPath::
	lockall
	faceplayer
	goto_if_set FLAG_BADGE02_GET, Route15_Stop
	msgbox Route15_BlockPath_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Route15_GoBack
	waitmessage
	releaseall
	end


Route15_Stop::
	msgbox Route15_Stop_Text_0
	waitmessage
	releaseall
	end


Route15_GoBack::
	walk_down
	return


WJGentleman_Text_0:
	.string "Can't you see I'm in a hurry! What? To\n"
	.string "where? Hah! Shows what you know. The\l"
	.string "most important part of being busy is\l"
	.string "LOOKING busy!$"

WJOldLady_Text_0:
	.string "When I was a young girl I let my pet\n"
	.string "Wooper free into the water by the\l"
	.string "Power Plant, thinking it would swim\l"
	.string "downstream and find somewhere nice to\l"
	.string "live. Imagine my surprise when I found\l"
	.string "out that Wooper thrive there now!\l"
	.string "Their damp, squishy body and Ground\l"
	.string "typing allows them to eat Electric\l"
	.string "types! Now the Nova City Bureau of\l"
	.string "Wildlife Management is calling them an\l"
	.string "invasive species... Can Pokémon even be\l"
	.string "an invasive species...?$"

WJGirl_Text_0:
	.string "My older sister's boyfriend broke up\n"
	.string "with her, so she cut all her hair off and\l"
	.string "left town to start her own Pokémon\l"
	.string "journey.$"

WJWoman_Text_0:
	.string "I've lived in Watt Junction all of my\n"
	.string "life! It perfectly suits my busy\l"
	.string "personality.$"

WJBoy_Text_0:
	.string "I want to go on a journey, but I don't\n"
	.string "have a Pokémon of my own and the ones\l"
	.string "around here are too strong to catch\l"
	.string "without weakening them first!$"

WJGymSign_Text_0:
	.string "Watt Junction Power Company: Home of\n"
	.string "Niko, the Electric Leader$"

Route15Guard_Text_0:
	.string "I check PassIDs.$"

Route15_BlockPath_Text_0:
	.string "STOP! You haven't been authorized by\n"
	.string "Leader Niko to leave Watt Junction.$"

Route15_Stop_Text_0:
	.string "Hold on. I need to check your PassID...\n"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Alright, go ahead.$"
