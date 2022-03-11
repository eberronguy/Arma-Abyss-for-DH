# #############################
# Country definition for ROM #
# #############################

province = { id = 61 anti_air = 1 } # Vinnitsa
province = { id = 302 air_base = 4 anti_air = 2 } # Beltsy
province = { id = 619 anti_air = 1 } # Mogilev Podolski
province = { id = 620 anti_air = 2 } # Balta
province = { id = 617 air_base = 6 anti_air = 3 } # Kiev
province = { id = 606 anti_air = 1 } # Sumy
province = { id = 630 anti_air = 1 } # Zaporozhye
province = {
	id = 636
	air_base = { size = 2 current_size = 2 }
	anti_air = 1
} # Kharkov
province = { id = 637 naval_base = 3 air_base = 5 anti_air = 3 } # Yevpatoriya
province = { id = 644 naval_base = 1 } # Rostov
province = { id = 643 air_base = 4 anti_air = 1 } # Kashary
province = { id = 643 anti_air = 1 } # Morozovsk
province = { id = 645 anti_air = 1 } # Konstatinovsk
province = {
	id = 310
	anti_air = 2
	naval_base = { size = 3 current_size = 3 }
	air_base = { size = 1 current_size = 1 }
} # Constanta
province = {
	id = 316
	anti_air = 2
	air_base = { size = 5 current_size = 5 }
} # Bucharest
province = { id = 311 anti_air = 3 } # Ploesti
province = { id = 306 anti_air = 1 } # Ismail
province = { id = 698 air_base = 3 } # Bashanta

# ####################
# Country main data #
# ####################

country = {
	tag = UTC
	ai = "ROM.ai"
	belligerence = 50
	capital = 627
	manpower = 1000
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 15
	transports = 100
	escorts = 100
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 10
		political_left = 7
		freedom = 6
		free_market = 6
		professional_army = 6
		defense_lobby = 6
		interventionism = 10
	}
	diplomacy = { }
	#nationalprovinces = {
	#	213 215 238 239 240 241 242 244 247 251 287 288 289 291 292 293 296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 317 322 323 325 326 580 581 582 587 588 594 595 596 597
	#	598 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 653
	#	654 655 659 660 661 662 663 691 692 694 696 697 698 699 700 701 702 703 704 705 706 707
	#}
	nationalprovinces = { 238 240 241 242 292 293 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 313 314 316 595 597 598 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 659 662 663 691 692 697 698 699 700 702
	
	326 317 323 315 291 287 288 296 213 239 245 244 249 248 596 594 601 587 581 582 580 654 653 655 661 660 706 704 709 705 703 701 696 695 693 694
	}
	ownedprovinces = { 238 240 241 242 292 293 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 313 314 316 595 597 598 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 659 662 663 691 692 697 698 699 700 702 }
	controlledprovinces = { 238 240 241 242 292 293 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 313 314 316 595 597 598 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 659 662 663 691 692 697 698 699 700 702 }
	
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
		id = { type = 30015 id = 1 }
		name = "1. Corps"
		location = 316
		division = {
			id = { type = 30015 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30015 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30015 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30015 id = 5 }
		name = "2. Corps"
		location = 316
		division = {
			id = { type = 30015 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30015 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30015 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30015 id = 9 }
		name = "3. Corps"
		location = 316
		division = {
			id = { type = 30015 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30015 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30015 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30015 id = 13 }
		name = "4. Corps"
		location = 316
		division = {
			id = { type = 30015 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30015 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30015 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30015 id = 17 }
		name = "Armored Corps"
		location = 316
		division = {
			type = light_armor
			model = 0
			id = { type = 30015 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30015 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30015 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30015 id = 193 }
		name = "Main Fleet"
		location = 310
		base = 310
		division = {
			type = carrier
			model = 0
			id = { type = 30015 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30015 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30015 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30015 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30015 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30015 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30015 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30015 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30015 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30015 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30015 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30015 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30015 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30015 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30015 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30015 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30015 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30015 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30015 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30015 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30015 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30015 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30015 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30015 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30015 id = 173 }
		name = "Bomber Group 1"
		location = 316
		base = 316
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30015 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30015 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30015 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30015 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30015 id = 178 }
		name = "Bomber Group 2"
		location = 316
		base = 316
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30015 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30015 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30015 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30015 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30015 id = 183 }
		name = "Fighter Group 1"
		location = 316
		base = 316
		division = {
			type = interceptor
			model = 6
			id = { type = 30015 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30015 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30015 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30015 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30015 id = 188 }
		name = "Fighter Group 2"
		location = 316
		base = 316
		division = {
			type = interceptor
			model = 6
			id = { type = 30015 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30015 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30015 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30015 id = 192 }
			name = "16th Air Wing"
		}
	}
}
