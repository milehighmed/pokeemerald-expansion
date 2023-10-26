HornHouse2_MapScripts::
	.byte 0


HornZig::
	lockall
	faceplayer
	msgbox HornZig_Text_0
	releaseall
	end


ZigLady::
	lockall
	faceplayer
	msgbox ZigLady_Text_0
	releaseall
	end


ZigBoy::
	lockall
	faceplayer
	msgbox ZigBoy_Text_0
	releaseall
	end


ZigItem1::
	lockall
	giveitem ITEM_AMULET_COIN, 1
	setflag FLAG_WONDER_CARD_UNUSED_7
	removeobject 5
	releaseall
	end


ZigItem2::
	lockall
	giveitem ITEM_NORMALIUM_Z, 1
	setflag FLAG_WONDER_CARD_UNUSED_6
	removeobject 4
	releaseall
	end


ZigItem3::
	lockall
	giveitem ITEM_PREMIER_BALL, 1
	setflag FLAG_WONDER_CARD_UNUSED_8
	removeobject 6
	releaseall
	end


HornZig_Text_0:
	.string "Zig! Zagoon!$"

ZigLady_Text_0:
	.string "For my fiftieth birthday, I decided\n"
	.string "that I wanted a Pokémon so that I\l"
	.string "could go on my own journey. But it was\l"
	.string "too hard! Now I keep my Zigzagoon as a\l"
	.string "pet, but whenever we go on walks he\l"
	.string "always picks up items from the ground.\l"
	.string "I don't know what to do with them all!$"

ZigBoy_Text_0:
	.string "Zigzagoon sometimes picks up really\n"
	.string "rare items! I've been holding onto some\l"
	.string "of them, so that I'm ready for when I'm\l"
	.string "old enough for a journey of my own.$"
