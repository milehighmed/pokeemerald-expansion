DunetownMart_MapScripts::
	.byte 0


Dunetown_Mart_Employee::
	lock
	faceplayer
	message Dunetown_Mart_Employee_Text_0
	waitmessage
	pokemart Dunetown_Mart
	msgbox Dunetown_Mart_Employee_Text_1
	release
	end


.align 2
Dunetown_Mart::
    .2byte ITEM_POTION
    .2byte ITEM_ANTIDOTE
    .2byte ITEM_PARALYZE_HEAL
    .2byte ITEM_POKE_BALL
    .2byte ITEM_NONE
    release
    end

Dunetown_Mart_Employee_Text_0:
	.string "What can I get for you?$"

Dunetown_Mart_Employee_Text_1:
	.string "Come again soon!$"
