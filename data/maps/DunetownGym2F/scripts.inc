DunetownGym2F_MapScripts::
	.byte 0


GymResearcher2F::
	lockall
	trainerbattle_single TRAINER_MARK, GymResearcher2F_Text_0, GymResearcher2F_Text_1
	releaseall
	end


GymResearcher2F_Text_0:
	.string "Will you help me with\n an experiment?$"

GymResearcher2F_Text_1:
	.string "A startling discovery!$"
