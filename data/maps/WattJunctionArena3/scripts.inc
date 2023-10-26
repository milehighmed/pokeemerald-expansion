WattJunctionArena3_MapScripts::
	.byte 0


WJTrainer3::
	trainerbattle_single TRAINER_HALEY_1, WJTrainer3_Text_0, WJTrainer3_Text_1
	releaseall
	end


WJTrainer3_Text_0:
	.string "I'm an engineering intern for Watt Junction Power Company!$"

WJTrainer3_Text_1:
	.string "I lied on my resume, my major is in Civil Engineering...$"
