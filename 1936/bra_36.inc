# #############################
# Country definition for UTL #
# #############################

province = { id = 2050 anti_air = 2 } # Buenos Aires
province = { id = 2005 air_base = 4 anti_air = 1 } # Manaus
province = { id = 2063 air_base = 3 anti_air = 1 } # Riberalta
province = { id = 2016 naval_base = 2 air_base = 5 anti_air = 2 } # Lima
province = { id = 2023 anti_air = 1 } # Santiago
province = { id = 2056 air_base = 3 anti_air = 1 } # Corrientes
province = { id = 2057 anti_air = 1 } # Curitiba
province = {
	id = 2058
	anti_air = 2
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 8 current_size = 8 }
} # Pôrto Alegre
province = { id = 2052 anti_air = 1 } # Montevideo
province = { id = 2053 naval_base = 2 anti_air = 1 } # Mar del Plata
province = { id = 2031 naval_base = 3 anti_air = 1 } # Puerto Aisén
province = { id = 2036 anti_air = 1 } # Santa Cruz
province = { id = 2045 naval_base = 2 air_base = 2 anti_air = 1 } # Falkland Islands
province = { id = 2004 naval_base = 5 anti_air = 1 } # Marajó
province = { id = 2071 anti_air = 2 } # Recife
province = { id = 2067 anti_air = 2 } # Goiás
province = {
	id = 2075
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 6 current_size = 6 }
	anti_air = 2
} # Rio de Janeiro
province = {
	id = 2059
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 6 current_size = 6 }
} # Sao Paulo

# ####################
# Country main data #
# ####################

country = {
	tag = UTL
	belligerence = 50
	ai = "BRA.ai"
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 20
	manpower = 1000
	capital = 2075
	transports = 100
	escorts = 100
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 1
		political_left = 10
		free_market = 6
		freedom = 6
		professional_army = 6
		defense_lobby = 6
		interventionism = 10
	}
	#nationalprovinces = {
	#	1756 1992 1994 1997 1998 1999 2000 2001 2002 2003 2004 2005 2006 2008 2010 2011 2012 2013 2014 2015 2016 2017 2018 2019
	#	2020 2021 2022 2023 2024 2025 2026 2027 2028 2029 2030 2031 2032 2034 2035 2036 2037 2038 2039 2043 2044 2045 2046 2047
	#	2048 2049 2050 2051 2052 2053 2054 2055 2056 2057 2058 2059 2060 2061 2062 2063 2064 2065 2066 2067 2068 2069 2070 2071
	#	2072 2073 2074 2075 2076
	#}
	
	nationalprovinces = {
		1997 1998 1999 2000 2001 2002 2003 2004 2005 2006 2011 2012 2013 2014 2015 2016 2017 2018 2019 2020 2021 2022
		2023 2024 2025 2026 2027 2028 2029 2030 2031 2032 2034 2035 2036 2037 2038 2039 2043 2044 2045 2046 2047 2048
		2049 2050 2051 2052 2053 2054 2055 2056 2057 2058 2059 2060 2061 2062 2063 2064 2065 2066 2067 2068 2069 2070
		2071 2072 2073 2074 2075 2076

		2040 2042 2033 2010 2008 1756 1992
	}
	
	ownedprovinces = {
		1997 1998 1999 2000 2001 2002 2003 2004 2005 2006 2011 2012 2013 2014 2015 2016 2017 2018 2019 2020 2021 2022
		2023 2024 2025 2026 2027 2028 2029 2030 2031 2032 2034 2035 2036 2037 2038 2039 2043 2044 2045 2046 2047 2048
		2049 2050 2051 2052 2053 2054 2055 2056 2057 2058 2059 2060 2061 2062 2063 2064 2065 2066 2067 2068 2069 2070
		2071 2072 2073 2074 2075 2076
	}
	controlledprovinces = {
		1997 1998 1999 2000 2001 2002 2003 2004 2005 2006 2011 2012 2013 2014 2015 2016 2017 2018 2019 2020 2021 2022
		2023 2024 2025 2026 2027 2028 2029 2030 2031 2032 2034 2035 2036 2037 2038 2039 2043 2044 2045 2046 2047 2048
		2049 2050 2051 2052 2053 2054 2055 2056 2057 2058 2059 2060 2061 2062 2063 2064 2065 2066 2067 2068 2069 2070
		2071 2072 2073 2074 2075 2076
	}
	# Semi-Major Tech '36
	# Group C 1936 techs
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
	



	diplomacy = {
		relation = { tag = UIR value = 200 }
	}
	

	landunit = {
		id = { type = 30013 id = 1 }
		name = "1. Corps"
		location = 2075
		division = {
			id = { type = 30013 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30013 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30013 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30013 id = 5 }
		name = "2. Corps"
		location = 2075
		division = {
			id = { type = 30013 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30013 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30013 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30013 id = 9 }
		name = "3. Corps"
		location = 2075
		division = {
			id = { type = 30013 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30013 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30013 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30013 id = 13 }
		name = "4. Corps"
		location = 2075
		division = {
			id = { type = 30013 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30013 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30013 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30013 id = 17 }
		name = "Armored Corps"
		location = 2075
		division = {
			type = light_armor
			model = 0
			id = { type = 30013 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30013 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30013 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30013 id = 193 }
		name = "Main Fleet"
		location = 2075
		base = 2075
		division = {
			type = carrier
			model = 0
			id = { type = 30013 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30013 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30013 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30013 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30013 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30013 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30013 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30013 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30013 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30013 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30013 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30013 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30013 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30013 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30013 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30013 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30013 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30013 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30013 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30013 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30013 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30013 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30013 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30013 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30013 id = 173 }
		name = "Bomber Group 1"
		location = 2075
		base = 2075
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30013 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30013 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30013 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30013 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30013 id = 178 }
		name = "Bomber Group 2"
		location = 2075
		base = 2075
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30013 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30013 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30013 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30013 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30013 id = 183 }
		name = "Fighter Group 1"
		location = 2075
		base = 2075
		division = {
			type = interceptor
			model = 6
			id = { type = 30013 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30013 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30013 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30013 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30013 id = 188 }
		name = "Fighter Group 2"
		location = 2075
		base = 2075
		division = {
			type = interceptor
			model = 6
			id = { type = 30013 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30013 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30013 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30013 id = 192 }
			name = "16th Air Wing"
		}
	}
}
