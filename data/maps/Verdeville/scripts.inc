Verdeville_MapScripts::
	.byte 0


VerdevilleSign::
	lockall
	msgbox VerdevilleSign_Text_0
	releaseall
	end


BeauxSign::
	lockall
	msgbox BeauxSign_Text_0
	releaseall
	end


BeauxBlock::
	lockall
	faceplayer
	msgbox BeauxBlock_Text_0
	waitmessage
	releaseall
	end


VerdeGirl1::
	lockall
	faceplayer
	msgbox VerdeGirl1_Text_0
	waitmessage
	releaseall
	end


VerdevilleSign_Text_0:
	.string "Verdeville: Grow and Thrive!$"

BeauxSign_Text_0:
	.string "Beaux's House$"

BeauxBlock_Text_0:
	.string "Beaux isn't home right now, he left for\n"
	.string "Sunbeam Forest. You can look for him\l"
	.string "there if you don't want to wait around!$"

VerdeGirl1_Text_0:
	.string "I visited Lush Valley once from Nova\n"
	.string "City and fell in love with this place.\l"
	.string "Now I live here! The secret to getting\l"
	.string "out of the City is not telling anyone\l"
	.string "and just going for it!$"
