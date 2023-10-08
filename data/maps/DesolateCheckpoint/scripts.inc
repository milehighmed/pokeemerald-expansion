DesolateCheckpoint_MapScripts::
	.byte 0


DesolateCheckpoint_CheckpointSign::
	lockall
	msgbox DesolateCheckpoint_CheckpointSign_Text_0
	releaseall
	return


CheckpointAssistant::
	lockall
	faceplayer
	msgbox CheckpointAssistant_Text_0
	releaseall
	end


DesolateCheckpoint_BlockPath::
	lockall
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, Checkpoint_Stop
	msgbox DesolateCheckpoint_BlockPath_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Checkpoint_GoBack
	waitmessage
	releaseall
	end


Checkpoint_Stop::
	msgbox Checkpoint_Stop_Text_0
	waitmessage
	releaseall
	end


Checkpoint_GoBack:
	walk_left
	step_end

DesolateCheckpoint_CheckpointSign_Text_0:
	.string "Nova City Entry Checkpoint:\p"
	.string "Starter Assignments and PassIDs\p"
	.string "$"

CheckpointAssistant_Text_0:
	.string "Welcome to Nova City. Head inside to\n"
	.string "receive a Pokémon and continue to that\l"
	.string "cave entrance for your PassID\l"
	.string "examination.$"

DesolateCheckpoint_BlockPath_Text_0:
	.string "STOP! You don't have a Pokémon yet! You\n"
	.string "need one in order to get your PassID.\l"
	.string "Head inside and get one.$"

Checkpoint_Stop_Text_0:
	.string "Follow this path to the cave, inside\n"
	.string "you'll be tested by the Registrar!$"
