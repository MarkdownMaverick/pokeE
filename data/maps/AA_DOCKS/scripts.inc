# 1 "data/maps/AA_DOCKS/scripts.pory"

# 2 "data/maps/AA_DOCKS/scripts.pory"
AA_DOCKS_MapScripts::
# 3 "data/maps/AA_DOCKS/scripts.pory"
	.byte 0

debugachu::
# 8 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 9 "data/maps/AA_DOCKS/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, debugachu_1
# 14 "data/maps/AA_DOCKS/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 15 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 16 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_0x8004, MALE
# 17 "data/maps/AA_DOCKS/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 18 "data/maps/AA_DOCKS/scripts.pory"
	delay 30
# 19 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 20 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 21 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 22 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 23 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 24 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 25 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 26 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 27 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 28 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 29 "data/maps/AA_DOCKS/scripts.pory"
	special SetUnlockedPokedexFlags
# 30 "data/maps/AA_DOCKS/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 31 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 32 "data/maps/AA_DOCKS/scripts.pory"
	givemon SPECIES_PIKACHU, 6, 6, 6, 6, OT_ID_PLAYER_ID, 0
# 33 "data/maps/AA_DOCKS/scripts.pory"
	special EnableNationalPokedex
# 34 "data/maps/AA_DOCKS/scripts.pory"
	msgbox debugachu_Text_1
# 35 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end

debugachu_1:
# 10 "data/maps/AA_DOCKS/scripts.pory"
	msgbox debugachu_Text_0
# 11 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end


debugachuwarp::
# 42 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 43 "data/maps/AA_DOCKS/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 1
	goto_if_eq debugachuwarp_2
# 48 "data/maps/AA_DOCKS/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 49 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 50 "data/maps/AA_DOCKS/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 6, 21
# 51 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end

debugachuwarp_2:
# 44 "data/maps/AA_DOCKS/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 3, 10
# 45 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end


AA_DOCKS_WARPTOPRIVATE::
# 57 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 58 "data/maps/AA_DOCKS/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 21, 24
# 59 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end


LRwarp::
# 66 "data/maps/AA_DOCKS/scripts.pory"
	lockall
# 67 "data/maps/AA_DOCKS/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 18, 18
# 68 "data/maps/AA_DOCKS/scripts.pory"
	releaseall
	end


debugachu_Text_0:
# 10 "data/maps/AA_DOCKS/scripts.pory"
	.string "READY TO WARP$"

debugachu_Text_1:
# 34 "data/maps/AA_DOCKS/scripts.pory"
	.string "ALL SET$"
