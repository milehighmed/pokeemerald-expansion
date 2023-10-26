Route14_MapScripts::
	.byte 0


Route14Camper::
	trainerbattle_single TRAINER_DREW, Route14Camper_Text_0, Route14Camper_Text_1
	releaseall
	end


Route14Camper_Text_0:
	.string "Sweet seclusion!$"

Route14Camper_Text_1:
	.string "Two's a company!$"
