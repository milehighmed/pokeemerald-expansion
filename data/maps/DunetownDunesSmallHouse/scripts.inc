DunetownDunesSmallHouse_MapScripts::
	.byte 0


SmallHouse_Azurill::
	lockall
	faceplayer
	msgbox SmallHouse_Azurill_Text_0
	releaseall
	end


SmallHouse_Lass::
	lockall
	faceplayer
	msgbox SmallHouse_Lass_Text_0
	releaseall
	end


SmallHouse_Azurill_Text_0:
	.string "Zu! 'Zurill!$"

SmallHouse_Lass_Text_0:
	.string "My Dad gave me this Azurill so that I\n"
	.string "wouldn't get lonely when I moved to\l"
	.string "Nova City, but I had no idea I'd be\l"
	.string "living in a desert! What will I do if it\l"
	.string "evolves??$"
