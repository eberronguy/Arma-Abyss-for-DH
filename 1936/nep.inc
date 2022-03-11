# #############################
# Country definition for NEP #
# #############################

province = { id = 1443 air_base = 1 anti_air = 1 } # Dimapur
province = { id = 1471 air_base = 6 naval_base = 2 anti_air = 2 } # Cuttack
province = { id = 1479 anti_air = 1 } # Jabalpur
province = { id = 1485 anti_air = 1 } # Nagpur
province = { id = 1484 anti_air = 1 } # Satpura Mountains
province = { id = 1459 air_base = 10 anti_air = 3 } # Delhi
province = { id = 1467 anti_air = 2 } # Lucknow
province = { id = 1461 air_base = 9 anti_air = 2 } # Darbhanga
province = { id = 1530 anti_air = 1 } # Lahore
province = { id = 1463 air_base = 7 anti_air = 2 } # Meerut
province = { id = 1529 anti_air = 1 } # Sukkur
province = { id = 1529 air_base = 7 anti_air = 2 } # Multan
province = { id = 1517 naval_base = 5 air_base = 5 anti_air = 2 } # Bombay
province = { id = 1487 anti_air = 2 } # Hyderabad
province = { id = 1506 anti_air = 1 } # Salem
province = { id = 1502 air_base = 4 anti_air = 2 } # Bangalore
province = { id = 1511 air_base = 3 naval_base = 6 anti_air = 3 } # Colombo
province = { id = 1611 naval_base = 4 air_base = 4 anti_air = 2 } # Diego Garcia Island

# ####################
# Country main data #
# ####################

country = {
	tag = UIR
	ai = "NEP.ai"
	belligerence = 50
	# Resource Reserves
	energy = 200
	metal = 200
	rare_materials = 100
	oil = 200
	supplies = 200
	money = 10
	capital = 1459
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
	#	1088 1092 1093 1095 1098 1099 1104 1105 1106 1107 1274 1278 1279 1286 1288 1289 1290 1294 1295 1443 1444 1446 1447 1448 1449 1451 1452 1453 1454 1455 1456 1457
	#	1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1473 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1484 1485 1486 1487 1488 1489 1490 1491 1492
	#	1493 1494 1495 1496 1497 1498 1499 1500 1501 1502 1503 1504 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 1520 1521 1522 1523 1524 1525 1526
	#	1527 1528 1529 1530 1531 1532 1533 1534 1535 1536 1537 1538 1539 1540 1611 1612 2168 2169 2170 2171 2172 2173
	#}
	nationalprovinces = {
		1443 1444 1446 1447 1448 1449 1451 1452 1453 1454 1455 1456 1457 1459 1460
		1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1473 1474 1475 1476 1477
		1478 1479 1480 1481 1482 1483 1484 1485 1486 1487 1488 1489 1490 1491 1492 1493 1494
		1495 1496 1497 1498 1499 1500 1501 1502 1503 1504 1505 1506 1507 1508 1509 1510 1511
		1512 1513 1514 1515 1516 1517 1518 1519 1520 1521 1522 1523 1524 1525 1526 1527 1528
		1529 1530 1531 1532 1533 1534 1535 1536 1537 1538 1539 1540 1611 1612 2168 2169 2170
		2171 2172 2173	
		
		1093 1095 1092 1098 1099 1105 1104 1279 1278 1286 1288
	}
	
	ownedprovinces = {
		1443 1444 1446 1447 1448 1449 1451 1452 1453 1454 1455 1456 1457 1459 1460
		1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1473 1474 1475 1476 1477
		1478 1479 1480 1481 1482 1483 1484 1485 1486 1487 1488 1489 1490 1491 1492 1493 1494
		1495 1496 1497 1498 1499 1500 1501 1502 1503 1504 1505 1506 1507 1508 1509 1510 1511
		1512 1513 1514 1515 1516 1517 1518 1519 1520 1521 1522 1523 1524 1525 1526 1527 1528
		1529 1530 1531 1532 1533 1534 1535 1536 1537 1538 1539 1540 1611 1612 2168 2169 2170
		2171 2172 2173
	}
	controlledprovinces = {
		1443 1444 1446 1447 1448 1449 1451 1452 1453 1454 1455 1456 1457 1459 1460
		1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1473 1474 1475 1476 1477
		1478 1479 1480 1481 1482 1483 1484 1485 1486 1487 1488 1489 1490 1491 1492 1493 1494
		1495 1496 1497 1498 1499 1500 1501 1502 1503 1504 1505 1506 1507 1508 1509 1510 1511
		1512 1513 1514 1515 1516 1517 1518 1519 1520 1521 1522 1523 1524 1525 1526 1527 1528
		1529 1530 1531 1532 1533 1534 1535 1536 1537 1538 1539 1540 1611 1612 2168 2169 2170
		2171 2172 2173
	}
	
	# ######################
	# GW fighter
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
		id = { type = 30006 id = 1 }
		name = "1. Corps"
		location = 1517
		division = {
			id = { type = 30006 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30006 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30006 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30006 id = 5 }
		name = "2. Corps"
		location = 1517
		division = {
			id = { type = 30006 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30006 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30006 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30006 id = 9 }
		name = "3. Corps"
		location = 1517
		division = {
			id = { type = 30006 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30006 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30006 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30006 id = 13 }
		name = "4. Corps"
		location = 1517
		division = {
			id = { type = 30006 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30006 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30006 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30006 id = 17 }
		name = "Armored Corps"
		location = 1517
		division = {
			type = light_armor
			model = 0
			id = { type = 30006 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30006 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30006 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30006 id = 193 }
		name = "Main Fleet"
		location = 1517
		base = 1517
		division = {
			type = carrier
			model = 0
			id = { type = 30006 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30006 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30006 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30006 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30006 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30006 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30006 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30006 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30006 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30006 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30006 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30006 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30006 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30006 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30006 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30006 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30006 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30006 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30006 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30006 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30006 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30006 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30006 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30006 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30006 id = 173 }
		name = "Bomber Group 1"
		location = 1517
		base = 1517
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30006 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30006 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30006 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30006 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30006 id = 178 }
		name = "Bomber Group 2"
		location = 1517
		base = 1517
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30006 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30006 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30006 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30006 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30006 id = 183 }
		name = "Fighter Group 1"
		location = 1517
		base = 1517
		division = {
			type = interceptor
			model = 6
			id = { type = 30006 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30006 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30006 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30006 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30006 id = 188 }
		name = "Fighter Group 2"
		location = 1517
		base = 1517
		division = {
			type = interceptor
			model = 6
			id = { type = 30006 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30006 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30006 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30006 id = 192 }
			name = "16th Air Wing"
		}
	}
}
