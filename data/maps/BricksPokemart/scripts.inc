BricksPokemart_MapScripts::
	.byte 0


Bricks_Mart_Employee::
	lock
	faceplayer
	message Bricks_Mart_Employee_Text_0
	waitmessage
	pokemart Bricks_Mart
	msgbox Bricks_Mart_Employee_Text_1
	release
	end


.align 2
Bricks_Mart::
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

Bricks_Mart_Employee_Text_0:
	.string "What can I get for you?$"

Bricks_Mart_Employee_Text_1:
	.string "Come again soon!$"
