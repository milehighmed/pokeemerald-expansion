BricksShopCenter1F_MapScripts::
	.byte 0


BricksMerchant2::
	lock
	faceplayer
	msgbox BricksMerchant2_Text_0
	waitmessage
	pokemart BricksTM_Mart
	msgbox BricksMerchant2_Text_1
	release
	end


.align 2
BricksTM_Mart::
    .align 2
    .2byte ITEM_TM09
    .2byte ITEM_TM23
    .2byte ITEM_TM30
    .2byte ITEM_TM39
    .2byte ITEM_TM47
    .2byte ITEM_NONE
    release
    end

BricksMerchant2_Text_0:
	.string "I'm a TM merchant. What can I get for\n"
	.string "you?$"

BricksMerchant2_Text_1:
	.string "Come again soon!$"
