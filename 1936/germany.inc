# #############################
# Country definition for GER #
# #############################

province = {
	id = 145
	anti_air = 3
	air_base = { size = 4 current_size = 4 }
} # Essen
province = { id = 127 landfort = 1 anti_air = 2 } # Saarbrücken
province = { id = 129 landfort = 1 anti_air = 2 } # Cologne
province = { id = 144 anti_air = 2 } # Dortmund
province = {
	id = 137
	anti_air = 2
	air_base = { size = 10 current_size = 10 }
} # Kassel
province = { id = 140 anti_air = 1 } # Schweinfurt
province = { id = 251 air_base = 3 anti_air = 1 } # Lida
province = { id = 594 air_base = 6 anti_air = 2 } # Bobraisk
province = {
	id = 153
	anti_air = 2
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 10 current_size = 10 }
} # Rostock
province = { id = 169 anti_air = 2     } # Magdeburg
province = {
	id = 163
	anti_air = 2
	air_base = { size = 10 current_size = 10 }
} # Berlin
province = { id = 183 supplypool = 100 } # Elbing
province = { id = 170 anti_air = 1 } # Leipzig
province = { id = 177 anti_air = 1 } # Nuremberg
province = {
	id = 138
	anti_air = 3
	air_base = { size = 4 current_size = 4 }
} # Frankfurt-am-Main
province = {
	id = 134
	landfort = 1
	anti_air = 2
	air_base = { size = 4 current_size = 4 }
} # Stuttgart
province = { id = 132 landfort = 1 } # Freiburg
province = {
	id = 179
	anti_air = 2
	air_base = { size = 10 current_size = 10 }
} # Munich
province = {
	id = 167
	anti_air = 2
	air_base = { size = 10 current_size = 10 }
} # Breslau
province = { id = 164 anti_air = 2 } # Oppeln
province = { id = 223 air_base = 4 anti_air = 1 } # Lodz
province = { id = 232 anti_air = 1 } # Warsaw
province = { id = 245 air_base = 2 } # Brest Litovsk
province = {
	id = 184
	anti_air = 4
	air_base = { size = 10 current_size = 10 }
	naval_base = { size = 10 current_size = 10 }
} # Königsberg

# ####################
# Country main data #
# ####################

country = {
	tag = UPR
	ai = "GER.ai"
	capital = 163
	belligerence = 50
	manpower = 1000
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 70
	transports = 100
	escorts = 100
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 1
		political_left = 1
		free_market = 6
		freedom = 6
		professional_army = 6
		defense_lobby = 6
		interventionism = 10
	}
	diplomacy = { }
	#nationalprovinces = {
	#	104 105 107 108 109 110 118 119 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145
	#	149 151 153 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179
	#	180 181 182 183 184 185 186 187 188 189 192 193 194 195 196 197 198 199 200 201 202 203 204 205 206 207 208 209
	#	210 211 212 213 214 215 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 239 240 241 242 243
	#	244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 259 260 261 262 263 266 267 276 278 279 281 282 283
	#	284 292 296 299 301 410 591 592 594 595 596 597 599 600 609 611 614 616
	#}
	nationalprovinces = {
		127 128 129 130 131 132 133 134 135 136 137 138 139 140 142 143 144 145 153 155 156 157 158 159 160
		161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185
		196 197 198 199 200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215 221 222 223 224 225
		226 227 228 229 230 231 232 233 234 235 236 237 239 243 244 245 246 247 248 249 250 251 252 253 254
		255 256 257 258 591 592 594 596 599 600

		151 149 146 147 141 120 121 126 110 109 104 107 105 389 189 192 187 186 194 195 188 279 278 282 281 296 292 230 241 242 240 614 616 595 597 598 266 267 260 262 263 261 238
	}
	
	ownedprovinces = {
		127 128 129 130 131 132 133 134 135 136 137 138 139 140 142 143 144 145 153 155 156 157 158 159 160
		161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185
		196 197 198 199 200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215 221 222 223 224 225
		226 227 228 229 230 231 232 233 234 235 236 237 239 243 244 245 246 247 248 249 250 251 252 253 254
		255 256 257 258 591 592 594 596 599 600
	}
	controlledprovinces = {
		127 128 129 130 131 132 133 134 135 136 137 138 139 140 142 143 144 145 153 155 156 157 158 159 160
		161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185
		196 197 198 199 200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215 221 222 223 224 225
		226 227 228 229 230 231 232 233 234 235 236 237 239 243 244 245 246 247 248 249 250 251 252 253 254
		255 256 257 258 591 592 594 596 599 600
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
		id = { type = 30017 id = 1 }
		name = "1. Corps"
		location = 163
		division = {
			id = { type = 30017 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30017 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30017 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30017 id = 5 }
		name = "2. Corps"
		location = 163
		division = {
			id = { type = 30017 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30017 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30017 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30017 id = 9 }
		name = "3. Corps"
		location = 163
		division = {
			id = { type = 30017 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30017 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30017 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30017 id = 13 }
		name = "4. Corps"
		location = 163
		division = {
			id = { type = 30017 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30017 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30017 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30017 id = 17 }
		name = "Armored Corps"
		location = 163
		division = {
			type = light_armor
			model = 0
			id = { type = 30017 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30017 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30017 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30017 id = 193 }
		name = "Main Fleet"
		location = 184
		base = 184
		division = {
			type = carrier
			model = 0
			id = { type = 30017 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30017 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30017 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30017 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30017 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30017 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30017 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30017 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30017 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30017 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30017 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30017 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30017 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30017 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30017 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30017 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30017 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30017 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30017 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30017 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30017 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30017 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30017 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30017 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30017 id = 173 }
		name = "Bomber Group 1"
		location = 163
		base = 163
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30017 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30017 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30017 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30017 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30017 id = 178 }
		name = "Bomber Group 2"
		location = 163
		base = 163
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30017 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30017 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30017 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30017 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30017 id = 183 }
		name = "Fighter Group 1"
		location = 163
		base = 163
		division = {
			type = interceptor
			model = 6
			id = { type = 30017 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30017 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30017 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30017 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30017 id = 188 }
		name = "Fighter Group 2"
		location = 163
		base = 163
		division = {
			type = interceptor
			model = 6
			id = { type = 30017 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30017 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30017 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30017 id = 192 }
			name = "16th Air Wing"
		}
	}
}
