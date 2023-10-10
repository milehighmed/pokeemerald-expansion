DunetownGymSublevel_MapScripts::
	.byte 0


DunetownGymTrainer2::
	lockall
	trainerbattle_single TRAINER_STEVE_2, DunetownGymTrainer2_Text_0, DunetownGymTrainer2_Text_1
	releaseall
	end


DunetownGymTrainer2_Text_0:
	.string "My research must continue!$"

DunetownGymTrainer2_Text_1:
	.string "This data is invaluable,\n thank you.$"
