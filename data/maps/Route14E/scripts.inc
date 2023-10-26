Route14E_MapScripts::
	.byte 0


BeachBattle1::
	trainerbattle_single TRAINER_MARIA_1, BeachBattle1_Text_0, BeachBattle1_Text_1
	releaseall
	end


BeachBattle2::
	trainerbattle_single TRAINER_NED, BeachBattle2_Text_0, BeachBattle2_Text_1
	releaseall
	end


BeachBattle1_Text_0:
	.string "If you keep moving the hot sand\nisn't so bad!$"

BeachBattle1_Text_1:
	.string "I got burned!$"

BeachBattle2_Text_0:
	.string "Beware poison types in the water!$"

BeachBattle2_Text_1:
	.string "Ouch! I got stung!$"
