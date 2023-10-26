LakeLoralPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeLoralPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


LakeLoralPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_LAKE_LORAL
	end


Nurse_LakeLoral::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


Loral_PokecenterMan::
	lockall
	faceplayer
	msgbox Loral_PokecenterMan_Text_0
	releaseall
	end


Loral_PokecenterBoy::
	lockall
	faceplayer
	msgbox Loral_PokecenterBoy_Text_0
	releaseall
	end


Loral_PokecenterMan_Text_0:
	.string "I'm a voracious swimmer. Don't believe\n"
	.string "me? Two words. Natural. Buoyancy.$"

Loral_PokecenterBoy_Text_0:
	.string "I'm so glad there's air conditioning in\n"
	.string "here!$"
