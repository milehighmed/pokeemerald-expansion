HornHollow_MapScripts::
	.byte 0


HornSign::
	lockall
	msgbox HornSign_Text_0
	releaseall
	end


MyraSign::
	lockall
	msgbox MyraSign_Text_0
	releaseall
	end


BlockMyra::
	lockall
	faceplayer
	msgbox BlockMyra_Text_0
	releaseall
	end


MyraPooch::
	lockall
	faceplayer
	msgbox MyraPooch_Text_0
	releaseall
	end


HornSign_Text_0:
	.string "Horn Hollow: Our Nature is to Nurture!$"

MyraSign_Text_0:
	.string "Myra's House$"

BlockMyra_Text_0:
	.string "Hey there, you look like a trainer! Myra\n"
	.string "isn't home right now, she's looking for\l"
	.string "a Poochyena that got loose from the\l"
	.string "farmhouse on Route 25. If you don't\l"
	.string "mind lending a set of eyes, it might go\l"
	.string "faster!$"

MyraPooch_Text_0:
	.string "Grrr....Pooch! Poochyena!$"
