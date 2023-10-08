DunetownPokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DunetownPokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


DunetownPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_DUNETOWN
	end


Nurse_Simple::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

