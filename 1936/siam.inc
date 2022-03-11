# #############################
# Country definition for SIA #
# #############################

province = { id = 1410 anti_air = 1 } # Mandalay
province = { id = 1419 naval_base = 10 air_base = 3 anti_air = 2 } # Bassein
province = { id = 1415 anti_air = 2 } # Rangoon
province = { id = 1412 air_base = 4 anti_air = 2 } # Toungoo
province = { id = 1425 anti_air = 1 } # Chiang Rai
province = { id = 1395 air_base = 3 naval_base = 4 anti_air = 2 } # Hanoi
province = { id = 1426 air_base = 5 anti_air = 1 } # Phitsanulok
province = { id = 1427 anti_air = 1 } # Khon Kaen
province = { id = 1398 anti_air = 1 } # Pakse
province = { id = 1403 air_base = 1 naval_base = 2 anti_air = 1 } # Rach Gia
province = { id = 1400 anti_air = 1 } # Phnom Penh
province = { id = 1401 anti_air = 1 } # Ubon Ratchthani
province = { id = 1423 anti_air = 3 } # Bangkok
province = {
	id = 1424
	anti_air = 2
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 4 current_size = 4 }
} # Thom Buri
province = { id = 1434 air_base = 5 anti_air = 2 } # Alor Star
province = {
	id = 1432
	naval_base = 5
	anti_air = 2
} # Singapore
province = { id = 1642 naval_base = 1 air_base = 1 anti_air = 1 } # Medan
province = { id = 1636 anti_air = 1 } # Palembang
province = { id = 1641 air_base = 8 anti_air = 2 } # Oosthaven
province = { id = 1650 naval_base = 7 air_base = 7 anti_air = 2 } # Semarang
province = { id = 1643 air_base = 6 anti_air = 2 } # Bali

# ####################
# Country main data #
# ####################

country = {
	tag = UIC
	ai = "SIA.ai"
	belligerence = 50
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	capital = 1423
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
	#nationalprovinces = {
	#	1290 1294 1295 1374 1376 1381 1384 1387 1388 1389 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401
	#	1402 1403 1404 1405 1406 1407 1408 1409 1410 1411 1412 1413 1414 1415 1416 1417 1418 1419 1420 1421 1422
	#	1423 1424 1425 1426 1427 1428 1429 1430 1431 1432 1433 1434 1435 1436 1437 1438 1439 1440 1441 1442 1445 1450
	#	1458 1615 1616 1617 1619 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643
	#	1644 1645 1646 1647 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1658 1659 1660
	#}
	nationalprovinces = {
		1384 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 1406 1407 1408 1409 1410 1411
		1412 1413 1414 1415 1416 1417 1418 1419 1420 1421 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 1432 1433
		1434 1435 1436 1437 1438 1439 1440 1441 1442 1445 1450 1458 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1644 1645
		1646 1647 1648 1649 1650 1651 1652 1653 1654 1655 1656

		1629 1631 1628 1630 1632 1633 1659 1660 1657 1658 1615 1616 1617 1619 1374 1376 1388 1386 1387 1389 1290 1295 1614 1613
	
	}
	
	ownedprovinces = {
		1384 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 1406 1407 1408 1409 1410 1411
		1412 1413 1414 1415 1416 1417 1418 1419 1420 1421 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 1432 1433
		1434 1435 1436 1437 1438 1439 1440 1441 1442 1445 1450 1458 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1644 1645
		1646 1647 1648 1649 1650 1651 1652 1653 1654 1655 1656
	}
	controlledprovinces = {
		1384 1391 1392 1393 1394 1395 1396 1397 1398 1399 1400 1401 1402 1403 1404 1405 1406 1407 1408 1409 1410 1411
		1412 1413 1414 1415 1416 1417 1418 1419 1420 1421 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 1432 1433
		1434 1435 1436 1437 1438 1439 1440 1441 1442 1445 1450 1458 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1644 1645
		1646 1647 1648 1649 1650 1651 1652 1653 1654 1655 1656
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
		id = { type = 30011 id = 1 }
		name = "1. Corps"
		location = 1423
		division = {
			id = { type = 30011 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30011 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30011 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30011 id = 5 }
		name = "2. Corps"
		location = 1423
		division = {
			id = { type = 30011 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30011 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30011 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30011 id = 9 }
		name = "3. Corps"
		location = 1423
		division = {
			id = { type = 30011 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30011 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30011 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30011 id = 13 }
		name = "4. Corps"
		location = 1423
		division = {
			id = { type = 30011 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30011 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30011 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30011 id = 17 }
		name = "Armored Corps"
		location = 1423
		division = {
			type = light_armor
			model = 0
			id = { type = 30011 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30011 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30011 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30011 id = 193 }
		name = "Main Fleet"
		location = 1423
		base = 1423
		division = {
			type = carrier
			model = 0
			id = { type = 30011 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30011 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30011 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30011 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30011 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30011 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30011 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30011 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30011 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30011 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30011 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30011 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30011 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30011 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30011 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30011 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30011 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30011 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30011 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30011 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30011 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30011 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30011 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30011 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30011 id = 173 }
		name = "Bomber Group 1"
		location = 1424
		base = 1424
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30011 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30011 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30011 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30011 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30011 id = 178 }
		name = "Bomber Group 2"
		location = 1424
		base = 1424
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30011 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30011 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30011 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30011 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30011 id = 183 }
		name = "Fighter Group 1"
		location = 1424
		base = 1424
		division = {
			type = interceptor
			model = 6
			id = { type = 30011 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30011 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30011 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30011 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30011 id = 188 }
		name = "Fighter Group 2"
		location = 1424
		base = 1424
		division = {
			type = interceptor
			model = 6
			id = { type = 30011 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30011 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30011 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30011 id = 192 }
			name = "16th Air Wing"
		}
	}
}
