Route25Farmhouse_MapScripts::
	.byte 0


FarmhouseBoy::
	lockall
	faceplayer
	msgbox FarmhouseBoy_Text_0
	releaseall
	end


FarmhouseBoy_Text_0:
	.string "The fair is coming up, and I'm afraid\n"
	.string "that none of my Tepig are going to be\l"
	.string "ready to show. I'm considering taking\l"
	.string "them into Sunbeam Forest to train them\l"
	.string "up a bit, but what if they get too lean?$"
