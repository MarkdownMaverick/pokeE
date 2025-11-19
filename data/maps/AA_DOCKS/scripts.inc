# 1 "data/maps/AA_DOCKS/scripts.pory"

# 2 "data/maps/AA_DOCKS/scripts.pory"
AA_DOCKS_MapScripts::
# 3 "data/maps/AA_DOCKS/scripts.pory"
	.byte 0

debugachu::
# 11 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 12 "data/maps/AA_DOCKS/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM, debugachu_1
# 17 "data/maps/AA_DOCKS/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 18 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 19 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 20 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 21 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 22 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 23 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 24 "data/maps/AA_DOCKS/scripts.pory"
	msgbox debugachu_Text_1
# 25 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end

debugachu_1:
# 13 "data/maps/AA_DOCKS/scripts.pory"
	msgbox debugachu_Text_0
# 14 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end


debugachuwarp::
# 32 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 33 "data/maps/AA_DOCKS/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 34 "data/maps/AA_DOCKS/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 3, 10
# 35 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end


debugachu_Text_0:
# 13 "data/maps/AA_DOCKS/scripts.pory"
	.string "READY TO WARP$"

debugachu_Text_1:
# 24 "data/maps/AA_DOCKS/scripts.pory"
	.string "ALL SET$"
