MyrasShed_MapScripts::
	.byte 0


ShedItem1::
	lockall
	giveitem ITEM_TM_RETURN, 1
	removeitem 0
	setflag FLAG_WONDER_CARD_UNUSED_9
	releaseall
	end

