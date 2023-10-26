WattJunctionPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WattJunctionPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


WattJunctionPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_WATT_JUNCTION
	end


Nurse_WattJunction::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


WJ_PokecenterGirl::
	lockall
	faceplayer
	msgbox WJ_PokecenterGirl_Text_0
	waitmessage
	releaseall
	end


WJ_PokecenterGirl_Text_0:
	.string "Not from around here? What do you think\n"
	.string "about the hustle and bustle of Watt\l"
	.string "Junction?? Pretty shocking right!\l"
	.string "Would you believe me if I told you that\l"
	.string "Silver City is even bigger than Watt\l"
	.string "Junction?$"
