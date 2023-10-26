Route104_PrototypePrettyPetalFlowerShop_MapScripts::
	.byte 0


Bricks_BerryVendor::
	lock
	faceplayer
	message Bricks_BerryVendor_Text_0
	waitmessage
	pokemart FlowerShop_Berries
	msgbox Bricks_BerryVendor_Text_1
	release
	end


ThugBattle1::
	trainerbattle_single TRAINER_TAKAO, ThugBattle1_Text_0, ThugBattle1_Text_1, Thug1Loss
	return


ThugBattle2::
	trainerbattle_single TRAINER_HITOSHI, ThugBattle2_Text_0, ThugBattle2_Text_1, ThugRetreat
	return


Thug1Loss::
	lockall
	faceplayer
	msgbox Thug1Loss_Text_0
	releaseall
	end


ThugRetreat::
	msgbox ThugRetreat_Text_0
	waitmessage
	fadescreen FADE_TO_BLACK
	removeobject 2
	removeobject 3
	setflag FLAG_UNUSED_0x280
	fadescreen FADE_FROM_BLACK
	msgbox ThugRetreat_Text_1
	waitmessage
	releaseall
	end


.align 2
FlowerShop_Berries:
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_NONE
	release
	end

Bricks_BerryVendor_Text_0:
	.string "Want to buy some berries?$"

Bricks_BerryVendor_Text_1:
	.string "Come again soon!$"

ThugBattle1_Text_0:
	.string "Can't you see we're busy?$"

ThugBattle1_Text_1:
	.string "Do you know who we are?$"

ThugBattle2_Text_0:
	.string "Hey, beat it!$"

ThugBattle2_Text_1:
	.string "Not in front of the\nflower girl!$"

Thug1Loss_Text_0:
	.string "Leader Sam is gonna hear about this!$"

ThugRetreat_Text_0:
	.string "If you show your face at the Gym, Sam is\n"
	.string "gonna make you pay!$"

ThugRetreat_Text_1:
	.string "Thank you so much for getting rid of\n"
	.string "them! Now I can start selling my\l"
	.string "berries again!$"
