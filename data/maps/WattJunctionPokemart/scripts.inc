WattJunctionPokemart_MapScripts::
	.byte 0


WJ_MartBoy::
	lockall
	faceplayer
	msgbox WJ_MartBoy_Text_0
	releaseall
	end


WattJunction_Mart_Employee::
	lock
	faceplayer
	message WattJunction_Mart_Employee_Text_0
	waitmessage
	pokemart WJ_Mart
	msgbox WattJunction_Mart_Employee_Text_1
	release
	end


.align 2
WJ_Mart::
    .2byte ITEM_POTION
    .2byte ITEM_ANTIDOTE
    .2byte ITEM_PARALYZE_HEAL
    .2byte ITEM_BURN_HEAL
    .2byte ITEM_POKE_BALL
    .2byte ITEM_GREAT_BALL
    .2byte ITEM_NET_BALL
    .2byte ITEM_NONE
    release
    end

WJ_MartBoy_Text_0:
	.string "What a selection!$"

WattJunction_Mart_Employee_Text_0:
	.string "What can I get for you?$"

WattJunction_Mart_Employee_Text_1:
	.string "Come again soon!$"
