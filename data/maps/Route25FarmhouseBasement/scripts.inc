Route25FarmhouseBasement_MapScripts::
	.byte 0


FarmhouseBasementItem::
	lockall
	giveitem ITEM_ULTRA_BALL, 1
	removeobject 1
	setflag FLAG_WONDER_CARD_UNUSED_11
	releaseall
	end

