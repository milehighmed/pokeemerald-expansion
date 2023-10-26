HoneyportSouth_MapScripts::
	.byte 0


BoatToLakeLoral::
	msgbox BoatToLakeLoral_Text_0
	warp MAP_LAKE_LORAL, [ 0 ]
	releaseall
	end


BoatToLakeLoral_Text_0:
	.string "Let's set sail for Loral Resort!$"
