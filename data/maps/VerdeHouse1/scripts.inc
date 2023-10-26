VerdeHouse1_MapScripts::
	.byte 0


VerdeMan1::
	lockall
	faceplayer
	msgbox VerdeMan1_Text_0
	waitmessage
	releaseall
	end


VerdeMan1_Text_0:
	.string "My dad worked the fields, I worked the\n"
	.string "fields, now my son works the field! It's\l"
	.string "a simple, fulfilling life.$"
