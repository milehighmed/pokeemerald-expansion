BricksPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BricksPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


BricksPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_THE_BRICKS
	end


Nurse_Bricks::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


Bricks_PokecenterGirl::
	lockall
	faceplayer
	msgbox Bricks_PokecenterGirl_Text_0
	waitmessage
	releaseall
	end


Bricks_PokecenterBoy::
	lockall
	faceplayer
	msgbox Bricks_PokecenterBoy_Text_0
	waitmessage
	releaseall
	end


Bricks_PokecenterGirl_Text_0:
	.string "The old Leader, Holly, was on a 100-win\n"
	.string "streak when she was challenged by the\l"
	.string "CEO of a construction company based\l"
	.string "out of Silver City. He beat her and took\l"
	.string "her seat as Leader of The Bricks. A lot\l"
	.string "has changed in a short time since then.$"

Bricks_PokecenterBoy_Text_0:
	.string "My family moved here from Silver City\n"
	.string "when they heard that this town was\l"
	.string "going to boom once Leader Sam\l"
	.string "renovated it. Better get in now while\l"
	.string "it's still cheap!$"
