HoneyportHouse1_MapScripts::
	.byte 0


HoneyportKirlia::
	lockall
	faceplayer
	msgbox HoneyportKirlia_Text_0
	releaseall
	end


HoneyportBoy1::
	lockall
	faceplayer
	msgbox HoneyportBoy1_Text_0
	releaseall
	end


HoneyportKirlia_Text_0:
	.string "Kirlia!$"

HoneyportBoy1_Text_0:
	.string "You may have noticed that we don't have\n"
	.string "a Pokécenter here in Honeyport. There\l"
	.string "isn't one in all of Lush Valley, for that\l"
	.string "matter! Whenever Kirlia gets hurt, I go\l"
	.string "visit the healer in either Verdeville or\l"
	.string "Horn Hollow!$"
