OfficeBuilding1FirstFloor_MapScripts::
	.byte 0


WJMan::
	lockall
	faceplayer
	msgbox WJMan_Text_0
	waitmessage
	releaseall
	end


WJLady::
	lockall
	faceplayer
	msgbox WJLady_Text_0
	waitmessage
	releaseall
	end


WJLadyItem::
	lockall
	giveitem ITEM_CHARCOAL
	removeobject 1
	setflag FLAG_UNUSED_0x270
	releaseall
	end


WJMan_Text_0:
	.string "We just moved here!$"

WJLady_Text_0:
	.string "I'm an artist, but ever since we moved\n"
	.string "here I've had trouble finding my muse.$"
