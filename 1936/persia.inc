# #############################
# Country definition for PER #
# #############################

province = { id = 504 anti_air = 1 } # Zhambyl
province = { id = 1103 air_base = 7 anti_air = 2 } # Tashkent
province = { id = 1106 anti_air = 1 } # Osh
province = { id = 1105 anti_air = 1 } # Stalinabad
province = { id = 1100 anti_air = 2 } # Bukhara
province = { id = 1097 anti_air = 3 } # Ashgabat
province = {
	id = 1091
	anti_air = 2
	naval_base = { size = 3 current_size = 3 }
	air_base = { size = 1 current_size = 1 }
} # Bandar Abbas
province = { id = 1092 air_base = 1 anti_air = 2 } # Mashhad
province = { id = 1092 anti_air = 1 } # Dasht-i-Kavir
province = { id = 1085 air_base = 8 anti_air = 3 } # Teheran
province = { id = 1080 anti_air = 1 } # Babol
province = { id = 507 air_base = 5 anti_air = 1 } # Ust-Kamenogorsk
province = { id = 1110 air_base = 4 anti_air = 1 } # Kungrad
province = { id = 1102 anti_air = 2 } # Nukus
province = { id = 1099 anti_air = 2 } # Kazalinsk
province = { id = 1099 anti_air = 1 } # Baikonur
province = { id = 1099 air_base = 4 anti_air = 1 } # Zhezkazgan
province = { id = 1089 naval_base = 3 anti_air = 1 } # Abadan
province = { id = 1086 air_base = 3 anti_air = 2 } # Esfahan

# ####################
# Country main data #
# ####################

country = {
	tag = UPE
	ai = "PER.ai"
	belligerence = 50
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	capital = 1085
	manpower = 1000
	transports = 100
	escorts = 100
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 1
		political_left = 10
		freedom = 6
		free_market = 6
		professional_army = 6
		defense_lobby = 6
		interventionism = 10
	}
	diplomacy = { }
	#nationalprovinces = {
	#	386 498 499 500 501 502 503 504 505 506 507 696 698 700 701 702 703 704 705 707
	#	708 709 711 712 713 714 1028 1032 1034 1035 1036 1037 1062 1080 1081 1082 1083 1084 1085 1086
	#	1087 1088 1089 1090 1091 1092 1093 1094 1095 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107
	#	1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1133 1138 1139 1141 1142 1143 1184 1275 1279
	#	1280 1533 1538 2168 2169 2170 2171 2172 2173
	#}
	nationalprovinces = {
		499 500 502 503 504 505 506 507 701 703 704 705 707 709 711 712 713
		714 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095
		1097 1098 1099 1100 1101 1102 1103 1105 1106 1107 1108 1109 1110 1111 1112 1114 1116
		1117 1118
		
		1032 1028 1035 1036 1027 1062 1063 386 708 696 698 702 700 1113 1134 1133 1115 501 1139 498 1140 1273 1276 1280 1275 1279 1104 2107 2168 2172 2169 1538 1146 2170
	}
	ownedprovinces = {
		499 500 502 503 504 505 506 507 701 703 704 705 707 709 711 712 713
		714 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095
		1097 1098 1099 1100 1101 1102 1103 1105 1106 1107 1108 1109 1110 1111 1112 1114 1116
		1117 1118
	}
	controlledprovinces = {
		499 500 502 503 504 505 506 507 701 703 704 705 707 709 711 712 713
		714 1080 1081 1082 1083 1084 1085 1086 1087 1088 1089 1090 1091 1092 1093 1094 1095
		1097 1098 1099 1100 1101 1102 1103 1105 1106 1107 1108 1109 1110 1111 1112 1114 1116
		1117 1118
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
	
	landunit = {
		id = { type = 30005 id = 1 }
		name = "1. Corps"
		location = 1085
		division = {
			id = { type = 30005 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30005 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30005 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30005 id = 5 }
		name = "2. Corps"
		location = 1085
		division = {
			id = { type = 30005 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30005 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30005 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30005 id = 9 }
		name = "3. Corps"
		location = 1085
		division = {
			id = { type = 30005 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30005 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30005 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30005 id = 13 }
		name = "4. Corps"
		location = 1085
		division = {
			id = { type = 30005 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30005 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30005 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30005 id = 17 }
		name = "Armored Corps"
		location = 1085
		division = {
			type = light_armor
			model = 0
			id = { type = 30005 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30005 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30005 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30005 id = 193 }
		name = "Main Fleet"
		location = 1091
		base = 1091
		division = {
			type = carrier
			model = 0
			id = { type = 30005 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30005 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30005 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30005 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30005 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30005 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30005 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30005 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30005 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30005 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30005 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30005 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30005 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30005 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30005 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30005 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30005 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30005 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30005 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30005 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30005 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30005 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30005 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30005 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30005 id = 173 }
		name = "Bomber Group 1"
		location = 1091
		base = 1091
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30005 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30005 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30005 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30005 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30005 id = 178 }
		name = "Bomber Group 2"
		location = 1091
		base = 1091
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30005 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30005 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30005 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30005 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30005 id = 183 }
		name = "Fighter Group 1"
		location = 1091
		base = 1091
		division = {
			type = interceptor
			model = 6
			id = { type = 30005 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30005 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30005 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30005 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30005 id = 188 }
		name = "Fighter Group 2"
		location = 1091
		base = 1091
		division = {
			type = interceptor
			model = 6
			id = { type = 30005 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30005 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30005 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30005 id = 192 }
			name = "16th Air Wing"
		}
	}
}
