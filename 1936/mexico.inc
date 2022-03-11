# #############################
# Country definition for UCS #
# #############################

province = {
	id = 1962
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Charlotte
province = {
	id = 1960
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Charleston
Province = {
	id = 648
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Jacksonville
province = {
	id = 1953
	anti_air = 1
	air_base = { size = 10 current_size = 10 }
	Naval_base = { size = 10 current_size = 10 }
} # Miami
province = {
	id = 1771
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Andros
province = {
	id = 1955
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Atlanta
province = {
	id = 1940
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Memphis
province = {
	id = 1944
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Biloxi
province = {
	id = 1918
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Little Rock
Province = {
	id = 713
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Oklahoma City
province = {
	id = 1928
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Houston
Province = {
	id = 725
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Santa Fe
province = { id = 1977 air_base = 5 anti_air = 3 } # Chihuahua
province = { id = 1980 naval_base = 3 anti_air = 2 } # Culiacán
province = { id = 1975 anti_air = 1 } # Monterrey
Province = {
	id = 748
	air_base = { size = 6 current_size = 6 }
	Naval_base = { size = 8 current_size = 8 }
	anti_air = 3
} # Corpus Christi
province = { id = 1982 anti_air = 1 } # Guadalajara
province = { id = 1974 anti_air = 2 } # Mexico City
province = {
	id = 1972
	anti_air = 2
	air_base = { size = 2 current_size = 2 }
	naval_base = { size = 4 current_size = 4 }
} # Acapulco
province = {
	id = 2088
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 4 current_size = 4 }
} # Guatemala
province = {
	id = 1912
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
} # Tulsa
province = { id = 1989 naval_base = 3 air_base = 3 anti_air = 1 } # Barquisimeto
province = { id = 1764 naval_base = 2 air_base = 2 anti_air = 1 } # Barbados
province = { id = 1987 air_base = 8 anti_air = 3 } # Bogotá
province = {
	id = 889
	anti_air = 3
	air_base = { size = 4 current_size = 4 }
	Naval_base = { size = 4 current_size = 4 }
} # Colon
province = { id = 1781 naval_base = 4 air_base = 4 anti_air = 3 } # Port-au-Prince

# ####################
# Country main data #
# ####################

country = {
	tag = UCS
	ai = "MEX.ai"
	belligerence = 50
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 20
	capital = 1974
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
	#	889 1752 1753 1754 1755 1756 1757 1758 1759 1760 1761 1762 1763 1764 1765 1766 1767 1768 1769 1770 1771 1772 1774 1775 1776 1777 1778 1779 1780 1781 1782 1812 1813 1815 1818
	#	1819 1820 1833 1836 1886 1900 1901 1902 1903 1904 1905 1906 1907 1909 1910 1911 1912 1913 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931
	#	1932 1933 1934 1935 1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 1965 1966
	#	1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 1985 1986 1987 1988 1989 1990 1991 1992 1993 1994 1995 1996 1998 2001 2005 2007 2008 2009 2010
	#	2011 2012 2013 2014 2018 2033 2040 2041 2042 2077 2078 2079 2080 2081 2082 2083 2084 2085 2086 2087 2088
	#}
	nationalprovinces = {
		889 1752 1753 1754 1755 1756 1757 1758 1759 1760 1761 1762 1763 1764 1765 1766 1767 1768 1769 1770 1771 1772 1774 1775 1776 1777 1778 1779 1780 1781
		1782 1903 1904 1905 1906 1910 1911 1912 1913 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935
		1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 1965
		1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 1985 1986 1987 1988 1989 1990 1991 1992 1993 1994 1995 1996 2007
		2008 2009 2010 2033 2040 2041 2042 2077 2078 2079 2080 2081 2082 2083 2084 2085 2086 2087 2088	
	
		2014 2018 2011 2012 2001 2005 1998 1886 1901 1902 1897 1909 1908 1914 1836 1833 1831 1819 1820 1818 1815 1812
	}
	
	ownedprovinces = {
		889 1752 1753 1754 1755 1756 1757 1758 1759 1760 1761 1762 1763 1764 1765 1766 1767 1768 1769 1770 1771 1772 1774 1775 1776 1777 1778 1779 1780 1781
		1782 1903 1904 1905 1906 1910 1911 1912 1913 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935
		1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 1965
		1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 1985 1986 1987 1988 1989 1990 1991 1992 1993 1994 1995 1996 2007
		2008 2009 2010 2033 2040 2041 2042 2077 2078 2079 2080 2081 2082 2083 2084 2085 2086 2087 2088
	}
	controlledprovinces = {
		889 1752 1753 1754 1755 1756 1757 1758 1759 1760 1761 1762 1763 1764 1765 1766 1767 1768 1769 1770 1771 1772 1774 1775 1776 1777 1778 1779 1780 1781
		1782 1903 1904 1905 1906 1910 1911 1912 1913 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935
		1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 1965
		1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 1985 1986 1987 1988 1989 1990 1991 1992 1993 1994 1995 1996 2007
		2008 2009 2010 2033 2040 2041 2042 2077 2078 2079 2080 2081 2082 2083 2084 2085 2086 2087 2088
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
		id = { type = 30002 id = 1 }
		name = "1. Corps"
		location = 1974
		division = {
			id = { type = 30002 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30002 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30002 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30002 id = 5 }
		name = "2. Corps"
		location = 1974
		division = {
			id = { type = 30002 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30002 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30002 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30002 id = 9 }
		name = "3. Corps"
		location = 1974
		division = {
			id = { type = 30002 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30002 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30002 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30002 id = 13 }
		name = "4. Corps"
		location = 1974
		division = {
			id = { type = 30002 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30002 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30002 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30002 id = 17 }
		name = "Armored Corps"
		location = 1974
		division = {
			type = light_armor
			model = 0
			id = { type = 30002 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30002 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30002 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30002 id = 193 }
		name = "Main Fleet"
		location = 1972
		base = 1972
		division = {
			type = carrier
			model = 0
			id = { type = 30002 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30002 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30002 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30002 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30002 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30002 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30002 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30002 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30002 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30002 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30002 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30002 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30002 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30002 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30002 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30002 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30002 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30002 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30002 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30002 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30002 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30002 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30002 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30002 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30002 id = 173 }
		name = "Bomber Group 1"
		location = 1972
		base = 1972
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30002 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30002 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30002 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30002 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30002 id = 178 }
		name = "Bomber Group 2"
		location = 1972
		base = 1972
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30002 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30002 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30002 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30002 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30002 id = 183 }
		name = "Fighter Group 1"
		location = 1972
		base = 1972
		division = {
			type = interceptor
			model = 6
			id = { type = 30002 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30002 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30002 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30002 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30002 id = 188 }
		name = "Fighter Group 2"
		location = 1972
		base = 1972
		division = {
			type = interceptor
			model = 6
			id = { type = 30002 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30002 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30002 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30002 id = 192 }
			name = "16th Air Wing"
		}
	}
}
