#include "\z\addons\dayz_code\system\mission\server_traders\panthera2.sqf"

// Hero Vendor P
menu_Tanny_PMC = [
	[["Ammunition",1063],["Clothes",1065],["Helicopter Armed",1068],["Military Armed",1069],["Trucks Armed",1070],["Weapons",1066]],
	[],
	"hero"
];
// Ammunition Neutral P
menu_BAF_Soldier_AMG_W = [
	[["Assault Rifle Ammo",1055],["Light Machine Gun Ammo",1056],["Pistol Ammo",1057],["Shotguns and Single-shot Ammo",1058],["Sniper Rifle Ammo",1059],
	["Submachine Gun Ammo",1060],["(OW) Civilian Ammo",1061],["(OW) Military Ammo",1062]],
	[],
	"neutral"
];
// Weapons Neutral P
menu_BAF_Soldier_AAA_DDPM = [
	[["Attachments",1032],["Assault Rifle",1033],["Light Machine Gun",1034],["Pistols",1035],["Shotguns and Single-shot",1036],
	["Sniper Rifle",1037],["Submachine Guns",1038],["(OW) Pistols",1039],["(OW) Eastern Rifles",1040],["(OW) HK416 Variants",1041],
	["(OW) HK417 Variants",1042],["(OW) TAR Variants",1043],["(OW) MAS Variants",1044],["(OW) Bushmaster ACR Variants",1045],
	["(OW) ACR Wildland Variants",1046],["(OW) ACR Black Variants",1047],["(OW) ACR Tan Variants",1048],["(OW) ACR Snow Variants",1049],
	["(OW) Assault Rifles",1050],["(OW) Sniper Rifles",1051],["(OW) LMGs",1052],["(OW) SMGs",1054]],
	[],
	"neutral"
];
// Neutral Vehicles P
menu_CZ_Special_Forces_MG_DES_EP1 = [
	[["Bikes and ATV",1005],["Buses and Vans",1006],["Cargo Trucks",1007],["Fuel Trucks",1008],
	["Military Unarmed",1009],["Trucks",1010],["Used Cars",1011],["Utility Vehicles",1012],["(OW) Cars",1013],["(OW) Cop Cars",1014]],
	[],
	"neutral"
];
// General Store P
menu_Damsel5 = [
	[["Backpacks",1020],["Clothes",1021],["Cooked Meats",1022],["Drinks",1023],["Packaged Food",1024]],
	[["ItemTinBar","TrashJackDaniels",1,1,"buy","Empty Whiskey Bottle","Tin Bar",101]],
	"neutral"
];
// Weapons neutral 1P
menu_GUE_Commander = [
	[["Attachments",1032],["Assault Rifle",1033],["Light Machine Gun",1034],["Pistols",1035],["Shotguns and Single-shot",1036],
	["Sniper Rifle",1037],["Submachine Guns",1038],["(OW) Pistols",1039],["(OW) Eastern Rifles",1040],["(OW) HK416 Variants",1041],
	["(OW) HK417 Variants",1042],["(OW) TAR Variants",1043],["(OW) MAS Variants",1044],["(OW) Bushmaster ACR Variants",1045],
	["(OW) ACR Wildland Variants",1046],["(OW) ACR Black Variants",1047],["(OW) ACR Tan Variants",1048],["(OW) ACR Snow Variants",1049],
	["(OW) Assault Rifles",1050],["(OW) Sniper Rifles",1051],["(OW) LMGs",1052],["(OW) SMGs",1054]],
	[],
	"neutral"
];
// Ammunition Neutral 1P
menu_GUE_Woodlander1 = [
	[["Assault Rifle Ammo",1055],["Light Machine Gun Ammo",1056],["Pistol Ammo",1057],["Shotguns and Single-shot Ammo",1058],["Sniper Rifle Ammo",1059],
	["Submachine Gun Ammo",1060],["(OW) Civilian Ammo",1061],["(OW) Military Ammo",1062]],
	[],
	"neutral"
];
// Neutral Building/Parts P
menu_GUE_Woodlander3 = [
	[["Building Supplies",1028],["Tools",1029],["Vehicle Parts",1030]],
	[],
	"neutral"
];
// Bandit Trader P
menu_GUE_Soldier_Sab = [
	[["Ammunition",1063],["Clothes",1064],["Helicopter Armed",1068],["Military Armed",1069],["Trucks Armed",1070],["Weapons",1066]],
	[],
	"hostile"
];
// Aircraft Dealer P
menu_GUE_Soldier_Pilot = [
	[["Airplanes",1015],["Helicopter Unarmed",1016],["(OW) Air Vehicles",1017]],
	[],
	"neutral"
];
// Vehicles Neutral 1P
menu_GUE_Soldier_2 = [
	[["Bikes and ATV",1005],["Buses and Vans",1006],["Cargo Trucks",1007],["Fuel Trucks",1008],
	["Military Unarmed",1009],["Trucks",1010],["Used Cars",1011],["Utility Vehicles",1012],["(OW) Cars",1013],["(OW) Cop Cars",1014]],
	[],
	"neutral"
];
// Black Market Vendor 1P
menu_Soldier_PMC = [
	[["Black Market Weapons",1001],["Black Market Ammo",1002],["Explosives",1003],["(OW) Launchers",1053],["(OW) Rockets",1004]],
	[],
	"neutral"
];
// Neutral Building/Parts 1P
menu_Citizen2_EP1 = [
	[["Building Supplies",1028],["Tools",1029],["Vehicle Parts",1030]],
	[],
	"neutral"
];
// Neutral Vehicle 2P
menu_Rita_Ensler_EP1 = [
	[["Bikes and ATV",1005],["Buses and Vans",1006],["Cargo Trucks",1007],["Fuel Trucks",1008],
	["Military Unarmed",1009],["Trucks",1010],["Used Cars",1011],["Utility Vehicles",1012],["(OW) Cars",1013],["(OW) Cop Cars",1014]],
	[],
	"neutral"
];
// Neutral General Store 1P
menu_RU_Farmwife1 = [
	[["Backpacks",1020],["Clothes",1021],["Cooked Meats",1022],["Drinks",1023],["Packaged Food",1024]],
	[["ItemTinBar","TrashJackDaniels",1,1,"buy","Empty Whiskey Bottle","Tin Bar",101]],
	"neutral"
];
// Medical Supplies P
menu_US_Soldier_Medic_EP1 = [
	[["Chem-lites/Flares",1025],["Smoke Grenades",1026],["Medical Supplies",1027]],
	[["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat",101]],
	"neutral"
];
// Weapons Neutral 2P
menu_USMC_Soldier_TL = [
	[["Attachments",1032],["Assault Rifle",1033],["Light Machine Gun",1034],["Pistols",1035],["Shotguns and Single-shot",1036],
	["Sniper Rifle",1037],["Submachine Guns",1038],["(OW) Pistols",1039],["(OW) Eastern Rifles",1040],["(OW) HK416 Variants",1041],
	["(OW) HK417 Variants",1042],["(OW) TAR Variants",1043],["(OW) MAS Variants",1044],["(OW) Bushmaster ACR Variants",1045],
	["(OW) ACR Wildland Variants",1046],["(OW) ACR Black Variants",1047],["(OW) ACR Tan Variants",1048],["(OW) ACR Snow Variants",1049],
	["(OW) Assault Rifles",1050],["(OW) Sniper Rifles",1051],["(OW) LMGs",1052],["(OW) SMGs",1054]],
	[],
	"neutral"
];
// Ammunition Neutral 2P
menu_USMC_SoldierS_Engineer = [
	[["Assault Rifle Ammo",1055],["Light Machine Gun Ammo",1056],["Pistol Ammo",1057],["Shotguns and Single-shot Ammo",1058],["Sniper Rifle Ammo",1059],
	["Submachine Gun Ammo",1060],["(OW) Civilian Ammo",1061],["(OW) Military Ammo",1062]],
	[],
	"neutral"
];
// East Wholesaler P
menu_UN_CDF_Soldier_AAT_EP1 = [
	[["Wholesale",1031]],
	[],
	"neutral"
];
// General Store 2P
menu_ValentinaVictim = [
	[["Backpacks",1020],["Clothes",1021],["Cooked Meats",1022],["Drinks",1023],["Packaged Food",1024]],
	[["ItemTinBar","TrashJackDaniels",1,1,"buy","Empty Whiskey Bottle","Tin Bar",101]],
	"neutral"
];
// North Wholesaler P
menu_UN_CDF_Soldier_MG_EP1 = [
	[["Wholesale",1031]],
	[],
	"neutral"
];
// Boat Vendor South P
menu_GUE_Soldier_1 = [
	[["Boats Armed",1018],["Boats Unarmed",1019]],
	[],
	"neutral"
];
// Vehicles Neutral 3p
menu_FR_Corpsman = [
	[["Bikes and ATV",1005],["Buses and Vans",1006],["Cargo Trucks",1007],["Fuel Trucks",1008],
	["Military Unarmed",1009],["Trucks",1010],["Used Cars",1011],["Utility Vehicles",1012],["(OW) Cars",1013],["(OW) Cop Cars",1014]],
	[],
	"neutral"
];
// Neutral Building/Parts 3P
menu_GUE_Soldier_AR = [
	[["Building Supplies",1028],["Tools",1029],["Vehicle Parts",1030]],
	[],
	"neutral"
];
// Medical Supplies 1P
menu_Dr_Hladik_EP1 = [
	[["Chem-lites/Flares",1025],["Smoke Grenades",1026],["Medical Supplies",1027]],
	[["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat",101]],
	"neutral"
];
// Medical Supplies 3
menu_RU_Doctor = [
	[["Chem-lites/Flares",1025],["Smoke Grenades",1026],["Medical Supplies",1027]],
	[["FoodBioMeat","ItemZombieParts",1,1,"buy","Zombie Parts","Bio Meat",101]],
	"neutral"
];
// Boat Trader 1P
menu_RU_Villager1 = [
	[["Boats Armed",1018],["Boats Unarmed",1019]],
	[],
	"neutral"
];
// Neutral Building/Parts 4p
menu_Reynolds_PMC = [
	[["Building Supplies",1028],["Tools",1029],["Vehicle Parts",1030]],
	[],
	"neutral"
];