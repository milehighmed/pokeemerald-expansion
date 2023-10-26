LakeLoralPokemart_MapScripts::
	.byte 0


Loral_MartGirl::
	lockall
	faceplayer
	msgbox Loral_MartGirl_Text_0
	releaseall
	end


Loral_Mart_Employee::
	lock
	faceplayer
	message Loral_Mart_Employee_Text_0
	waitmessage
	pokemart Loral_Mart
	msgbox Loral_Mart_Employee_Text_1
	release
	end


.align 2
Loral_Mart::
    .align 2
    .2byte ITEM_POTION
    .2byte ITEM_SUPER_POTION
    .2byte ITEM_ANTIDOTE
    .2byte ITEM_AWAKENING
    .2byte ITEM_PARALYZE_HEAL
    .2byte ITEM_BURN_HEAL
    .2byte ITEM_POKE_BALL
    .2byte ITEM_GREAT_BALL
    .2byte ITEM_NET_BALL
    .2byte ITEM_DUSK_BALL
    .2byte ITEM_NONE
    release
    end

Loral_MartGirl_Text_0:
	.string "At this point I just check the\n"
	.string "clearance section out of habit. I don't\l"
	.string "think I've seen anything good in one\l"
	.string "for years!$"

Loral_Mart_Employee_Text_0:
	.string "What can I get for you?$"

Loral_Mart_Employee_Text_1:
	.string "Come again soon!$"
