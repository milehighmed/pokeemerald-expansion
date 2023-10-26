OfficeBuilding2SecondFloor_MapScripts::
	.byte 0


WJCardplayer1::
	lockall
	faceplayer
	msgbox WJCardplayer1_Text_0
	waitmessage
	releaseall
	end


WJCardplayer2::
	lockall
	faceplayer
	msgbox WJCardplayer2_Text_0
	waitmessage
	releaseall
	end


WJCardplayer3::
	lockall
	faceplayer
	msgbox WJCardplayer3_Text_0
	waitmessage
	releaseall
	end


WJCardItem::
	lockall
	giveitem ITEM_TM46
	removeobject 1
	setflag FLAG_UNUSED_0x272
	releaseall
	end


WJCardplayer1_Text_0:
	.string "We're playing the Pokémon Card Game.\n"
	.string "It's been hard to build decks ever\l"
	.string "since they stopped selling booster\l"
	.string "packs at the Mart. Too many people\l"
	.string "would just steal them...$"

WJCardplayer2_Text_0:
	.string "Don't tell my friend over there, but I\n"
	.string "got caught stealing cards at the Mart.\l"
	.string "Now they don't even sell cards anymore!\l"
	.string "On the plus side, my deck is better\l"
	.string "than his, so I should be able to keep\l"
	.string "this winning streak going for awhile.$"

WJCardplayer3_Text_0:
	.string "I used to love playing trading card\n"
	.string "games, but boys were always flirting\l"
	.string "with me! I didn't like feeling like they\l"
	.string "were always letting me win.$"
