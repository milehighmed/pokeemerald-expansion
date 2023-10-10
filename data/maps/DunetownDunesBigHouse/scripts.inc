DunetownDunesBigHouse_MapScripts::
	.byte 0


DunetownBigHouse_Pikachu::
	lockall
	faceplayer
	msgbox DunetownBigHouse_Pikachu_Text_0
	releaseall
	end


DunetownBigHouse_Woman::
	lockall
	faceplayer
	msgbox DunetownBigHouse_Woman_Text_0
	releaseall
	end


DunetownBigHouse_Item::
	lockall
	giveitem ITEM_THUNDER_STONE, 1
	removeobject 3
	setflag FLAG_UNUSED_0x4AB
	releaseall
	end


DunetownBigHouse_Pikachu_Text_0:
	.string "Pika! Pika-pi!$"

DunetownBigHouse_Woman_Text_0:
	.string "I live here with my Pikachu! I used to\n"
	.string "work in Silver City and we would battle\l"
	.string "frequently. Not anymore though! Are\l"
	.string "you on a journey of your own? If you\l"
	.string "find any of my old Trainer supplies you\l"
	.string "can have them.$"
