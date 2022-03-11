# #############################
# Country definition for CHI #
# #############################

province = {
	id = 1328
	naval_base = { size = 10 current_size = 10 }
	anti_air = 3
} # Qingdao
province = { id = 1330 anti_air = 1 } # Jinan
province = { id = 1252 anti_air = 1 } # Taiyuan
province = { id = 1325 air_base = 9 anti_air = 3 } # Nanyang
province = { id = 1337 anti_air = 2 } # Nanjing
province = {
	id = 1338
	naval_base = { size = 10 current_size = 10 }
	anti_air = 2
} # Shanghai
province = {
	id = 1345
	air_base = { size = 10 current_size = 10 }
	anti_air = 2
} # Hangzhou
province = {
	id = 1358
	air_base = { size = 1 current_size = 1 }
	anti_air = 1
} # Fuzhou
province = {
	id = 1352
	air_base = { size = 10 current_size = 10 }
	anti_air = 2
} # Nanchang
province = { id = 1258 anti_air = 1 } # Xi'an
province = { id = 1269 air_base = 7 anti_air = 1 } # Yuling
province = { id = 1390 air_base = 1 anti_air = 3 } # Kunming
province = { id = 1369 anti_air = 1 } # Guangzhou
province = { id = 1365 air_base = 3 naval_base = 4 anti_air = 2 } # Hainan
province = {
	id = 1297
	air_base = { size = 3 current_size = 3 }
	anti_air = 2
} # Chengdu
province = { id = 1306 air_base = 2 anti_air = 1 } # Kaili
province = { id = 1124 anti_air = 1 } # Ulan Bator
province = { id = 1281 air_base = 4 anti_air = 2 } # Urumqi
province = { id = 1122 air_base = 1 anti_air = 1 } # Arvayheer
province = { id = 1283 anti_air = 1 } # Golmud
province = { id = 1284 air_base = 6 anti_air = 1 } # Xining

# ####################
# Country main data #
# ####################

