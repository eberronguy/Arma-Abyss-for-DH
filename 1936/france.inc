# #############################
# Country definition for FRA #
# #############################

province = {
	id = 37
	anti_air = 4
	air_base = { size = 10 current_size = 10 }
	naval_base = { size = 10 current_size = 10 }
} # Brest
province = { id = 40 anti_air = 2 } # Nantes
province = {
	id = 43
	anti_air = 3
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 6 current_size = 6 }
} #  Cherbourg
province = { id = 44 anti_air = 1 } # Caen
province = {
	id = 51
	naval_base = { size = 3 current_size = 3 }
	anti_air = 1
} #  Dunkerque
province = {
	id = 52
	air_base = { size = 10 current_size = 10 }
	anti_air = 3
} #  Lille
province = {
	id = 55
	anti_air = 5
	air_base = { size = 10 current_size = 10 }
} #  Paris
province = {
	id = 57
	air_base = { size = 10 current_size = 10 }
	anti_air = 3
} # Cholet
province = {
	id = 63
	air_base = { size = 10 current_size = 10 }
	anti_air = 3
} #  Auxerre
province = {
	id = 96
	anti_air = 3
	air_base = { size = 10 current_size = 10 }
} #  Metz
province = { id = 107 anti_air = 2 } # Strasbourg
province = { id = 105 anti_air = 2 } # Mulhouse
province = { id = 95 anti_air = 1 } # Chaumont
province = { id = 74 anti_air = 1 } # Vichy
province = {
	id = 68
	anti_air = 4
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 6 current_size = 6 }
} #  Bordeaux
province = { id = 452 air_base = 5 anti_air = 2 } # Sigüenza
province = {
	id = 348
	anti_air = 6
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 10 current_size = 10 }
	landfort = 6
	coastalfort = 0
	oilpool = 1000
	supplypool = 1000
} #  Gibraltar
province = { id = 465 air_base = 3 anti_air = 2 } # Albacete
province = {
	id = 77
	air_base = { size = 10 current_size = 10 }
	anti_air = 2
} #  Toulouse
province = {
	id = 89
	anti_air = 5
	air_base = { size = 10 current_size = 10 }
	naval_base = { size = 10 current_size = 10 }
}  # Marseille
province = { id = 87 landfort = 5 } # Nice
province = { id = 90 landfort = 3 } # Grenoble
province = { id = 85 anti_air = 1 } # Lyon
province = { id = 475 air_base = 7 anti_air = 2 } # Mallorca
province = { id = 736 naval_base = 3 air_base = 3 anti_air = 2 } # Philippeville
province = {
	id = 727
	supplypool = 500
	oilpool = 1
	anti_air = 4
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 5 current_size = 5 }
}  # Algiers
province = {
	id = 728
	anti_air = 2
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 2 current_size = 2 }
} #  Oran
province = { id = 715 anti_air = 1 } # Ceuta
province = {
	id = 718
	anti_air = 3
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 4 current_size = 4 }
} #  Casablanca
province = { id = 722 anti_air = 1 } # Marrakech
province = { id = 739 air_base = 6 anti_air = 2 } # Géryville
province = { id = 988 naval_base = 4 air_base = 4 anti_air = 3 } # Villa Cisneros
province = { id = 946 air_base = 2 anti_air = 1 } # Agadez
province = {
	id = 992
	naval_base = 4
	air_base = { size = 4 current_size = 3 }
	anti_air = 2
} #  Cap Verde Islands

# ####################
# Country main data #
# ####################

