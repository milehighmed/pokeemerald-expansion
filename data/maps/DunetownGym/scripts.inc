DunetownGym_MapScripts::
	.byte 0


GymYoungster1::
	lockall
	trainerbattle_single TRAINER_JOSH, GymYoungster1_Text_0, GymYoungster1_Text_1
	releaseall
	end


GymYoungster2::
	lockall
	trainerbattle_single TRAINER_TOMMY, GymYoungster2_Text_0, GymYoungster2_Text_1
	releaseall
	end


GymElder::
	lockall
	trainerbattle_single TRAINER_TIMOTHY_1, GymElder_Text_0, GymElder_Text_1
	releaseall
	end


GymYoungster1_Text_0:
	.string "You have to get through the students\n first!$"

GymYoungster1_Text_1:
	.string "I still have a lot to learn...$"

GymYoungster2_Text_0:
	.string "Are you grounded enough for this?$"

GymYoungster2_Text_1:
	.string "Six feet under!$"

GymElder_Text_0:
	.string "I've studied the sands my\n whole life!$"

GymElder_Text_1:
	.string "So much that I still don't\n know...$"
