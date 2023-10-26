PowerPlantInteriorL_MapScripts::
	.byte 0


PowerPlantItemL::
	lockall
	giveitem ITEM_TM34, 1
	removeobject 2
	setflag FLAG_UNUSED_0x276
	waitmessage
	releaseall
	end


PowerPlantSNSGrunt4::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, PowerPlantSNSGrunt4_Text_0, PowerPlantSNSGrunt4_Text_1
	releaseall
	end


PowerPlantSNSGrunt4_Text_0:
	.string "I'm the strongest grunt here!$"

PowerPlantSNSGrunt4_Text_1:
	.string "Like it mattered...$"
