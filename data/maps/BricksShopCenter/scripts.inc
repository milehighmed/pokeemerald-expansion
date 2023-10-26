BricksShopCenter_MapScripts::
	.byte 0


BricksMerchant1::
	lock
	faceplayer
	msgbox BricksMerchant1_Text_0
	waitmessage
	pokemart Stone_Mart
	msgbox BricksMerchant1_Text_1
	release
	end


.align 2
Stone_Mart::
    .align 2
    .2byte ITEM_FIRE_STONE
    .2byte ITEM_WATER_STONE
    .2byte ITEM_THUNDER_STONE
    .2byte ITEM_LEAF_STONE
    .2byte ITEM_MOON_STONE
    .2byte ITEM_ICE_STONE
    .2byte ITEM_DUSK_STONE
    .2byte ITEM_DAWN_STONE
    .2byte ITEM_SUN_STONE
    .2byte ITEM_NONE
    release
    end

BricksMerchant1_Text_0:
	.string "I'm an exotic stone merchant. What can\n"
	.string "I get for you?$"

BricksMerchant1_Text_1:
	.string "Come again soon!$"
