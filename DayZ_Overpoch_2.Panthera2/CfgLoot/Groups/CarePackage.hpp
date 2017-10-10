//Vehicle class, min loot, max loot, min loot distance, max loot distance
CarePackageType[] =
{
	{Loot_NONE,			5,		Misc_cargo_cont_net1, 3, 6},
	{Loot_NONE,			4,		Misc_cargo_cont_net2, 4, 9},
	{Loot_NONE,			3,		Misc_cargo_cont_net3, 5, 12}
};

CarePackage[] =
{
	{Loot_GROUP,		7,		overwatch_rifles_west},
	{Loot_GROUP,		5,		overwatch_rifles_west},
	{Loot_GROUP,		2,		overwatch_snipers},
	{Loot_GROUP,		1,		overwatch_machines},
	{Loot_GROUP,		2,		overwatch_mil_ammo_rare},
	{Loot_GROUP,		2,		overwatch_pistols},
	{Loot_GROUP,		1,		overwatch_civ_ammo},
	
	//Tools
	{Loot_WEAPON,		5,		ItemFlashlight},
	{Loot_WEAPON,		2,		ItemCompass},
	{Loot_WEAPON,		3,		ItemMap},
	{Loot_WEAPON,		4,		ItemWatch},
	{Loot_WEAPON,		5,		ItemKnife},
	
	//Backpacks
	{Loot_GROUP,		4,		backpacks},
	{Loot_GROUP,		3,		militarybackpacks},
	
	//Containers
	{Loot_CONTAINER,	5,		DZ_CardboardBox, Consumable, 6, 12},
	{Loot_CONTAINER,	3,		DZ_MedBox, MedicalHigh, 8, 16},
	
	//Items
	{Loot_MAGAZINE,		6,		ItemTent},
	{Loot_MAGAZINE,		4,		ItemDomeTent},
	{Loot_PILE,			10,		MedicalLow, 1, 3},
	{Loot_PILE,			15,		Consumable, 1, 3},
	{Loot_WEAPON,		3,		ItemMatchbox},
	{Loot_GROUP,		12,		Generic}
};