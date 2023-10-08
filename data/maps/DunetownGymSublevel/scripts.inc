DunetownGymSublevel_MapScripts::
	.byte 0


GymResearcherSublevel::
	lockall
	trainerbattle_single TRAINER_STEVE_2, GymResearcherSublevel_Text_0, GymResearcherSublevel_Text_1
	releaseall
	end


GymResearcherSublevel_Text_0:
	.string "My research must continue!$"

GymResearcherSublevel_Text_1:
	.string "This data is invaluable,\n thank you.$"
