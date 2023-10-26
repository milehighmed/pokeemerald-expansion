SmallHouse1_MapScripts::
	.byte 0


WJExpertM::
	lockall
	faceplayer
	msgbox WJExpertM_Text_0
	waitmessage
	releaseall
	end


WJDuskull::
	lockall
	faceplayer
	msgbox WJDuskull_Text_0
	waitmessage
	releaseall
	end


WJExpertM_Text_0:
	.string "This Duskull followed me home one day\n"
	.string "from Darkspore Forest. I've heard that\l"
	.string "they stay near people who are close to\l"
	.string "death, but I think the little guy\l"
	.string "jumped the gun! I'm not going anywhere\l"
	.string "just yet!$"

WJDuskull_Text_0:
	.string "Duskull's single red eye scans you up\n"
	.string "and down briefly before it locks back\l"
	.string "onto the Old Man.$"
