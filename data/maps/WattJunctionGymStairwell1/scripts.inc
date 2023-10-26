WattJunctionGymStairwell1_MapScripts::
	.byte 0


WJQuestion1::
	lockall
	msgbox WJQuestion1_Text_0
	waitmessage
	releaseall
	end


WJBlitzle::
	lockall
	showmonpic SPECIES_BLITZLE, 10, 3
	msgbox WJBlitzle_Text_0
	waitmessage
	hidemonpic
	releaseall
	end


WJVoltorb::
	lockall
	showmonpic SPECIES_VOLTORB, 10, 3
	msgbox WJVoltorb_Text_0
	waitmessage
	hidemonpic
	releaseall
	end


WJQuestion1_Text_0:
	.string "Question 1: Which Pokémon CANNOT be\n"
	.string "found outside of the Power Plant?$"

WJBlitzle_Text_0:
	.string "BLITZLE$"

WJVoltorb_Text_0:
	.string "VOLTORB$"