country = {
	tag = UBO
	ai = "FRA.ai"
	capital = 55
	belligerence = 50
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 50
	manpower = 1000
	transports = 300
	escorts = 100
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 10
		political_left = 4
		free_market = 6
		freedom = 6
		professional_army = 6
		defense_lobby = 6
		interventionism = 10
	}
	
	#nationalprovinces = {
	#	37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 95 96 97 98 99 100 101 102 103 104 105 106 107 108 109 111 112 113 114 127 128 132 133 134 135 136 348 389 391 392 396 398 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 476 477 478 479 480 481 482 715 716 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 740 741
	#	743 746 749 753 776 804 920 921 922 943 944 946 947 971 972 977 978 980 981 982 983 984 985 986 987 988 989 990 991 992 994 995
	#}
	
	nationalprovinces = {
		37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 95 96 97 98 99 100 101 102 103 104 105 106 107 348 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 476 477 478 479 480 481 482 715 716 717 718 719 720 721 722 723 724 725 726 727 728
		729 730 731 732 733 734 735 736 737 738 739 743 922 946 981 982 986 987 988 989 990 991 992 994 995
		
		114 116 112 111 109 127 130 132 389 391 398 396 749 746 740 741 753 776 774 804 808 921 920 943 947 984 985 976 971 975 983
	}
	
	ownedprovinces = {
		37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 95 96 97 98 99 100 101 102 103 104 105 106 107 348 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 476 477 478 479 480 481 482 715 716 717 718 719 720 721 722 723 724 725 726 727 728
		729 730 731 732 733 734 735 736 737 738 739 743 922 946 981 982 986 987 988 989 990 991 992 994 995
	}
	
	controlledprovinces = {
		37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 95 96 97 98 99 100 101 102 103 104 105 106 107 348 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 476 477 478 479 480 481 482 715 716 717 718 719 720 721 722 723 724 725 726 727 728
		729 730 731 732 733 734 735 736 737 738 739 743 922 946 981 982 986 987 988 989 990 991 992 994 995
	}
	
	# ######################
	techapps = {
		#Infantry up to 1918 tech
		1010 1020 1030 1040 1050 1060
		#Cavalry up to 1918 tech
		13060 13070 13080 1310 1320 1330
		#Mountain up to 1918 tech
		1160 1170 1180 1190 1200 1210
		#Engineers up to 1918 tech
		1830 1840 
		#Logistics up to 1918 tech
		1910 1920 1930 1940 1950 1960
		
		#Tanks up to 1918 tech
		2620 2010 
		#Armoured Cars up to 1918 tech
		2860 2870 
		#Artillery up to 1918 tech
		2290 2300 2310 2900
		#Static Anti-Air Artillery up to 1918 tech
		2800
		#Anti-Air Artillery Brigade up to 1918 tech
		2810

		#Destroyers up to 1918 tech
		3010 3020 3030 3040 
		#Light Cruisers up to 1918 tech
		3110 3120 3130
		#Heavy Cruiser up to 1918 tech 
		3210 3220 3230
		#Battleship up to 1918 tech
		3410 3420 3430 3440 3450 3456
		#Battlecruiser up to 1918 tech
		3310 3320 3330
		#Submarine up to 1918 tech
		3610 3620 3630 
		#Light carrier up to 1918 tech
		12100 12110
		#Troopships up to 1918 tech
		3810
		#ASW up to 1918 tech
		3900
		#Torpedoes up to 1918 tech
		3720 3730 3736 3740
		
		#Interceptors up to 1918 tech
		4500 4510 4520 4530 4540 4550
		#Multirole fighter up to 1918 tech
		4300 4310 4320 
		#Bombers up to 1918 tech
		4600 4610 4620 4630
		#Strategic bomber up to 1918 tech
		4800 4810
		#Navalbomber up to 1918 tech
		4700
		#Seaplanes up to 1918 tech
		4740 4750 4760
		
		#Computers up to 1918 tech
		5310 54010 54020 
		#Cryptography up to 1918 tech
		5316
		#Medicine up to 1918 tech
		5600 5610
		#Agriculture up to 1918 tech
		5700 5710 
		#Construction Engineering up to 1918 tech
		5800 5080
		#Manufacturing up to 1918 tech
		5810 5820
		#Oil Refining up to 1918 tech
		5190 

		#Hospitals up to 1918 tech
		14000 14010
		#Landdoctrine ww1 - entente line, up to 1926
		6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
		
		#Naval Doctrines
		# Theories
		8010 8020 8040 8050 8060 8070 8080
		# Amphib
		82300
		# Logistic Support
		82500
		# Naval Interdiction
		8500 8510 8520 8550 8560 8600 8610
		# Engagement Tactics
		8900 8910 8920 8930
		# Naval Supremacy
		8100 8110 8120 8150 8160 8200 8210

		#Air Doctrines - interwar techs
		27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
		
		#Secret weapons (tanks)
		7600 7610	
	}
	
	# #################

	landunit = {
		id = { type = 30007 id = 1 }
		name = "1. Corps"
		location = 55
		division = {
			id = { type = 30007 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30007 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30007 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30007 id = 5 }
		name = "2. Corps"
		location = 55
		division = {
			id = { type = 30007 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30007 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30007 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30007 id = 9 }
		name = "3. Corps"
		location = 55
		division = {
			id = { type = 30007 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30007 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30007 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30007 id = 13 }
		name = "4. Corps"
		location = 55
		division = {
			id = { type = 30007 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30007 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30007 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30007 id = 17 }
		name = "Armored Corps"
		location = 55
		division = {
			type = light_armor
			model = 0
			id = { type = 30007 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30007 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30007 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30007 id = 193 }
		name = "Main Fleet"
		location = 37
		base = 37
		division = {
			type = carrier
			model = 0
			id = { type = 30007 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30007 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30007 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30007 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30007 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30007 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30007 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30007 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30007 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30007 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30007 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30007 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30007 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30007 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30007 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30007 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30007 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30007 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30007 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30007 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30007 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30007 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30007 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30007 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30007 id = 173 }
		name = "Bomber Group 1"
		location = 55
		base = 55
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30007 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30007 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30007 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30007 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30007 id = 178 }
		name = "Bomber Group 2"
		location = 55
		base = 55
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30007 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30007 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30007 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30007 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30007 id = 183 }
		name = "Fighter Group 1"
		location = 55
		base = 55
		division = {
			type = interceptor
			model = 6
			id = { type = 30007 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30007 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30007 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30007 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30007 id = 188 }
		name = "Fighter Group 2"
		location = 55
		base = 55
		division = {
			type = interceptor
			model = 6
			id = { type = 30007 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30007 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30007 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30007 id = 192 }
			name = "16th Air Wing"
		}
	}
}
