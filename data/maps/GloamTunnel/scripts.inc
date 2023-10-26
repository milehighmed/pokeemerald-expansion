GloamTunnel_MapScripts::
	.byte 0


GloamItem::
	lockall
	giveitem ITEM_TM31, 1
	removeobject 3
	setflag FLAG_UNUSED_0x277
	releaseall
	end


GloamTunnelGuard::
	lockall
	faceplayer
	msgbox GloamTunnelGuard_Text_0
	releaseall
	end


GloamTunnel_BlockPath::
	lockall
	faceplayer
	goto_if_set FLAG_BADGE01_GET, GloamTunnel_Stop
	msgbox GloamTunnel_BlockPath_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, GloamTunnel_GoBack
	waitmessage
	releaseall
	end


GloamTunnel_Stop::
	msgbox GloamTunnel_Stop_Text_0
	waitmessage
	releaseall
	end


GloamTunnel_GoBack:
	walk_up
	step_end

CavernGuard::
	lockall
	faceplayer
	msgbox CavernGuard_Text_0
	waitmessage
	releaseall
	end


GloamTunnelGuard_Text_0:
	.string "I check PassIDs.$"

GloamTunnel_BlockPath_Text_0:
	.string "STOP! You haven't been authorized by\n"
	.string "Leader Mikey to leave this district.$"

GloamTunnel_Stop_Text_0:
	.string "Hold on. I need to check your PassID...\n"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Alright, go ahead.$"

CavernGuard_Text_0:
	.string "This area is under the protection of\n"
	.string "the Nova City Archeological Society.\l"
	.string "Sorry, but I can't let you in without\l"
	.string "prior approval.$"
