SmallHouse2_MapScripts::
	.byte 0


WJExpertF::
	lockall
	faceplayer
	msgbox WJExpertF_Text_0
	waitmessage
	releaseall
	end


WJExpertF_Text_0:
	.string "The tall grass outside of the Power\n"
	.string "Plant is teeming with wild Pokémon. Be\l"
	.string "cautious.$"
