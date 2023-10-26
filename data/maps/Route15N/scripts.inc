Route15N_MapScripts::
	.byte 0


Route15N_Item::
	lockall
	giveitem ITEM_GYARADOSITE, 1
	removeobject 3
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1
	releaseall
	end


Route15N_Tuber::
	trainerbattle_single TRAINER_RICKY_1, Route15N_Tuber_Text_0, Route15N_Tuber_Text_1
	releaseall
	end


Route15N_Fisher1::
	trainerbattle_single TRAINER_IVAN, Route15N_Fisher1_Text_0, Route15N_Fisher1_Text_1
	releaseall
	end


Route15N_Fisher2::
	trainerbattle_single TRAINER_CLAUDE, Route15N_Fisher2_Text_0, Route15N_Fisher2_Text_1
	releaseall
	end


Route15N_Tuber_Text_0:
	.string "The sand is so hot!$"

Route15N_Tuber_Text_1:
	.string "I should swim...$"

Route15N_Fisher1_Text_0:
	.string "The fish are biting!$"

Route15N_Fisher1_Text_1:
	.string "You scared them off!$"

Route15N_Fisher2_Text_0:
	.string "I'm a traveling fisherman!$"

Route15N_Fisher2_Text_1:
	.string "I should've stayed home.$"
