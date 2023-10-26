WattJunctionGymGrFloor_MapScripts::
	.byte 0


WJReceptionist::
	lockall
	faceplayer
	msgbox WJReceptionist_Text_0
	waitmessage
	releaseall
	end


WJCamper::
	lockall
	faceplayer
	msgbox WJCamper_Text_0
	waitmessage
	releaseall
	end


WJGymBoy::
	lockall
	faceplayer
	msgbox WJGymBoy_Text_0
	waitmessage
	releaseall
	end


WJSponsor::
	lockall
	faceplayer
	msgbox WJSponsor_Text_0
	goto_if_unset FLAG_UNUSED_0x4DA, WJSponsor_2
	msgbox WJSponsor_Text_0
WJSponsor_1:
	waitmessage
	releaseall
	end

WJSponsor_2:
	msgbox WJSponsor_Text_1
	waitmessage
	giveitem ITEM_FRESH_WATER, 1
	setflag FLAG_UNUSED_0x4DA
	goto WJSponsor_1


WJReceptionist_Text_0:
	.string "Welcome to Watt Junction Power\n"
	.string "Company. Leader Niko is currently\l"
	.string "accepting challengers on a walk-in\l"
	.string "basis. Don't be surprised if he isn't\l"
	.string "happy about the intrusion though...$"

WJCamper_Text_0:
	.string "Niko wiped the floor with my team! I\n"
	.string "should've brought more than just the\l"
	.string "Ground types I found in Darkspore\l"
	.string "Tunnel.$"

WJGymBoy_Text_0:
	.string "I'm so nervous, I can't even stand! Let\n"
	.string "alone walk up all those stairs...$"

WJSponsor_Text_0:
	.string "Hey! Glad you made it\n"
	.string "Champ-In-The-Making! Quick word of\l"
	.string "advice, Niko's battle style revolves\l"
	.string "around pivoting his members of his\l"
	.string "team in and out of battle, so that he\l"
	.string "always has the best match-up possible!\l"
	.string "If you want to come out on top, you'll\l"
	.string "need to have an answer to his switches\l"
	.string "ready to go! Ground types will help, but\l"
	.string "they won't win you this battle all on\l"
	.string "their own!$"

WJSponsor_Text_1:
	.string "Here, stay hydrated!$"
