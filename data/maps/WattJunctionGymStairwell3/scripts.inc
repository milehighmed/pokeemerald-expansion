WattJunctionGymStairwell3_MapScripts::
	.byte 0


WJQuestion3::
	lockall
	showmonpic SPECIES_ROTOM, 10, 3
	msgbox WJQuestion3_Text_0
	waitmessage
	hidemonpic
	releaseall
	end


WJWashingMCHN::
	lockall
	msgbox WJWashingMCHN_Text_0
	waitmessage
	releaseall
	end


WJDishwasher::
	lockall
	msgbox WJDishwasher_Text_0
	waitmessage
	releaseall
	end


WJQuestion3_Text_0:
	.string "Question 3: Rotom can possess\n"
	.string "electronics, allowing it to change\l"
	.string "forms. Which of the following machines\l"
	.string "does Rotom inhabit in order to become a\l"
	.string "Water type?$"

WJWashingMCHN_Text_0:
	.string "WASHING MACHINE$"

WJDishwasher_Text_0:
	.string "DISHWASHER$"
