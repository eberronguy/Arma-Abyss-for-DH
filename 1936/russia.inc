# #############################
# Country definition for UER #
# #############################

province = {
	id = 542
	anti_air = 4
	naval_base = { size = 3 current_size = 3 }
	air_base = { size = 4 current_size = 4 }
} # Archangelsk
province = { id = 548 air_base = 2 } # Volodga
province = {
	id = 572
	air_base = { size = 10 current_size = 10 }
	landfort = 5
	coastalfort = 0
	anti_air = 4
} # Moscow
province = {
	id = 576
	air_base = { size = 3 current_size = 3 }
	anti_air = 1
} # Kaluga
province = { id = 565 anti_air = 1 } # Porkhov
province = {
	id = 564
	air_base = { size = 6 current_size = 6 }
	anti_air = 1
} # Opochka
province = {
	id = 590
	air_base = { size = 2 current_size = 2 }
	anti_air = 2
} # Vitebsk
province = { id = 589 anti_air = 3 } # Smolensk
province = { id = 653 anti_air = 1 } # Svoboda
province = {
	id = 653
	air_base = { size = 2 current_size = 2 }
	anti_air = 1
} # Pavlovsk
province = {
	id = 601
	air_base = { size = 2 current_size = 2 }
} # Gomel
province = { id = 588 anti_air = 2 } # Bryansk
province = { id = 579 air_base = 3 anti_air = 1 } # Ryazan
province = {
	id = 581
	air_base = { size = 5 current_size = 5 }
	anti_air = 2
} # Orel
province = {
	id = 563
	air_base = { size = 2 current_size = 2 }
} # Demyansk
province = { id = 1128 anti_air = 1 } # Molotov
province = { id = 1155 anti_air = 2 } # Dudinka
province = { id = 1177 anti_air = 1 } # Saskylakh
province = {
	id = 1179
	air_base = { size = 1 current_size = 1 }
	anti_air = 1
} # Yakutsk
province = { id = 1181 naval_base = 4 anti_air = 2 } # Evensk
province = {
	id = 1162
	air_base = { size = 3 current_size = 3 }
	anti_air = 2
} # Irkutsk
province = {
	id = 1161
	air_base = { size = 2 current_size = 2 }
	anti_air = 1
} # Tynda
province = {
	id = 1186
	anti_air = 2
	naval_base = { size = 1 current_size = 1 }
	air_base = { size = 1 current_size = 1 }
} # Okhotsk
province = { id = 1189 naval_base = 3 air_base = 1 anti_air = 2 } # Nikolayevsk-na-Amure
province = { id = 1171 air_base = 2 anti_air = 2 } # Poloi
province = {
	id = 1148
	air_base = { size = 1 current_size = 1 }
	anti_air = 1
} # Severo-Yenisejsk
province = { id = 1148 air_base = 5 anti_air = 1 } # Kolpachevo
province = {
	id = 1148
	air_base = { size = 2 current_size = 2 }
	anti_air = 1
} # Tomsk
province = { id = 1142 anti_air = 1 } # Novosibirsk
province = {
	id = 1141
	air_base = { size = 2 current_size = 2 }
	anti_air = 1
} # Semipalatinsk
province = {
	id = 1138
	air_base = { size = 1 current_size = 1 }
	anti_air = 1
} # Omsk
province = { id = 1113 air_base = 4 anti_air = 1 } # Serov
province = { id = 1151 anti_air = 1 } # Sverdlovsk
province = {
	id = 1132
	air_base = { size = 1 current_size = 1 }
	anti_air = 1
} # Chelyabinsk
province = { id = 688 anti_air = 1 } # Mezen
province = { id = 685 air_base = 6 anti_air = 2 } # Syktyvkar
province = { id = 675 air_base = 5 anti_air = 1 } # Cheboksary
province = { id = 684 anti_air = 1 } # Kirov
province = {
	id = 664
	air_base = { size = 2 current_size = 2 }
	anti_air = 1
} # Naberezhnye Chelny
province = {
	id = 668
	air_base = { size = 4 current_size = 4 }
	anti_air = 1
} # Kuybyshev
province = {
	id = 669
	air_base = { size = 3 current_size = 3 }
	anti_air = 1
} # Saratov
province = {
	id = 706
	anti_air = 2
	air_base = { size = 4 current_size = 4 }
} # Astrakhan
province = {
	id = 666
	air_base = { size = 2 current_size = 2 }
	anti_air = 1
} # Novouzensk

