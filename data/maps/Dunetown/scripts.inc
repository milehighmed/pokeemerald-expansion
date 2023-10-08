Dunetown_MapScripts::
	.byte 0


Dunetown_EntrySign::
	lockall
	msgbox Dunetown_EntrySign_Text_0
	releaseall
	return


Dunetown_Market_Sign::
	lockall
	msgbox Dunetown_Market_Sign_Text_0
	releaseall
	return


Dunetown_RunningBoy::
	lockall
	faceplayer
	msgbox Dunetown_RunningBoy_Text_0
	waitmessage
	release
	end


Dunetown_RunningGirl::
	lockall
	faceplayer
	msgbox Dunetown_RunningGirl_Text_0
	waitmessage
	release
	return


Dunetown_Market_BerryVendor::
	lock
	faceplayer
	message Dunetown_Market_BerryVendor_Text_0
	waitmessage
	pokemart Market_BerryVendor
	msgbox Dunetown_Market_BerryVendor_Text_1
	release
	end


Dunetown_Market_TMVendor::
	lock
	faceplayer
	message Dunetown_Market_TMVendor_Text_0
	waitmessage
	pokemart Market_TMVendor
	msgbox Dunetown_Market_BerryVendor_Text_1
	release
	end


.align 2
Market_BerryVendor::
    .2byte ITEM_ORAN_BERRY
    .2byte ITEM_PECHA_BERRY
    .2byte ITEM_LEPPA_BERRY
    .2byte ITEM_CHERI_BERRY
    .2byte ITEM_RAZZ_BERRY
    .2byte ITEM_RAWST_BERRY
    .2byte ITEM_NONE
    release
    end

.align 2
Market_TMVendor::
    .2byte ITEM_TM02
    .2byte ITEM_TM04
    .2byte ITEM_TM06
    .2byte ITEM_TM08
    .2byte ITEM_TM27
    .2byte ITEM_NONE
    release
    end

Dunetown_EntrySign_Text_0:
	.string "Dunetown:\p"
	.string "The Winds of Change are Always Blowing!\p"
	.string "$"

Dunetown_Market_Sign_Text_0:
	.string "Dunetown Outdoor Market$"

Dunetown_RunningBoy_Text_0:
	.string "I love running in the sand\n"
	.string "with my sister!$"

Dunetown_RunningGirl_Text_0:
	.string "I hate running!\n"
	.string "But it makes my brother happy!$"

Dunetown_Market_BerryVendor_Text_0:
	.string "Want to buy some berries?$"

Dunetown_Market_BerryVendor_Text_1:
	.string "Come again soon!$"

Dunetown_Market_TMVendor_Text_0:
	.string "Want to buy some TMs?$"
