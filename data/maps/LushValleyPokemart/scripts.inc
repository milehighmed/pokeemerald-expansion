LushValleyPokemart_MapScripts::
	.byte 0


Lush_Mart_Employee::
	lock
	faceplayer
	message Lush_Mart_Employee_Text_0
	waitmessage
	pokemart Lush_Mart
	msgbox Lush_Mart_Employee_Text_1
	release
	end


.align 2
Lush_Mart::
    .align 2
    .2byte ITEM_OLD_GATEAU
    .2byte ITEM_MOOMOO_MILK
    .2byte ITEM_REVIVAL_HERB
    .2byte ITEM_TART_APPLE
    .2byte ITEM_SWEET_APPLE
    .2byte ITEM_POKE_BALL
    .2byte ITEM_GREAT_BALL
    .2byte ITEM_NET_BALL
    .2byte ITEM_DUSK_BALL
    .2byte ITEM_NONE
    release
    end

Lush_Mart_Employee_Text_0:
	.string "What can I get for you?$"

Lush_Mart_Employee_Text_1:
	.string "Come back now, y'hear!$"
