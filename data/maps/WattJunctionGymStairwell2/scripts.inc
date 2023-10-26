WattJunctionGymStairwell2_MapScripts::
	.byte 0


WJQuestion2::
	lockall
	msgbox WJQuestion2_Text_0
	waitmessage
	releaseall
	end


WJNosepass::
	lockall
	showmonpic SPECIES_NOSEPASS, 10, 3
	msgbox WJNosepass_Text_0
	waitmessage
	hidemonpic
	releaseall
	end


WJGrubbin::
	lockall
	showmonpic SPECIES_GRUBBIN, 10, 3
	msgbox WJGrubbin_Text_0
	waitmessage
	hidemonpic
	releaseall
	end


WJQuestion2_Text_0:
	.string "Question 2: Which Pokémon isn't an\n"
	.string "Electric type, but evolves into one\l"
	.string "later?$"

WJNosepass_Text_0:
	.string "NOSEPASS$"

WJGrubbin_Text_0:
	.string "GRUBBIN$"
