Route11_MapScripts::
	.byte 0


Route11Item::
	lockall
	giveitem ITEM_POKE_BALL, 1
	removeobject 1
	setflag FLAG_UNUSED_0x49A
	waitmessage
	releaseall
	end


Route11BattleHikerSawyer::
	trainerbattle_single TRAINER_SAWYER_1, Route11BattleHikerSawyer_Text_0, Route11BattleHikerSawyer_Text_1
	waitmessage
	end


Route11BattleBattleGirlJocelyn::
	trainerbattle_single TRAINER_JOCELYN, Route11BattleBattleGirlJocelyn_Text_0, Route11BattleBattleGirlJocelyn_Text_1
	waitmessage
	end


Route11BattleHikerSawyer_Text_0:
	.string "The winds in the desert are broken up\p By Nova City's natural outer rock walls!$"

Route11BattleHikerSawyer_Text_1:
	.string "You're a force of nature!$"

Route11BattleBattleGirlJocelyn_Text_0:
	.string "I come here to to train and get \pa break from the sand in \pDunetown!$"

Route11BattleBattleGirlJocelyn_Text_1:
	.string "Looks like I should've gone \pelsewhere..$"
