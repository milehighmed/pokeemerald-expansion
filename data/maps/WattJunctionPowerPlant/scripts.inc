WattJunctionPowerPlant_MapScripts::
	.byte 0


PowerPlantGuard::
	lockall
	faceplayer
	msgbox PowerPlantGuard_Text_0
	releaseall
	end


PowerPlant_BlockPath::
	lockall
	faceplayer
	goto_if_set FLAG_BADGE02_GET, PowerPlant_Stop
	msgbox PowerPlant_BlockPath_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Route13_GoBack
	waitmessage
	releaseall
	end


PowerPlant_Stop::
	msgbox PowerPlant_Stop_Text_0
	setvar VAR_UNUSED_0x40FC, 0
	waitmessage
	releaseall
	end


PowerPlantItem::
	lockall
	giveitem ITEM_MAGNET, 1
	removeobject 1
	setflag FLAG_UNUSED_0x268
	waitmessage
	releaseall
	end


PowerPlantSNS::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, PowerPlantSNS_Text_0, PowerPlantSNS_Text_1
	releaseall
	end


PowerPlantGuard_Text_0:
	.string "I check PassIDs.$"

PowerPlant_BlockPath_Text_0:
	.string "STOP! You haven't been authorized by\n"
	.string "Leader Niko to enter the Power Plant.$"

PowerPlant_Stop_Text_0:
	.string "Hold on. I need to check your PassID...\n"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Alright, go ahead.$"

PowerPlantSNS_Text_0:
	.string "Hey! I know you!\n From the cave!$"

PowerPlantSNS_Text_1:
	.string "Please don't go\n in there!$"
