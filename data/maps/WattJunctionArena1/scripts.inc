WattJunctionArena1_MapScripts::
	.byte 0


WJTrainer1::
	trainerbattle_single TRAINER_JOSEPH, WJTrainer1_Text_0, WJTrainer1_Text_1
	releaseall
	end


WJTrainer1_Text_0:
	.string "Resistance is futile!$"

WJTrainer1_Text_1:
	.string "Get it? \nResistance?\p Whatever...$"