country = {
	tag = UCH
	ai = "CHI.ai"
	capital = 1337 # Nanjing
	belligerence = 50
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 1000
	oil = 1000
	supplies = 1000
	money = 10
	manpower = 1000
	transports = 100
	escorts = 100
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 10
		political_left = 7
		free_market = 6
		freedom = 6
		professional_army = 6
		defense_lobby = 6
		interventionism = 10
	}
	diplomacy = {
	}
	
	#nationalprovinces = {
	#	504 506 1104 1107 1120 1121 1122 1123 1124 1125 1143 1167 1168 1169 1206 1209 1213 1235 1236 1237 1238 1239 1240 1241 1242 1243 1244
	#	1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271
	#	1272 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 1296 1297 1298
	#	1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325
	#	1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352
	#	1353 1354 1355 1356 1357 1358 1359 1360 1365 1367 1368 1369 1370 1371 1372 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1384
	#	1385 1386 1387 1388 1389 1390 1392 1393 1404 1408 1409 1413 1414 1442 1443 1451 1453 1454 1455 1456 1457 1458 1530 1534 1535 1537 1539
	#	1540 2173
	#}
	nationalprovinces = {
		1104 1120 1121 1122 1123 1124 1125 1238 1239 1241 1242 1243 1244 1246 1247 1248 1249 1250 1251 1252 1253 1254
		1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276
		1277 1278 1279 1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 1296 1297 1298
		1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320
		1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342
		1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1365 1367 1368 1369
		1370 1371 1372 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1385 1386 1387 1388 1389 1390

		1392 1393 1395 1405 1404 1413 1409 1384 1414 1458 1455 1456 1452 1457 1451 1454 1453 1540 1539 2173 2170 1105 1106 1107 504 506 505 507 1146 1166 1162 1167 1169 1168 1206 1209 1240 1236 1245
	}
	
	ownedprovinces = {
		1104 1120 1121 1122 1123 1124 1125 1238 1239 1241 1242 1243 1244 1246 1247 1248 1249 1250 1251 1252 1253 1254
		1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276
		1277 1278 1279 1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 1296 1297 1298
		1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320
		1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342
		1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1365 1367 1368 1369
		1370 1371 1372 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1385 1386 1387 1388 1389 1390
	}
	
	controlledprovinces = {
		1104 1120 1121 1122 1123 1124 1125 1238 1239 1241 1242 1243 1244 1246 1247 1248 1249 1250 1251 1252 1253 1254
		1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276
		1277 1278 1279 1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 1296 1297 1298
		1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320
		1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342
		1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1365 1367 1368 1369
		1370 1371 1372 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1385 1386 1387 1388 1389 1390
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
		id = { type = 30016 id = 1 }
		name = "1. Corps"
		location = 1337
		division = {
			id = { type = 30016 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30016 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30016 id = 4 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30016 id = 5 }
		name = "2. Corps"
		location = 1337
		division = {
			id = { type = 30016 id = 6 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30016 id = 7 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30016 id = 8 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30016 id = 9 }
		name = "3. Corps"
		location = 1337
		division = {
			id = { type = 30016 id = 10 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30016 id = 11 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30016 id = 12 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30016 id = 13 }
		name = "4. Corps"
		location = 1337
		division = {
			id = { type = 30016 id = 14 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30016 id = 15 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 30016 id = 16 }
			name = "12th Infantry Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	landunit = {
		id = { type = 30016 id = 17 }
		name = "Armored Corps"
		location = 1337
		division = {
			type = light_armor
			model = 0
			id = { type = 30016 id = 18 }
			name = "1st Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30016 id = 19 }
			name = "2nd Armored Division"
		}
		division = {
			type = light_armor
			model = 0
			id = { type = 30016 id = 20 }
			name = "3rd Armored Division"
		}
	}
	navalunit = {
		id = { type = 30016 id = 193 }
		name = "Main Fleet"
		location = 1338
		base = 1338
		division = {
			type = carrier
			model = 0
			id = { type = 30016 id = 194 }
			name = "Carrier 1"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = carrier
			model = 0
			id = { type = 30016 id = 195 }
			name = "Carrier 2"
			extra = cag
			brigade_model = 0
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30016 id = 196 }
			name = "Battleship 1"
		}
		division = {
			type = battleship
			model = 4
			id = { type = 30016 id = 197 }
			name = "Battleship 2"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30016 id = 198 }
			name = "Battlecruiser 1"
		}
		division = {
			type = battlecruiser
			model = 2
			id = { type = 30016 id = 199 }
			name = "Battlecruiser 2"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30016 id = 200 }
			name = "Heavy Cruiser 1"
		}
		division = {
			type = heavy_cruiser
			model = 3
			id = { type = 30016 id = 201 }
			name = "Heavy Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30016 id = 202 }
			name = "Light Cruiser 1"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30016 id = 203 }
			name = "Light Cruiser 2"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30016 id = 204 }
			name = "Light Cruiser 3"
		}
		division = {
			type = light_cruiser
			model = 3
			id = { type = 30016 id = 205 }
			name = "Light Cruiser 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30016 id = 206 }
			name = "Destroyer 1"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30016 id = 207 }
			name = "Destroyer 2"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30016 id = 208 }
			name = "Destroyer 3"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30016 id = 209 }
			name = "Destroyer 4"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30016 id = 210 }
			name = "Destroyer 5"
		}
		division = {
			type = destroyer
			model = 3
			id = { type = 30016 id = 211 }
			name = "Destroyer 6"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30016 id = 212 }
			name = "Transport 1"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30016 id = 213 }
			name = "Transport 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30016 id = 214 }
			name = "Submarine 1"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30016 id = 215 }
			name = "Submarine 2"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30016 id = 216 }
			name = "Submarine 3"
		}
		division = {
			type = submarine
			model = 1
			id = { type = 30016 id = 217 }
			name = "Submarine 4"
		}
	}
	airunit = {
		id = { type = 30016 id = 173 }
		name = "Bomber Group 1"
		location = 1345
		base = 1345
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30016 id = 174 }
			name = "1st Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30016 id = 175 }
			name = "2nd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30016 id = 176 }
			name = "3rd Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30016 id = 177 }
			name = "4th Air Wing"
		}
	}
	airunit = {
		id = { type = 30016 id = 178 }
		name = "Bomber Group 2"
		location = 1345
		base = 1345
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30016 id = 179 }
			name = "5th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30016 id = 180 }
			name = "6th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30016 id = 181 }
			name = "7th Air Wing"
		}
		division = {
			type = tactical_bomber
			model = 4
			id = { type = 30016 id = 182 }
			name = "8th Air Wing"
		}
	}
	airunit = {
		id = { type = 30016 id = 183 }
		name = "Fighter Group 1"
		location = 1345
		base = 1345
		division = {
			type = interceptor
			model = 6
			id = { type = 30016 id = 184 }
			name = "9th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30016 id = 185 }
			name = "10th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30016 id = 186 }
			name = "11th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30016 id = 187 }
			name = "12th Air Wing"
		}
	}
	airunit = {
		id = { type = 30016 id = 188 }
		name = "Fighter Group 2"
		location = 1345
		base = 1345
		division = {
			type = interceptor
			model = 6
			id = { type = 30016 id = 189 }
			name = "13th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30016 id = 190 }
			name = "14th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30016 id = 191 }
			name = "15th Air Wing"
		}
		division = {
			type = interceptor
			model = 6
			id = { type = 30016 id = 192 }
			name = "16th Air Wing"
		}
	}
}
