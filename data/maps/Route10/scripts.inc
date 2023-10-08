Route10_MapScripts::
	.byte 0


Route10Item::
	lockall
	giveitem ITEM_POTION, 1
	removeobject 3
	setflag FLAG_UNUSED_0x299
	waitmessage
	releaseall
	end


Route10BattleLassShannon::
	trainerbattle_single TRAINER_SHANNON, Route10BattleLassShannon_Text_0, Route10BattleLassShannon_Text_1
	waitmessage
	end


Route10BattleSchoolKidJerry::
	trainerbattle_single TRAINER_JERRY_1, Route10BattleSchoolKidJerry_Text_0, Route10BattleSchoolKidJerry_Text_1
	waitmessage
	end


Route10BattleYoungsterCalvin::
	trainerbattle_single TRAINER_CALVIN_1, Route10BattleYoungsterCalvin_Text_0, Route10BattleYoungsterCalvin_Text_1
	waitmessage
	end


Route10BattleLassShannon_Text_0:
	.string "Hey! Congrats on getting your PassID.\p I passed too, let's celebrate!$"

Route10BattleLassShannon_Text_1:
	.string "Such natural talent!$"

Route10BattleSchoolKidJerry_Text_0:
	.string "I live in the Dunetown district!\p My brother's working for the \p Leader for his school project!$"

Route10BattleSchoolKidJerry_Text_1:
	.string "My brother's out here with me! \p You won't beat him!$"

Route10BattleYoungsterCalvin_Text_0:
	.string "I'm a student researcher for Leader Mikey!\p I'm gathering data on the strange \p winds in this area!$"

Route10BattleYoungsterCalvin_Text_1:
	.string "Ugh, looks like my brother and I\p will have to head back early now.$"
