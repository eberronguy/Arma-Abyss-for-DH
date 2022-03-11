# #############################
# Country definition for UAU #
# #############################

province = { id = 1682 naval_base = 1 air_base = 1 anti_air = 1 } # Nauru
province = { id = 1622 anti_air = 1 } # Ceram
province = { id = 1617 air_base = 4 anti_air = 2 } # East Timor
province = { id = 1599 air_base = 3 naval_base = 5 anti_air = 2 } # Sorong
province = { id = 1618 anti_air = 1 } # Biak Island
province = { id = 1601 air_base = 2 anti_air = 2 } # Kokonau
province = { id = 1594 anti_air = 1 } # Sarmi
province = {
	id = 1726
	naval_base = { size = 7 current_size = 7 }
	air_base = { size = 2 current_size = 2 }
	anti_air = 2
} # Rabaul
province = {
	id = 1602
	air_base = { size = 1 current_size = 1 }
	anti_air = 1
} # Lae
province = { id = 1609 anti_air = 1 } # Kerema
province = { id = 1610 air_base = 6 anti_air = 1 } # Bismarck Range
province = {
	id = 1607
	naval_base = { size = 4 current_size = 4 }
	air_base = { size = 2 current_size = 2 }
	anti_air = 1
	oilpool = 1
	supplypool = 50
} # Port Moresby
province = { id = 1593 naval_base = 1 air_base = 4 anti_air = 2 } # Guadalcanal
province = { id = 1582 anti_air = 1 } # Espirtu Santo
province = { id = 1586 anti_air = 1 } # Noumea
province = { id = 1714 air_base = 5 anti_air = 2 } # Hughenden
province = { id = 1714 anti_air = 1 } # Mount Isa
province = {
	id = 1697
	anti_air = 5
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 10 current_size = 10 }
} # Darwin
province = { id = 1698 air_base = 5 anti_air = 2 } # Wave Hill
province = {
	id = 1690
	anti_air = 5
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 10 current_size = 10 }
	landfort = 0
	coastalfort = 1
} # Perth
province = { id = 1715 anti_air = 1 } # Port Augusta
province = {
	id = 1704
	anti_air = 4
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 10 current_size = 10 }
	landfort = 0
	coastalfort = 1
} # Brisbane
province = { id = 1706 anti_air = 3 } # Wentworth
province = { id = 1717 anti_air = 1 } # Cobar
province = {
	id = 1705
	anti_air = 4
	naval_base = { size = 10 current_size = 10 }
	air_base = { size = 10 current_size = 10 }
	landfort = 0
	coastalfort = 2
} # Sydney
province = { id = 1707 anti_air = 2 } # Canberra
province = { id = 1708 landfort = 0 coastalfort = 1 anti_air = 3 } # Melbourne
province = { id = 1712 anti_air = 2 } # Adelaide
province = { id = 1717 anti_air = 3 } # Broken Hill
province = { id = 1743 air_base = 4 anti_air = 1 } # Tahiti
province = { id = 1729 air_base = 2 anti_air = 1 } # Vanua Levu
province = { id = 1750 naval_base = 6 air_base = 6 anti_air = 2 } # Phoenix Island

# ####################
# Country main data #
# ####################

country = {
	tag = UAU
	ai = "AST.ai"
	manpower = 1000
	belligerence = 50
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 20
	capital = 1707
	transports = 100
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
	diplomacy = { }
	nationalprovinces = {
		1234 1581 1582 1583 1584 1585 1586 1587 1588 1589 1590 1591 1592 1593 1594 1595 1596 1597 1598 1599 1600 1601 1602 1603
		1604 1605 1606 1607 1608 1609 1610 1613 1614 1615 1616 1617 1618 1619 1620 1621 1622 1644 1645 1657 1658 1659 1660 1667
		1668 1669 1670 1671 1678 1679 1680 1682 1687 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702
		1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726
		1727 1728 1729 1730 1731 1732 1733 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 1751
	}
	ownedprovinces = {
		1234 1581 1582 1583 1584 1585 1586 1587 1588 1589 1590 1591 1592 1593 1594 1595 1596 1597 1598 1599 1600 1601
		1602 1603 1604 1605 1606 1607 1608 1609 1610 1613 1614 1615 1616 1617 1618 1619 1620 1621 1622 1678 1679 1680
		1682 1687 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707
		1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726 1727 1728 1729
		1730 1731 1732 1733 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 1751
	}
	controlledprovinces = {
		1234 1581 1582 1583 1584 1585 1586 1587 1588 1589 1590 1591 1592 1593 1594 1595 1596 1597 1598 1599 1600 1601
		1602 1603 1604 1605 1606 1607 1608 1609 1610 1613 1614 1615 1616 1617 1618 1619 1620 1621 1622 1678 1679 1680
		1682 1687 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707
		1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 1718 1719 1720 1721 1722 1723 1724 1725 1726 1727 1728 1729
		1730 1731 1732 1733 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 1751
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
		id = { type = 30001 id = 1 }
		name = "1. Corps"
		location = 1707
		division = {
			id = { type = 30001 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30001 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30001 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30001 id = 5 }
		name = "2. Corps"
		location = 1707
		division = {
			id = { type = 30001 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30001 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30001 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30001 id = 9 }
		name = "3. Corps"
		location = 1707
		division = {
			id = { type = 30001 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30001 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30001 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30001 id = 13 }
		name = "4. Corps"
		location = 1707
		division = {
			id = { type = 30001 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30001 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30001 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30001 id = 17 }
		name = "Armored Corps"
		location = 1707
		division = {
			type = light_armor
			model = 0
			id = { type = 30001 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30001 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30001 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30001 id = 193 }
		name = "Main Fleet"
		location = 1705
		base = 1705
		division = {
			type = carrier
			model = 0
			id = { type = 30001 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30001 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30001 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30001 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30001 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30001 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30001 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30001 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30001 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30001 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30001 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30001 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30001 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30001 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30001 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30001 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30001 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30001 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30001 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30001 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30001 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30001 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30001 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30001 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30001 id = 173 }
		name = "Bomber Group 1"
		location = 1705
		base = 1705
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30001 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30001 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30001 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30001 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30001 id = 178 }
		name = "Bomber Group 2"
		location = 1705
		base = 1705
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30001 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30001 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30001 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30001 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30001 id = 183 }
		name = "Fighter Group 1"
		location = 1705
		base = 1705
		division = {
			type = interceptor
			model = 6
			id = { type = 30001 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30001 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30001 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30001 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30001 id = 188 }
		name = "Fighter Group 2"
		location = 1705
		base = 1705
		division = {
			type = interceptor
			model = 6
			id = { type = 30001 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30001 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30001 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30001 id = 192 }
			name = "16th Air Wing"
		}
	}
}
