PowerPlantInterior_MapScripts::
	.byte 0


PowerPlantSNSLt::
	trainerbattle_double TRAINER_GRUNT_SEAFLOOR_CAVERN_2, PowerPlantSNSLt_Text_0, PowerPlantSNSLt_Text_1, PowerPlantSNSLt_Text_2, PowerPlantRetreat
	releaseall
	end


PowerPlantRetreat::
	msgbox PowerPlantRetreat_Text_0
	waitmessage
	fadescreen FADE_TO_BLACK
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	clearflag FLAG_UNUSED_0x274
	setflag FLAG_UNUSED_0x273
	setvar VAR_UNUSED_0x40FC, 0
	fadescreen FADE_FROM_BLACK
	waitmessage
	releaseall
	end


PowerPlantInteriorGuard::
	lockall
	faceplayer
	msgbox PowerPlantInteriorGuard_Text_0
	waitmessage
	releaseall
	end


PowerPlantZigGrunt::
	lockall
	faceplayer
	msgbox PowerPlantZigGrunt_Text_0
	waitmessage
	releaseall
	end


PowerPlantZigfight::
	lockall
	msgbox PowerPlantZigfight_Text_0
	waitmessage
	releaseall
	end


PowerPlantSNSGrunt1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, PowerPlantSNSGrunt1_Text_0, PowerPlantSNSGrunt1_Text_1
	releaseall
	end


PowerPlantSNSGrunt2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, PowerPlantSNSGrunt2_Text_0, PowerPlantSNSGrunt2_Text_1
	releaseall
	end


PowerPlantSNSLt_Text_0:
	.string "You're too late! I've already filled\n all of the batteries. We got what\p"
	.string "    we needed but I can still show\n off a little on our way out!$"

PowerPlantSNSLt_Text_1:
	.string "I won't forget this!$"

PowerPlantSNSLt_Text_2:
	.string "Seems like you're too weak right\nnow.\p Go heal up or something\n and come back.$"

PowerPlantRetreat_Text_0:
	.string "Grunts, let's go!$"

PowerPlantInteriorGuard_Text_0:
	.string "These thugs came out of nowhere! That\n"
	.string "one up at the generator is siphoning\l"
	.string "power to fill some sort of batteries!\l"
	.string "They already drove all of the workers\l"
	.string "off, please help me!$"

PowerPlantZigGrunt_Text_0:
	.string "Don't even try it! I might be tied up\n"
	.string "with this guard right now, but you\l"
	.string "better believe that there's more than\l"
	.string "enough Syndicate members here to deal\l"
	.string "with you if you decide to intervene!$"

PowerPlantZigfight_Text_0:
	.string "The Zigzagoon and Poochyena are\n"
	.string "battling viciously. Trying to get\l"
	.string "between them could get you seriously\l"
	.string "hurt.$"

PowerPlantSNSGrunt1_Text_0:
	.string "Go no further!$"

PowerPlantSNSGrunt1_Text_1:
	.string "Fine, go a little\n further.$"

PowerPlantSNSGrunt2_Text_0:
	.string "I've grown stronger since\n the cave!$"

PowerPlantSNSGrunt2_Text_1:
	.string "But so have you...$"
