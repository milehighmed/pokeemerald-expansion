Route12_MapScripts::
	.byte 0


Route12_Sign::
	lockall
	msgbox Route12_Sign_Text_0
	waitmessage
	releaseall
	end


Route12_ManiacBattle::
	trainerbattle_single TRAINER_STEVE_1, Route12_ManiacBattle_Text_0, Route12_ManiacBattle_Text_1
	waitmessage
	end


Route12_BlackBeltBattle::
	trainerbattle_single TRAINER_ZANDER, Route12_BlackBeltBattle_Text_0, Route12_BlackBeltBattle_Text_1
	waitmessage
	end


Route12_KindlerBattle::
	trainerbattle_single TRAINER_COLE, Route12_KindlerBattle_Text_0, Route12_KindlerBattle_Text_1
	waitmessage
	end


Route12_Lass::
	trainerbattle_single TRAINER_BRIDGET, Route12_Lass_Text_0, Route12_Lass_Text_1
	waitmessage
	end


Route12Item1::
	lockall
	giveitem ITEM_TM10, 1
	removeobject 1
	setflag FLAG_UNUSED_0x4A4
	waitmessage
	releaseall
	end


Route12Item2::
	lockall
	giveitem ITEM_POTION, 1
	removeobject 2
	setflag FLAG_UNUSED_0x4A5
	waitmessage
	releaseall
	end


Route12Item3::
	lockall
	giveitem ITEM_GREAT_BALL, 1
	removeobject 3
	setflag FLAG_UNUSED_0x4A6
	waitmessage
	releaseall
	end


OldRod::
	lockall
	faceplayer
	goto_if_unset FLAG_RECEIVED_OLD_ROD, OldRod_1
	msgbox OldRod_Text_1
	waitmessage
	releaseall
	end

OldRod_1:
	msgbox OldRod_Text_0
	waitmessage
	giveitem ITEM_OLD_ROD, 1
	setflag FLAG_RECEIVED_OLD_ROD
	return


Route12_Sign_Text_0:
	.string "TRAINER TIPS: If you're having trouble\n"
	.string "catching a strong Pokémon, remember to\l"
	.string "get it as weak as possible before\l"
	.string "trying to catch it. In addition to\l"
	.string "damage, status conditions like\l"
	.string "Paralysis and Sleep also make a\l"
	.string "Pokémon easier to catch!$"

Route12_ManiacBattle_Text_0:
	.string "I'm here from Watt Junction looking \n for rare Pokémon! $"

Route12_ManiacBattle_Text_1:
	.string "My search will continue!$"

Route12_BlackBeltBattle_Text_0:
	.string "They say the sand is great for cardio!$"

Route12_BlackBeltBattle_Text_1:
	.string "Maybe I need a break...$"

Route12_KindlerBattle_Text_0:
	.string "Don't you love the way the sun\n soaks into rocks like this?$"

Route12_KindlerBattle_Text_1:
	.string "Too hot to handle!$"

Route12_Lass_Text_0:
	.string "There are mischievous Pokémon\n around here!$"

Route12_Lass_Text_1:
	.string "My Oran Berry was stolen \n by a Purrloin!$"

OldRod_Text_0:
	.string "I can't catch anything good with this\n"
	.string "Old Rod! You take it!$"

OldRod_Text_1:
	.string "I hope you have better luck with it\n"
	.string "than I did!$"
