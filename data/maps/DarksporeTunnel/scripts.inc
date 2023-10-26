DarksporeTunnel_MapScripts::
	.byte 0


DSTMoonStone::
	lockall
	giveitem ITEM_MOON_STONE, 1
	removeobject 1
	setflag FLAG_UNUSED_0x2A0
	waitmessage
	releaseall
	end

