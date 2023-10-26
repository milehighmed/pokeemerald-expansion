BricksNiceHouse_MapScripts::
	.byte 0


NiceMan::
	lockall
	faceplayer
	msgbox NiceMan_Text_0
	goto_if_unset FLAG_UNUSED_0x283, NiceMan_1
	msgbox NiceMan_Text_1
	waitmessage
	releaseall
	end

NiceMan_1:
	waitmessage
	giveitem ITEM_EXP_SHARE, 1
	setflag FLAG_UNUSED_0x283
	return


NiceMan_Text_0:
	.string "I'm an old man, I've outlived all of my\n"
	.string "friends and family. It can be a lonely,\l"
	.string "stale life, so I moved here once I saw\l"
	.string "how low the prices were for houses and\l"
	.string "land. My new surroundings have given me\l"
	.string "a fresh perspective; I love the flowers\l"
	.string "and the air here compared to the inner\l"
	.string "cities! Here, this was my son's. I've\l"
	.string "been holding onto it to remember him\l"
	.string "by, but I don't need it anymore. I\l"
	.string "remember them all just by feeling the\l"
	.string "sun on my face!$"

NiceMan_Text_1:
	.string "May his strength find a home in you as\n"
	.string "well, now. Good luck, trainer!$"
