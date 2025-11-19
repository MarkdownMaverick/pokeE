# 1 "data/maps/AA_DOCKS/scripts.pory"

# 2 "data/maps/AA_DOCKS/scripts.pory"
AA_DOCKS_MapScripts::
# 3 "data/maps/AA_DOCKS/scripts.pory"
	.byte 0

debugachu::
# 8 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 9 "data/maps/AA_DOCKS/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM, debugachu_1
# 14 "data/maps/AA_DOCKS/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 15 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 16 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 17 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 18 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 19 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 20 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 21 "data/maps/AA_DOCKS/scripts.pory"
	msgbox debugachu_Text_1
# 22 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end

debugachu_1:
# 10 "data/maps/AA_DOCKS/scripts.pory"
	msgbox debugachu_Text_0
# 11 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end


debugachuwarp::
# 28 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 29 "data/maps/AA_DOCKS/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 1
	goto_if_eq debugachuwarp_2
# 34 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 35 "data/maps/AA_DOCKS/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 1, 4
# 36 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end

debugachuwarp_2:
# 30 "data/maps/AA_DOCKS/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 3, 10
# 31 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end


debugachu_Text_0:
# 10 "data/maps/AA_DOCKS/scripts.pory"
	.string "READY TO WARP$"

debugachu_Text_1:
# 21 "data/maps/AA_DOCKS/scripts.pory"
	.string "ALL SET$"