# ####################
# Country main data #
# ####################

country = {
	tag = UER
	ai = "SOV.ai"
	belligerence = 50
	capital = 572
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 30
	manpower = 1000
	transports = 100
	escorts = 100
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 1
		political_left = 1
		freedom = 6
		free_market = 6
		professional_army = 6
		defense_lobby = 6
		interventionism = 10
	}
	diplomacy = { }
	#nationalprovinces = {
	#	265 266 271 273 498 499 501 502 503 504 505 506 507 538 539 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570
	#	571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 593 597 598 601 602 604 605 607 642 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 663
	#	664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 699 700 702 706 1069 1070 1110 1113 1114 1115 1117 1120 1123 1124 1125 1126 1127 1128
	#	1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177
	#	1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1197 1200 1201 1206 1273 1276 1280
	#}
	
	nationalprovinces = {
		498 501 542 543 544 545 546 547 548 549 551 552 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587
		588 589 590 593 601 650 651 652 653 654 655 656 657 658 660 661 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 706 1069 1070 1113
		1115 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174
		1175 1176 1177 1178 1179 1180 1181 1182 1186 1187 1188 1189
		
		541 539 553 550 274 273 266 598 607 602 604 647 648 649 642 659 663 662 699 1118 1114 1117 1116 502 499 505 507 1273 1123 1125 1124 1120 1206 1200 1201 1197 1202 1190 1185 1183
	}
	ownedprovinces = {
		498 501 542 543 544 545 546 547 548 549 551 552 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587
		588 589 590 593 601 650 651 652 653 654 655 656 657 658 660 661 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 706 1069 1070 1113
		1115 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174
		1175 1176 1177 1178 1179 1180 1181 1182 1186 1187 1188 1189
	}
	controlledprovinces = {
		498 501 542 543 544 545 546 547 548 549 551 552 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587
		588 589 590 593 601 650 651 652 653 654 655 656 657 658 660 661 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 706 1069 1070 1113
		1115 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174
		1175 1176 1177 1178 1179 1180 1181 1182 1186 1187 1188 1189
	}
	
	# ################
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
		id = { type = 30008 id = 1 }
		name = "1. Corps"
		location = 572
		division = {
			id = { type = 30008 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30008 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30008 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30008 id = 5 }
		name = "2. Corps"
		location = 572
		division = {
			id = { type = 30008 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30008 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30008 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30008 id = 9 }
		name = "3. Corps"
		location = 572
		division = {
			id = { type = 30008 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30008 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30008 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30008 id = 13 }
		name = "4. Corps"
		location = 572
		division = {
			id = { type = 30008 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30008 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30008 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30008 id = 17 }
		name = "Armored Corps"
		location = 572
		division = {
			type = light_armor
			model = 0
			id = { type = 30008 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30008 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30008 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30008 id = 193 }
		name = "Main Fleet"
		location = 542
		base = 542
		division = {
			type = carrier
			model = 0
			id = { type = 30008 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30008 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30008 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30008 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30008 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30008 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30008 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30008 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30008 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30008 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30008 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30008 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30008 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30008 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30008 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30008 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30008 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30008 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30008 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30008 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30008 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30008 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30008 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30008 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30008 id = 173 }
		name = "Bomber Group 1"
		location = 572
		base = 572
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30008 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30008 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30008 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30008 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30008 id = 178 }
		name = "Bomber Group 2"
		location = 572
		base = 572
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30008 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30008 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30008 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30008 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30008 id = 183 }
		name = "Fighter Group 1"
		location = 572
		base = 572
		division = {
			type = interceptor
			model = 6
			id = { type = 30008 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30008 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30008 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30008 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30008 id = 188 }
		name = "Fighter Group 2"
		location = 572
		base = 572
		division = {
			type = interceptor
			model = 6
			id = { type = 30008 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30008 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30008 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30008 id = 192 }
			name = "16th Air Wing"
		}
	}
}
