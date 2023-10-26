BricksTunnel_MapScripts::
	.byte 0


BricksWarning::
	lockall
	faceplayer
	msgbox BricksWarning_Text_0
	waitmessage
	releaseall
	end


BricksTunnelItem::
	lockall
	giveitem ITEM_TM_DIG, 1
	removeobject 1
	setflag FLAG_UNUSED_0x269
	releaseall
	end


BricksTunnelBattle1::
	trainerbattle_single TRAINER_DUSTY_1, BricksTunnelBattle1_Text_0, BricksTunnelBattle1_Text_1
	releaseall
	end


BricksTunnelBattle2::
	trainerbattle_single TRAINER_ELI, BricksTunnelBattle2_Text_0, BricksTunnelBattle2_Text_1
	releaseall
	end


BricksWarning_Text_0:
	.string "Hey! If you're here that means Leader\n"
	.string "Mikey gave you his blessing to leave\l"
	.string "Dunetown! Congratulations. Now, your\l"
	.string "next move is totally up to you, but you\l"
	.string "should also know that the path up\l"
	.string "ahead is dangerous and full of strong\l"
	.string "opponents! If I were you, I'd head\l"
	.string "North to Watt Junction and challenge\l"
	.string "Leader Niko first. Either way, good luck\l"
	.string "to you!$"

BricksTunnelBattle1_Text_0:
	.string "These tunnels were\ncarved by a\pPokémon!$"

BricksTunnelBattle1_Text_1:
	.string "You carved me\nup!$"

BricksTunnelBattle2_Text_0:
	.string "I'm here training\n before I challenge\p Leader Sam!$"

BricksTunnelBattle2_Text_1:
	.string "I need a new\n approach.$"
