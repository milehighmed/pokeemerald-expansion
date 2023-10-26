WattJunctionArena2_MapScripts::
	.byte 0


WJTrainer2::
	trainerbattle_single TRAINER_KIRK, WJTrainer2_Text_0, WJTrainer2_Text_1
	releaseall
	end


WJTrainer2_Text_0:
	.string "Let's up the amplitude!$"

WJTrainer2_Text_1:
	.string "Way to ride the waveform!$"
