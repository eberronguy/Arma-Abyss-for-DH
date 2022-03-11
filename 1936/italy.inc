# #############################
# Country definition for ITA #
# #############################

province = {
	id = 396
	landfort = 5
	anti_air = 3
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 10 current_size = 10 }
} # Genoa
province = {
	id = 399
	anti_air = 3
	naval_base = { size = 10 current_size = 10 }
} # La Spezia
province = {
	id = 407
	air_base = { size = 4 current_size = 4 }
	anti_air = 3
} # Milan
province = {
	id = 400
	anti_air = 2
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 10 current_size = 10 }
} # Venice
province = { id = 352 anti_air = 1 } # Zagreb
province = { id = 350 anti_air = 1 } # Split
province = { id = 343 air_base = 6 naval_base = 1 anti_air = 3 } # Dubrovnik
province = { id = 338 anti_air = 2 } # Belgrade
province = { id = 284 anti_air = 2 } # Budapest
province = { id = 190 air_base = 5 anti_air = 2 } # Graz
province = { id = 195 anti_air = 1 } # Vienna
province = { id = 286 air_base = 8 anti_air = 2 } # Arad
province = { id = 411 anti_air = 1 } # Bologna
province = { id = 410 anti_air = 1 } # Florence
province = {
	id = 419
	anti_air = 1
	air_base = { size = 10 current_size = 10 }
} # Rome
province = {
	id = 421
	air_base = { size = 4 current_size = 4 }
	anti_air = 2
} # Naples
province = {
	id = 422
	anti_air = 1
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 10 current_size = 10 }
} # Taranto
province = {
	id = 430
	anti_air = 2
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 10 current_size = 10 }
} # Palermo
province = { id = 398 landfort = 5 anti_air = 3 } # Turin
province = {
	id = 434
	anti_air = 1
	naval_base = { size = 2 current_size = 2 }
	air_base = { size = 4 current_size = 4 }
	oilpool = 100
	supplypool = 500
} # Sardinia
province = {
	id = 765
	anti_air = 2
	naval_base = { size = 2 current_size = 2 }
	air_base = { size = 2 current_size = 2 }
	landfort = 3
} # Tobruk
province = {
	id = 761
	anti_air = 1
	naval_base = { size = 5 current_size = 5 }
	air_base = { size = 4 current_size = 4 }
} # Bengazi
province = { id = 754 air_base = 7 anti_air = 2 } # Aujila
province = {
	id = 750
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 10 current_size = 10 }
	oilpool = 100
	supplypool = 500
	anti_air = 4
} # Tripoli
province = {
	id = 747
	air_base = { size = 4 current_size = 2 }
	naval_base = 4
	anti_air = 2
} # Tunis

# ####################
# Country main data #
# ####################

country = {
	tag = URO
	ai = "ITA.ai"
	manpower = 1000
	belligerence = 50
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 50
	capital = 419
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
	#	87 90 91 94 98 105 132 133 135 175 176 178 179 186 187 188 189 190 191 192 193 194 195 196 197 203 204 208 209 210 211 213 214 215 276 277 278 279 280 281 282 283 284 285 286 287 288 289 291 292 293 295 296 299 301 308 312 314 315 316 317 318 321 322 323 327 329 330 331
	#	332 334 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358 359 361 389 390 391 392 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432
	#	433 434 435 734 735 737 738 740 741 742 743 744 745 746 747 748 749 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 779 781 782 799 801 802 804 922 946
	#}
	
	nationalprovinces = { 94 186 187 188 189 190 191 192 193 194 195 276 277 278 279 280 281 282 283 284 285 286 287 288 289 291 295 296 312 315 327 330 331 332 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358 389 390 391 392 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 740 741 742 744 745 746 747 748 749 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777
	
	87 90 91 98 97 105 132 133 178 176 175 204 197 208 210 209 215 213 292 293 309 311 308 323 318 321 328 329 361 781 782 779 801 802 804 922 946 738 737 743 734 735
	
	}
	
	
	ownedprovinces = { 94 186 187 188 189 190 191 192 193 194 195 276 277 278 279 280 281 282 283 284 285 286 287 288 289 291 295 296 312 315 327 330 331 332 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358 389 390 391 392 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 740 741 742 744 745 746 747 748 749 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 }
	controlledprovinces = { 94 186 187 188 189 190 191 192 193 194 195 276 277 278 279 280 281 282 283 284 285 286 287 288 289 291 295 296 312 315 327 330 331 332 335 336 337 338 339 340 341 342 343 344 345 346 347 349 350 351 352 353 354 355 356 357 358 389 390 391 392 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 740 741 742 744 745 746 747 748 749 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 }
	
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
		id = { type = 30004 id = 1 }
		name = "1. Corps"
		location = 419
		division = {
			id = { type = 30004 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30004 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30004 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30004 id = 5 }
		name = "2. Corps"
		location = 419
		division = {
			id = { type = 30004 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30004 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30004 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30004 id = 9 }
		name = "3. Corps"
		location = 419
		division = {
			id = { type = 30004 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30004 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30004 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30004 id = 13 }
		name = "4. Corps"
		location = 419
		division = {
			id = { type = 30004 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30004 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30004 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30004 id = 17 }
		name = "Armored Corps"
		location = 419
		division = {
			type = light_armor
			model = 0
			id = { type = 30004 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30004 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30004 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30004 id = 193 }
		name = "Main Fleet"
		location = 399
		base = 399
		division = {
			type = carrier
			model = 0
			id = { type = 30004 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30004 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30004 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30004 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30004 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30004 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30004 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30004 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30004 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30004 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30004 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30004 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30004 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30004 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30004 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30004 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30004 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30004 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30004 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30004 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30004 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30004 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30004 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30004 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30004 id = 173 }
		name = "Bomber Group 1"
		location = 419
		base = 419
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30004 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30004 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30004 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30004 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30004 id = 178 }
		name = "Bomber Group 2"
		location = 419
		base = 419
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30004 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30004 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30004 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30004 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30004 id = 183 }
		name = "Fighter Group 1"
		location = 419
		base = 419
		division = {
			type = interceptor
			model = 6
			id = { type = 30004 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30004 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30004 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30004 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30004 id = 188 }
		name = "Fighter Group 2"
		location = 419
		base = 419
		division = {
			type = interceptor
			model = 6
			id = { type = 30004 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30004 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30004 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30004 id = 192 }
			name = "16th Air Wing"
		}
	}
}
