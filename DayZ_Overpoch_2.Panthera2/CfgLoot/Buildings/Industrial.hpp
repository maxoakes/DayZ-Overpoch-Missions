class Industrial : Default
{
	zombieChance = 0.4;
	maxRoaming = 2;
	zombieClass[] =
	{
		"z_worker1",
		"z_worker2",
		"z_worker3",
		"z_new_worker2",
		"z_new_worker3",
		"z_new_worker4"
	};
	lootChance = 1;
	lootGroup = Industrial;
};

class Land_Ind_Workshop01_01 : Industrial
{
	zedPos[] =
	{
		{-0.661621,-0.498047,-1.29883},
		{1.24536,0.464844,-1.29498},
		{0.59668,-2.43066,-1.29449}
	};
	lootPos[] =
	{
		/*
		{0.59668,-2.43066,-1.29449},
		{1.24536,0.464844,-1.29498},
		{-0.661621,-0.498047,-1.29883},
		*/
		{1.31201,-2.71387,-1.29234},
		{-0.819336,0.449219,-1.29946}
	};
	lootPosSmall[] =
	{
		{1.81372,-3.33643,-0.714019},
		{1.92627,-1.69531,-1.29493},
		{-1.19482,2.00977,-0.22825},
		{-0.82251,1.2583,-0.836819}
	};
};

class Land_Ind_Garage01 : Industrial
{
	zedPos[] =
	{
		{2.47778,-1.12793,-1.23743},
		{-0.580322,-1.49609,-1.23523},
		{1.32104,1.63184,-1.23218},
		{-0.834229,2.75684,-1.22571}
	};
	lootPos[] =
	{
		/*
		{-0.580322,-1.49609,-1.23523},
		{-0.834229,2.75684,-1.22571},
		{2.47778,-1.12793,-1.23743},
		{1.32104,1.63184,-1.23218},
		*/
		{1.73755,2.71973,-1.24332},
		{-0.880371,-1.9082,-1.23318},
		{0.607178,3.2373,-1.23157}
	};
	lootPosSmall[] =
	{
		{2.9375,2.47754,-1.12036},
		{2.8606,3.33398,-1.12131},
		{1.35205,3.58398,-0.0119934},
		{1.76196,3.62207,-0.772003}
	};
};

class Land_Ind_Workshop01_02 : Industrial
{
	zedPos[] =
	{
		{1.15479,-0.554688,-1.42944},
		{-1.18579,-0.178711,-1.42859},
		{-0.661377,1.10352,-1.42688}
	};
	lootPos[] =
	{
		/*
		{1.15479,-0.554688,-1.42944},
		{-1.18579,-0.178711,-1.42859},
		{-0.661377,1.10352,-1.42688},
		*/
		{1.47144,-0.825195,-1.42987},
		{-1.29663,-0.373047,-1.42896}
	};
	lootPosSmall[] =
	{
		{1.65283,1.66846,-1.42742},
		{-1.75757,-1.08887,-1.43804}
	};
};

class Land_Ind_Workshop01_04 : Industrial
{
	zedPos[] =
	{
		{-1.37415,4.18896,-1.53123},
		{-1.06677,2.69531,-1.53062},
		{0.695435,4.24561,-1.52934},
		{-1.05566,-4.08398,-1.51927},
		{0.79248,-4.60742,-1.49341},
		{-1.84424,-6.1709,-1.44427},
		{1.43774,-6.59424,-1.41742}
	};
	lootPos[] =
	{
		/*
		{-1.37415,4.18896,-1.53123},
		{0.695435,4.24561,-1.52934},
		{-1.06677,2.69531,-1.53062},
		{0.79248,-4.60742,-1.49341},
		{-1.84424,-6.1709,-1.44427},
		{-1.05566,-4.08398,-1.51927},
		{1.43774,-6.59424,-1.41742},
		*/
		{-1.62207,-6.37305,-1.52724},
		{-0.118408,-3.88281,-1.52788},
		{-1.01611,2.13428,-1.53099}
	};
	lootPosSmall[] =
	{
		{-1.3833,-3.02734,-0.298156},
		{-1.9519,-3.37891,-1.52803},
		{1.60425,4.75244,-1.52979},
		{-0.324219,1.91504,-0.680825},
		{-0.302734,2.08545,0.0790772},
		{-1.61523,-3.03809,0.0718207}
	};
	hangPos[] = {{-0.541748,4.01221,-2.03068}};
};

class Land_Ind_Workshop01_L : Industrial
{
	zedPos[] =
	{
		{2.54688,-2.17773,-1.31482},
		{0.903809,-2.58984,-1.31418},
		{3.81299,-4.27051,-1.31345},
		{1.72021,-3.75586,-1.31332},
		{-0.813477,3.56348,-1.30765},
		{-2.38379,2.36133,-1.30405},
		{-3.21143,4.7793,-1.30246}
	};
	lootPos[] =
	{
		/*
		{-3.21143,4.7793,-1.30246},
		{-0.813477,3.56348,-1.30765},
		{-2.38379,2.36133,-1.30405},
		{3.81299,-4.27051,-1.31345},
		{0.903809,-2.58984,-1.31418},
		{2.54688,-2.17773,-1.31482},
		{1.72021,-3.75586,-1.31332},
		*/
		{3.89063,-4.09888,-1.31299},
		{1.80273,-1.88599,-1.31412},
		{-0.928223,4.50635,-1.31364}
	};
	lootPosSmall[] =
	{
		{0.62793,-1.49097,-1.23395},
		{0.805664,-1.45605,-0.0939465},
		{4.56055,-5.29443,-1.31279},
		{0.0273438,5.04443,-0.47565},
		{0.25,5.00342,0.284006}
	};
};

class Land_Hangar_2 : Industrial
{
	zedPos[] =
	{
		{1.79614,7.12695,-2.56329},
		{11.9399,7.90918,-2.56323},
		{5.98828,-2.6123,-2.56323},
		{-8.96973,-4.34961,-2.56323},
		{-0.560791,-7.5957,-2.56317},
		{10.1245,-6.48926,-2.56311},
		{-11.8945,10.541,-2.56311}
	};
	lootPos[] =
	{
		/*
		{10.1245,-6.48926,-2.56311},
		{11.9399,7.90918,-2.56323},
		{1.79614,7.12695,-2.56329},
		{-11.8945,10.541,-2.56311},
		{-8.96973,-4.34961,-2.56323},
		{-0.560791,-7.5957,-2.56317},
		{5.98828,-2.6123,-2.56323},
		*/
		{-13.1816,10.4204,-2.56318},
		{-0.127441,-2.88794,-2.56318},
		{0.291992,3.94775,-2.56318},
		{8.94482,6.87793,-2.56318},
		{-13.688,-4.67871,-2.56318},
		{3.4248,-8.1499,-2.56318}
	};
	lootPosSmall[] =
	{
		{-14.3721,11.1743,-2.56319},
		{-0.0571289,5.94385,-2.56319},
		{11.751,11.3525,-2.56319},
		{-0.458008,-9.68652,-2.56319},
		{-14.3472,-6.29736,-2.56319},
		{14.4277,-4.83154,-2.56319}
	};
};

class Land_A_FuelStation_Build : Industrial
{
	lootChance = 1;
	zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
	zedPos[] =
	{
		{-1.23218,1.26758,-1.57458},
		{1.67871,-0.918945,-1.57458},
		{1.82349,0.769531,-1.57458},
		{-1.31885,-0.655273,-1.57446}
	};
	lootPos[] =
	{
		/*
		{-1.31885,-0.655273,-1.57446},
		{1.82349,0.769531,-1.57458},
		{1.67871,-0.918945,-1.57458},
		{-1.23218,1.26758,-1.57458},
		*/
		{1.88281,-0.879639,-1.57458}
	};
	lootPosSmall[] =
	{
		{-1.92578,0.237061,-0.604466},
		{-1.38672,0.592651,-1.09459}
	};
};

class Land_Shed_Ind02 : Industrial
{
	zedPos[] =
	{
		{4.44653,9.67578,-4.66602},
		{-2.28149,-5.67188,-4.65601},
		{4.41162,2.65137,-1.27954},
		{-3.44482,12.2129,-1.27704},
		{-0.437988,11.6953,-1.2764}
	};
	lootPos[] =
	{
		/*
		{-2.28,-5.67,-4.66},
		{4.45,9.68,-4.67},
		{4.41,2.65,-1.28},
		{-0.44,11.7,-1.28},
		{-3.44,12.21,-1.28},
		{-2.77,5.85,-4.63},
		{3.42,1.62,-4.63},
		{4.69,-9.2,-1.28},
		{-3.93,-2.17,-1.29},
		{-3.94,-8.55,-1.29},
		{-5.57,9.01,-4.13},
		{-5.53,-8.73,-4.09},
		*/
		{3.39893,9.21875,-4.67596},
		{1.29541,0.227539,-4.67596},
		{-0.458984,11.6934,-1.28638},
		{-4.00879,-8.42773,-1.29721}
	};
	lootPosSmall[] =
	{
		{-3.66064,-0.253906,-4.66599},
		{4.44873,9.92578,-4.66599},
		{-0.209961,-0.124023,-4.66599},
		{4.89307,-0.166992,-1.29736},
		{-3.74805,12.123,-1.28674}
	};
};

class Land_Misc_PowerStation : Industrial
{
	zedPos[] =
	{
		{4.22803,-1.19922,-1.28812},
		{4.09863,4.89746,-1.25742}
	};
	lootPos[] =
	{
		/*
		{4.09863,4.89746,-1.25742},
		{4.22803,-1.19922,-1.28812},
		*/
		{2.98767,-5.02051,1.54777},
		{3.67371,5.62207,-2.04407}
	};
	lootPosSmall[] =
	{
		{4.92017,6.24707,-1.26179},
		{1.62573,-6.4541,-1.13445},
		{1.33667,-6.37207,-0.374413},
		{-3.20825,-6.50195,0.315748},
		{-3.84949,-6.2627,-1.16402},
		{-1.35608,-6.3877,-0.374122},
		{-0.895142,-6.39453,-0.37413},
		{2.30383,2.21387,-2.04394},
		{0.0808105,-0.0566406,-1.204},
		{1.98657,3.49121,-0.623982}
	};
};

class Land_Shed_W01 : Industrial
{
	zedPos[] =
	{
		{-1.52832,-0.249023,-1.41138}
	};
	lootPos[] =
	{
		//{-1.52832,-0.249023,-1.41138}
		{-1.46289,-0.12207,-1.41129}
	};
};

class Land_Shed_W4 : Industrial
{
	maxRoaming = 3;
	zedPos[] = {};
	lootPos[] = {{-1.8,2.3,-1.32},{-2.1,-1.85,-1.32},{1.85,2.83,-1.32},{0.85,-0.56,-1.32}};
};

class Land_Tovarna2 : Industrial
{
	zedPos[] =
	{
		{-12.0674,2.57031,-5.62714},
		{-6.39404,-8.25293,-5.62549},
		{0.234375,1.72266,-5.59778},
		{-10.854,-6.9209,-5.56561},
		{-6.77686,-1.73828,-5.56012},
		{-2.03516,6.61426,-5.55927},
		{-4.89844,6.62988,-5.55927},
		{-11.627,7.19629,-5.5592},
		{6.22021,-3.94824,-4.61829},
		{-3.74561,2.9043,-3.9967},
		{-7.14746,8.45313,-2.31165},
		{-12.7241,4.10254,-2.3114},
		{-12.8682,1.44434,-2.31134},
		{-4.55859,5.21777,-2.30164},
		{-4.00293,8.9707,-2.30151},
		{-12.4126,8.12402,-2.27142},
		{-12.1294,-0.157227,0.354309},
		{-8.81348,-0.453125,0.381226},
		{-4.67676,7.32715,1.57178},
		{-11.4702,2.91211,1.59656},
		{-11.0664,8.12988,1.60657},
		{-2.68555,3.43945,3.37433},
		{-13.1958,-8.95898,3.38428}
	};
	lootPos[] =
	{
		/*
		{-11.63,7.2,-5.56},
		{-12.07,2.57,-5.63},
		{-4.9,6.63,-5.56},
		{-3.75,2.91,-4},
		{-12.87,1.44,-2.31},
		{-12.41,8.12,-2.27},
		{-12.72,4.1,-2.31},
		{-4,8.97,-2.3},
		{-7.15,8.45,-2.31},
		{-4.56,5.22,-2.3},
		{-11.47,2.91,1.6},
		{-11.07,8.13,1.61},
		{-4.68,7.33,1.57},
		{-2.69,3.44,3.37},
		{-13.2,-8.96,3.38},
		{-8.81,-0.45,0.38},
		{-12.13,-0.16,0.35},
		{-2.04,6.61,-5.56},
		{0.23,1.72,-5.6},
		{6.22,-3.95,-4.62},
		{-6.39,-8.25,-5.63},
		{-10.85,-6.92,-5.57},
		{-6.78,-1.74,-5.56},
		{8.44,0.52,-4.62},
		{2.1,6.56,-5.58},
		{-8.62,6.18,-5.56},
		{-9.26,7.01,-2.23},
		{-6.39,-0.48,6.45},
		{-4.37,-3.18,6.58},
		{-9.32,-1.18,6.56},
		{-10.16,7.67,6.56},
		{-2.09,-7.35,6.57},
		{0.91,1.59,6.56},
		{-1.2,6.85,6.58},
		*/
		{-2.02222,7.87256,-5.62933},
		{-12.2107,-8.15527,-5.62469},
		{-12.2112,7.7998,-5.62933},
		{-8.99805,7.72168,-2.31135},
		{-6.54077,8.80469,-2.31156},
		{-12.6907,8.04932,1.58661},
		{-9.06421,8.10645,1.58661},
		{-5.39453,9.02783,1.56174},
		{-8.26465,-0.520508,0.37684},
		{-3.83984,4.99121,-2.31156},
		{-6.6416,8.03174,-5.62933},
		{-3.31763,-1.80762,-5.59492},
		{-6.66382,7.57861,1.56174},
		{-12.8,4.30664,1.58661},
		{-12.8074,-0.535156,0.374299},
		{-12.4324,5.15918,-2.31135},
		{-12.8635,1.78174,-5.61933},
		{-3.19507,-8.49707,-5.63091},
		{6.43872,-3.48145,-4.62884},
		{9.97998,-2.35059,-4.62604}
	};
	lootPosSmall[] =
	{
		{-3.22974,9.69678,1.56174},
		{-10.2683,8.87354,1.58661},
		{-13.2981,7.09912,-2.31135},
		{-7.51001,9.64307,-2.31156},
		{-8.13623,5.60693,-5.62933},
		{-13.2112,0.257813,-5.62933},
		{2.41431,-2.05469,-5.62689},
		{1.64185,8.75879,0.374298},
		{-13.2427,-8.98438,3.3743},
		{-4.927,0.368164,0.372077},
		{-3.88208,-3.81641,6.62795},
		{-7.47241,4.50391,1.56174},
		{-8.28833,4.20068,1.58661},
		{-13.2944,-9.01514,0.374299},
		{-7.38672,4.53418,-2.31156},
		{-5.28125,2.875,-5.62933},
		{2.42627,-8.75684,-5.62154}
	};
};

class Land_Ind_Vysypka : Industrial
{
	zedPos[] =
	{
		{-6.26709,26.7344,-4.9772},
		{1.64697,23.4033,-4.97098},
		{7.146,3.9248,-4.96973},
		{4.63623,-12.1621,-4.9697},
		{0.487793,4.9541,-4.9686},
		{-6.30127,2.92969,-4.96838},
		{1.08203,-0.407227,-4.96802},
		{-5.07617,-16.4658,-4.96759},
		{-0.0336914,-10.8203,-4.96686}
	};
	lootPos[] =
	{
		/*
		{0.487793,4.9541,-4.9686},
		{1.08203,-0.407227,-4.96802},
		{-0.0336914,-10.8203,-4.96686},
		{-5.07617,-16.4658,-4.96759},
		{-6.30127,2.92969,-4.96838},
		{-6.26709,26.7344,-4.9772},
		{1.64697,23.4033,-4.97098},
		{7.146,3.9248,-4.96973},
		{4.63623,-12.1621,-4.9697},
		*/
		{1.50195,-15.9287,-4.9663},
		{1.88208,6.03809,-4.97856},
		{-8.42188,10.0103,-4.97909},
		{1.21948,13.2168,-4.97966},
		{-7.09595,26.0376,-4.99675}
	};
	lootPosSmall[] =
	{
		{2.5459,-16.5952,-4.97639},
		{-8.72485,-22.1318,-4.97806}
	};
};

class Land_A_BuildingWIP : Industrial
{
	zedPos[] =
	{
		{-12.6382,0.492188,-6.53247},
		{15.4502,-0.316406,-6.52979},
		{-15.563,-5.17871,-6.50513},
		{-16.0015,-9.80957,-6.50415},
		{-14.5049,-8.13086,-6.49951},
		{14.771,7.2959,-6.47754},
		{-4.62646,4.52344,-6.45264},
		{0.944824,-2.30176,-6.43042},
		{7.28076,3.20898,-6.4104},
		{9.75732,10.1123,-6.4082},
		{20.4893,2.31836,-4.52576},
		{2.22461,-9.21582,-2.53406},
		{-16.3184,-8.35645,-2.53357},
		{-8.92041,-7.18848,-2.53308},
		{17.3125,-3.09961,-2.53271},
		{10.7061,-6.51563,-2.53259},
		{-17.8853,6.63281,-2.53186},
		{-23.1982,8.44629,-2.53186},
		{-17.1982,9.58594,-2.53174},
		{-21.3066,-6.79297,-2.53174},
		{-21.6021,-1.79297,-2.53174},
		{-4.99121,9.80957,-2.53174},
		{14.0864,7.43945,-2.52686},
		{-13.8184,3.99023,1.47827},
		{10.5786,-6.84863,1.4812},
		{-20.6992,-16.9766,1.48291},
		{-15.9497,-6.17578,1.48804},
		{-3.19141,-2.49414,1.49414},
		{-15.415,-13.3896,5.4668}
	};
	lootChance = 1;
	lootPos[] =
	{
		/*
		{0.16,11.99,-6.49},
		{-7.62,-9.06,-6.47},
		{-4.94,-6.01,-6.46},
		{-11.87,-9.73,-6.49},
		{-8.89,9.19,-6.48},
		{-4.24,10.81,-6.51},
		{-21.71,4.84,-6.41},
		{-23.5,11.51,-6.46},
		{-23.95,-1.07,-6.45},
		{-21.7,-9.83,-6.52},
		{-14.56,-13.11,-6.5},
		{-17.56,-15.55,-6.52},
		{-14.35,-16.07,-4.52},
		{-0.67,-14.4,-2.54},
		{15.23,-15.17,-2.54},
		{5.96,-12.56,-2.54},
		{-23.95,3.74,-2.53},
		{-22.82,8.38,1.48},
		{-11.27,10.63,1.5},
		{8.1,7.48,1.49},
		{17.76,2.55,1.43},
		{-7.71,-13.39,-6.87},
		{0.02,-13.18,-6.87},
		{8.24,-13.4,-6.87},
		{7.84,-7.36,-6.51},
		{0.9,4.92,-6.38},
		{-5.73,-1.68,-6.41},
		{-15.84,0.39,-6.48},
		{-11.72,15.21,-6.47},
		{-15.68,9.71,-6.44},
		*/
		{-15.4871,-9.755,-6.53698},
		{-10.4043,-9.76697,-6.53213},
		{-12.0098,-5.50208,-6.53936},
		{-21.5681,-9.69409,-6.54067},
		{-23.7563,8.18347,-6.45811},
		{2.82544,11.3822,-6.47826},
		{-7.49634,-9.24609,-6.52115},
		{6.21216,7.7356,-6.41615},
		{-9.29541,0.683716,-6.53778},
		{16.8376,2.03186,-2.54291},
		{4.77661,-9.35681,-1.50389},
		{-20.3762,-2.86389,-2.53182},
		{-14.3564,-9.68604,-2.5341},
		{-24.1724,7.65405,-2.53182},
		{1.15796,8.03552,-2.53182},
		{-24.0901,11.4227,1.47364},
		{-22.1218,11.8442,1.47786},
		{-22.7849,10.4189,1.47402},
		{-8.66797,5.81238,1.47396},
		{-11.4856,-2.29419,2.50674},
		{-15.6948,-13.5236,5.46682},
		{-8.00171,-1.07678,5.31147},
		{8.66626,-8.14514,5.344},
		{11.5269,2.50977,-6.52237},
		{-15.926,-17.5713,-6.53193},
		{-23.8391,0.109863,-6.47638},
		{-24.2957,2.29199,-2.53182},
		{-7.6853,11.9902,-2.53182},
		{-17.7314,1.81299,-2.53182},
		{2.94116,6.97754,1.47579},
		{-9.39014,-9.62451,1.47428},
		{-24.1311,9.47656,5.46242}
	};
	lootPosSmall[] =
	{
		{-10.4377,-8.03418,-6.54007},
		{-15.9675,-6.70959,-6.54014},
		{-15.8289,7.37451,-6.46946},
		{-6.89136,-5.30615,-6.52994},
		{-7.37231,0.36084,-5.627},
		{-20.3455,-4.8197,-2.24182},
		{-13.9419,-5.02502,-2.53268},
		{-6.2439,11.7518,-1.50182},
		{-23.1213,12.5128,1.47477},
		{-24.5806,9.80115,1.47403},
		{4.63794,-0.358765,2.17724},
		{-5.92505,11.8485,2.50079},
		{-11.2415,4.78796,6.37765},
		{-24.7756,-10.0265,5.46264},
		{5.75464,-9.76001,1.47425},
		{-23.0313,2.87158,-5.43137},
		{-0.398193,7.37256,-6.52535},
		{13.678,1.89307,-6.54251},
		{-7.79321,-9.53564,-2.53376},
		{15.3154,11.478,-2.54182},
		{-19.8633,12.3149,-2.54182},
		{-21.0286,-11.563,5.46691}
	};
};

class Land_Misc_Cargo1Ao : Industrial
{
	zedPos[] =
	{
		{0.00976563,0.19043,-1.09224},
		{0.012207,2.19263,-1.09224},
		{0.48877,-1.61377,-1.09224}
	};
	lootPos[] =
	{
		{0.48877,-1.61377,-1.09224},
		{0.012207,2.19263,-1.09224},
		{0.00976563,0.19043,-1.09224}
	};
};

class Land_Misc_Cargo1Bo : Industrial
{
	zedPos[] =
	{
		{0.223389,-0.580078,-1.09222},
		{-0.322021,1.68555,-1.09222},
		{0.548584,-1.96289,-1.09222}
	};
	lootPos[] =
	{
		{-0.322021,1.68555,-1.09222},
		{0.548584,-1.96289,-1.09222},
		{0.223389,-0.580078,-1.09222}
	};
};

class Land_telek1 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-0.114014,0.609375,13.9082},
		{-1.54883,-0.761719,13.9082}
	};
	lootChance = 1;
	lootPos[] =
	{
		{-0.114014,0.609375,13.9082},
		{-1.54883,-0.761719,13.9082}
	};
};

class Land_Rail_House_01 : Industrial
{
	zedPos[] =
	{
		{0.487793,3.38867,-1.28265},
		{-1.82178,3.10938,-1.28265},
		{2.81152,3.61426,-1.28265}
	};
	lootPos[] =
	{
		/*
		{2.81152,3.61426,-1.28265},
		{-1.82178,3.10938,-1.28265},
		{0.487793,3.38867,-1.28265},
		*/
		{-2.35864,3.04199,-1.28266}
	};
	lootPosSmall[] =
	{
		{3.13745,3.62549,-1.28266}
	};
};

class Land_Barn_Metal : Industrial
{
	zedPos[] =
	{
		{1.78223,7.49902,-5.44214},
		{-3.16846,14.9141,-5.44214},
		{-4.52295,-18.5713,-5.44214},
		{7.79883,20.1406,-5.44214},
		{-8.45898,-8.43848,-5.44214},
		{8.87207,-23.2041,-5.44214},
		{-2.00244,-3.19043,5.40768},
		{10.2598,22.709,5.57785},
		{-9.37109,-22.1816,5.57785}
	};
	lootPos[] =
	{
		/*
		{-2.00244,-3.19043,5.40768},
		{-9.37109,-22.1816,5.57785},
		{10.2598,22.709,5.57785},
		{7.79883,20.1406,-5.44214},
		{8.87207,-23.2041,-5.44214},
		{-4.52295,-18.5713,-5.44214},
		{-8.45898,-8.43848,-5.44214},
		{1.78223,7.49902,-5.44214},
		{-3.16846,14.9141,-5.44214},
		*/
		{-8.18506,19.9023,-5.44214},
		{4.70117,17.2849,-5.44214},
		{1.31738,-7.94946,-5.44214},
		{-7.74316,-20.5955,-5.44214}
	};
	lootPosSmall[] =
	{
		{10.5313,22.6777,5.58788},
		{-9.65137,1.55225,5.58788},
		{-9.48535,-25.0022,5.58788},
		{2.83203,-25.1704,5.58788}
	};
};

class Land_Ind_Expedice_1 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{5.66846,-18.3174,-5.75726},
		{0.120605,13.0664,-5.6839},
		{1.67725,2.15137,-5.6839},
		{-0.315918,13.1416,-3.48672},
		{-11.7915,-13.8818,-3.48672},
		{-6.87695,-18.2285,-3.48672},
		{-0.5625,13.8926,9.71017}
	};
	lootPos[] =
	{
		/*
		{-6.87695,-18.2285,-3.48672},
		{-0.315918,13.1416,-3.48672},
		{-0.5625,13.8926,9.71017},
		{5.66846,-18.3174,-5.75726},
		{1.67725,2.15137,-5.6839},
		{-11.7915,-13.8818,-3.48672},
		{0.120605,13.0664,-5.6839},
		*/
		{5.56104,-18.4136,-5.75725},
		{-10.0732,-18.7891,-3.48673},
		{-6.21045,-7.65479,-3.48673},
		{0.0634766,-0.0908203,-5.68389},
		{-2.59351,18.4795,-5.68389},
		{-1.85474,13.1089,-3.48673}
	};
	lootPosSmall[] =
	{
		{6.71289,-18.1563,-5.75725},
		{-9.12036,-17.6846,-3.48673},
		{-7.7959,-8.31201,-3.48673},
		{-1.51221,0.0673828,-5.68389},
		{-2.6748,11.6543,-5.6839},
		{-2.34814,11.9219,-3.48673}
	};
};

class Land_A_CraneCon : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-7.78271,-1.56445,10.621}
	};
	lootPos[] =
	{
		{-7.78271,-1.56445,10.621}
	};
};

class Land_Ind_Mlyn_03 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-3.09521,-2.06934,-4.17218},
		{-5.604,4.47461,-4.17218},
		{2.34961,-5.01953,9.02472}
	};
	lootPos[] =
	{
		{-5.604,4.47461,-4.17218},
		{-3.09521,-2.06934,-4.17218},
		{2.34961,-5.01953,9.02472}
	};
	lootChance = 1;
};

class Rubbish5 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-0.369629,0.078125,-0.274689}
	};
	lootChance = 1;
	lootPos[] =
	{
		{-0.369629,0.078125,-0.274689}
	};
};

class Land_komin : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{0.126953,2.88086,12.4362}
	};
	lootChance = 1;
	lootPos[] =
	{
		{0.126953,2.88086,12.4362}
	};
};

class Land_Ind_Pec_01 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-1.73682,-10.9668,-22.3766},
		{3.95752,-12.5781,-17.425},
		{-0.951172,-0.967773,-3.83344},
		{-0.181641,15.7451,0.253754},
		{-0.237793,-13.3857,6.21796},
		{-6.78613,-7.21973,14.7371}
	};
	lootChance = 1;
	lootPos[] =
	{
		{-1.73682,-10.9668,-22.3766},
		{3.95752,-12.5781,-17.425},
		{-0.951172,-0.967773,-3.83344},
		{-0.181641,15.7451,0.253754},
		{-0.237793,-13.3857,6.21796},
		{-6.78613,-7.21973,14.7371}
	};
};

class Land_Ind_SiloVelke_01 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{2.62646,7.77051,-5.45245},
		{-10.4751,0.642578,11.8912},
		{-5.62451,3.42188,11.8912},
		{-1.60742,8.15918,21.9993}
	};
	lootChance = 1;
	lootPos[] =
	{
		{2.62646,7.77051,-5.45245},
		{-5.62451,3.42188,11.8912},
		{-10.4751,0.642578,11.8912},
		{-1.60742,8.15918,21.9993}
	};
};

class Land_Misc_Garb_Heap_EP1 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-0.625488,-0.126953,-0.255127}
	};
	lootChance = 1;
	lootPos[] =
	{
		{-0.625488,-0.126953,-0.255127}
	};
};

class Land_Shed_M02 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{-0.0136719,-1.44629,-1.54199}
	};
	lootChance = 1;
	//lootPos[] = {{-0.0136719,-1.44629,-1.54199}};
	lootPosSmall[] = {{1.00586,0.0698242,-1.01666},{-0.931641,0.0825195,-1.01755}};
};

class Fort_Barricade : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{0.241211,-1.00488,-0.244537}
	};
	lootChance = 1;
	lootPos[] =
	{
		{0.241211,-1.00488,-0.244537}
	};
};

class Land_Misc_Rubble_EP1 : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{0.622559,0.367188,-0.0337219}
	};
	lootChance = 1;
	lootPos[] =
	{
		{0.622559,0.367188,-0.0337219}
	};
};

class Land_A_Crane_02b : Industrial
{
	maxRoaming = 0;
	lootChance = 1;
	lootPos[] =
	{
		{-3.4707,-0.149414,-6.06299},
		{-10.9609,-0.0419922,-5.6626},
		{-9.85547,-0.046875,0.922455}
	};
};

class datsun01Wreck : Industrial
{
	maxRoaming = 0;
	lootChance = 1;
	lootPos[] =
	{
		{0.0239258,1.51465,-0.141052}
	};
};

class UralWreck : Industrial
{
	maxRoaming = 0;
	lootChance = 1;
	lootPos[] =
	{
		{-0.27,1.32,-1.19}
	};
};

class Land_Misc_GContainer_Big : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{2.28223,0.792969,0.0986633}
	};
	lootChance = 1;
	lootPos[] =
	{
		{2.28223,0.792969,0.0986633}
	};
};

class Land_trafostanica_velka : Industrial
{
	maxRoaming = 1;
	zedPos[] =
	{
		{-0.688965,5.47168,-2.61597},
		{0.803223,6.91602,-2.61597},
		{1.89258,-1.68164,-2.61597},
		{-2.82227,-6.4502,-2.61597}
	};
	lootChance = 1;
	lootPos[] =
	{
		{-0.688965,5.47168,-2.61597},
		{0.803223,6.91602,-2.61597},
		{1.89258,-1.68164,-2.61597},
		{-2.82227,-6.4502,-2.61597}
	};
};

class Misc_TyreHeap : Industrial
{
	maxRoaming = 0;
	zedPos[] =
	{
		{0.46,-0.2,0.24}
	};
	lootChance = 1;
	lootPos[] =
	{
		{0.46,-0.2,0.24}
	};
};

class Land_sara_hasic_zbroj : Industrial
{
	zedPos[] =
	{
		{0.14,1.76,-2.65},
		{-0.94,-0.97,-2.65},
		{1.86,-0.47,-2.65},
		{2.69,-2.12,-2.65},
		{-3.02,-1.3,-2.65},
		{4.97,-1.94,-2.65},
		{5.67,1.09,-2.65}
	};
	lootChance = 1;
	lootPos[] =
	{
		/*
		{5.67,1.09,-2.65},
		{4.97,-1.94,-2.65},
		{2.69,-2.12,-2.65},
		{1.86,-0.47,-2.65},
		{0.14,1.76,-2.65},
		{-3.02,-1.3,-2.65},
		{-0.94,-0.97,-2.65},
		*/
		{5.92285,1.35645,-2.66287},
		{0.00878906,-1.37549,-2.66287},
		{-1.82715,1.93066,-2.66287}
	};
	lootPosSmall[] =
	{
		{6.81348,-2.16846,-2.66287},
		{-3.30176,-2.49121,-2.67287}
	};
};

class Land_Ind_Quarry : Industrial
{
	zedPos[] =
	{
		{0.74,-10.68,-7.48},
		{-2.97,-15.79,-7.48},
		{6.12,6.62,-7.48},
		{6.38,9.22,-7.48},
		{-7.11,3.25,-7.48}
	};
	lootPos[] = {{-4.53,-6.8,5.25},{-4.36,16.23,5.26},{0.74,-10.68,-7.48},{-2.97,-15.79,-7.48},{-7.11,3.25,-7.48},{6.12,6.62,-7.48},{6.38,9.22,-7.48},{-7.12,13.38,-7.48},{-4.55,6.12,5.29}};
};
// ALT-MAP Support
class Land_MBG_Warehouse : Industrial // cement garage with roll up doors
{
	zombieChance =1;
	zedPos[] = { {18.6279,-11.8701,-6.14345},{18.7441,-3.52979,-6.14345},{19.6816,10.3794,-6.14345} };
	lootPos[] = { 
		{18.6279,-11.8701,-6.14345},
		{18.7441,-3.52979,-6.14345},
		{19.6816,10.3794,-6.14345}, 	
		{19.3037,-4.68115,-2.84345},
		{20.1992,9.28613,-2.84345},
		{-14.5117,-11.2427,5.15655},
		{19.957,-11.1582,5.15655},
		{4.71289,1.58838,5.15655}
	};
};
class Land_aif_tovarna1 : Industrial // concrete, blue sliding doors, generators upstairs
{
	zombieChance =1;
	zedPos[] = { {0.583008,-5.31641,-6.33001},{-9.15723,0.269531,-6.33001} };
	lootPos[] = { {-10.3301,-8.71875,-0.352261}, {2.54883,3.63672,-0.352261},{-5.18652,-8.57422,2.39782},{2.47559,0.566406,2.39782},{-0.111328,0.832031,5.31266},{-8.40918,-5.96484,5.31261}	};
};
class Land_MBG_Radiotelescope : Industrial // radio telescope
{
	zedPos[] = { {1.30273,-5.41602,-8.95671},{-5.34375,2.29785,-9.72141},{-0.125,6.33398,-9.952} };
};
//Land_House_C_10_EP1 in Residential.hpp
class land_mbg_garage_single_b: Industrial {
	lootPos[] = {
		{2.54492,3.97607,-1.03899},
		{4.13672,-0.0625,-1.03899}
	};
	lootPosSmall[] = {
		{4.50586,2.56982,-1.03899}
	};
	zedPos[] = {{2.96094,6.3374,-0.133815}};
};
class Land_seb_bouda_plech : Industrial // shed
{
	zedPos[] = {{0.587891,-0.694336,-1.25855},{-1.32471,2.75488,-1.72853}};
	lootPos[] = {{0.518555,-1.09863,-1.24038},{0.78418,0.317871,-1.30457},{-1.39551,-1.56641,-1.72854},{1.45264,1.75,-1.72855}};
};
//Land_hut_old01 in Residential.hpp
//land_bunka in Office.hpp
class land_molovabud2 : Industrial // brick and concrete
{
	zedPos[] = {{0.902344,2.01514,-1.51244},{-0.229492,2.83521,-1.51244}};
	lootPos[] = {{-1.29492,4.75195,-2.46292},{2.67529,3.74512,-2.46296},{2.27832,-6.29395,-2.46296},{-1.73779,-6.27246,-2.46292},{0.274902,-5.6543,-2.46294},
		{-0.87793,4.93457,-2.46293},{-7.5376,4.89258,1.41187}};
};
class land_molovabud1: Industrial { // brick and concrete
	lootPos[] = {{-2.4458,2.20703,1.27995},{-4.68164,1.95508,1.27995},{-7.92822,6.29199,1.27995},{-1.81055,-1.29199,1.56745}};
};
class land_seb_rozvodna: Industrial {
	lootPos[] = {{-1.2168,2.9668,0.583904}};
};
class land_provoz2 : Industrial // brick with metal roof
{
	zedPos[] = {{-3.44727,-2.83105,-2.30756},{3.27734,1.92676,-2.30756}};
	lootPos[] = {{3,0.40332,-2.51849},{-4.00488,0.662598,-2.51849},{3.23877,-2.76855,-2.30756},{-3.35352,1.86328,-2.30756}};
};
class land_sklad2 : Industrial // brick garage with metal roof
{
	zedPos[] = {{2.60986,-1.60938,-2.38225},{3.19336,2.91602,-2.38225},{-2.04541,-0.470703,-2.38225}};
	lootPos[] = {{2.60986,-1.60938,-2.38225},{3.19336,2.91602,-2.38225},{-2.04541,-0.470703,-2.38225}};
};
class land_hala1 : Industrial // brick factory with tanks inside
{
	zedPos[] = {{2.23096,-5.30859,-3.98352},{1.9248,-3.57227,4.05042},{3.47656,1.4502,4.04957}};
	lootPos[] = {{2.23096,-5.30859,-3.98352},{1.9248,-3.57227,4.05042},{3.47656,1.4502,4.04957}};
};
class land_seb_main_fac : Industrial // large concrete factory
{
	zedPos[] = {{2.23096,-5.30859,-3.98352},{1.9248,-3.57227,4.05042},{3.47656,1.4502,4.04957}};
	lootPos[] = {{4.19727,-1.7002,-5.81592},{13.6123,-3.59717,-5.75059},{18.8447,-0.019043,-5.83285},{4.12305,15.0049,8.63872},{2.93262,5.25195,8.63872},
		{19.748,12.3213,8.63872},{20.1475,5.85547,8.63872},{-6.57617,4.96094,4.16873},{-4.16797,9.9248,4.16873}};
};
class land_garaze: Industrial {
	lootPos[] = {{-0.00292969,-7.72925,-2.12658},{3.7334,1.02759,-2.12658},{3.2793,6.28857,-2.12658},{6.72949,7.34131,-2.12658},{1.68848,-3.91479,-2.12658}};
};
class Land_vys_budova_p1 : Industrial // one story garage 1 broken wood door
{
	zedPos[] = {{5.57129,-4.15234,-2.09256},{4.67871,0.528564,-2.09256},{5.05273,4.5957,-2.09255}};
	lootPos[] = {{-4.2168,-3.61816,-2.96085},{-4.59521,3.25635,-2.96088},{3.84375,2.55566,-2.96088},{1.14941,8.65527,5.59122},{-5.85205,2.18896,5.59122},
		{-3.25635,-9.58398,5.59122},{-2.90771,-0.239746,5.59869},{-1.104,-0.294434,2.12335},{-1.09863,0.403809,-0.407806},{4.30469,-1.36182,-2.96088}};
};
class Land_Ind_Oil_Tower_EP1: Industrial
{
	lootPos[] = {{ 3.55743,-5.92773,-12.9755 },{ 4.63086,1.24902,-12.9932 },{ -0.240356,-1.08252,-12.9875 },{ 6.87689,-6.34961,-8.00889 },{ 2.31177,0.231689,-8.00478 }};
};
class Land_tovarna1: Industrial
{
	lootPos[] = {{ 2.83887,5.23889,-5.75442 },{ -2.30774,7.31934,-5.75442 },{ -11.0908,5.44897,-5.75442 },{ -11.4746,-1.5791,-5.75442 },{ -5.52405,1.68994,-5.75442 },{ 2.82605,1.4801,-5.75442 },
		{ 2.44128,-6.50256,-5.75442 },{ -6.68335,-0.453369,2.17997 },{ -3.81812,0.690186,2.17997 },{ 2.78735,1.19409,2.17997 },{ 1.59167,-6.06665,2.17997 },{ -2.4646,-5.63696,2.17997 },{ -5.77393,-7.28271,2.17997 },{ -0.484985,-3.14197,4.82992 }};
};
class Land_Fort_Watchtower : Industrial // 
{
	zedPos[] = {{0.271973,0.984497,-2.21036}};
	lootPos[] = {{0.126953,-0.00146484,-2.21036}};
};
class Land_ibr_FuelStation_Build: Industrial // gas station
{
	lootChance = 1;
	zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
	zedPos[] = {{2.19458,-0.13916,-1.33611}};
	lootPos[] = {{-1.34521,1.40698,-1.33611},{2.27051,-0.949951,-1.33611},{-2.23193,-1.146,-1.33589},{-0.185059,0.775146,-1.33609}};
};
class Land_House_C_12_EP1: Industrial // makeshift repair shop w/car ramps
{
	zedPos[] = {{2.11182,-8.16724,1.00763},{1.85498,-3.48828,-2.63601},{-2.74854,0.133301,-2.63601},{2.65674,-5.69165,-2.63601},{-2.60742,-7.35913,1.0174}};
	lootPos[] = {{-3.27197,-1.5813,-3.50101},{-2.09863,-6.13086,-3.52102},{-2.979,-8.6936,0.141808},{-2.66602,-3.0437,0.139957},{5.91016,-3.59204,0.132626},{2.33154,-1.00244,-3.51937}};
	lootPosSmall[] = {{-4.03857,-2.06226,-2.43102},{-4.02344,-1.44019,-3.11102},{-3.55371,-0.618164,-3.29102},{7.38184,0.690674,-3.12101},{-2.99268,-6.54883,3.45573},{7.58105,-2.40894,0.112629},{-1.79004,-3.58325,0.128376},{-2.05713,-9.00806,0.150394}};
};
class LAND_garaz_bez_tanku: Industrial // barrier garage thing walk up sides
{
	lootPos[] = {{-2.98047,0.0463867,3.41651}};
	lootPosSmall[] = {{-1.36499,-0.579102,3.42651}};
	zedPos[] = {{-5.14404,-2.02295,-1.71924},{4.92676,-2.67383,-1.71924}};
};
class Land_leseni2x: Industrial
{
	lootPos[] = {{1.15625,-0.206055,2.55466}};
};
class Land_smd_garaz_open: Industrial // garage with 3 green doors
{
	lootPos[] = {{-5.10742,-0.351563,-1.22162},{-1.11328,-0.112305,-1.22162},{3.65039,-0.338867,-1.22162}};
};
// ALT-MAP Support
class Land_Ind_Oil_Pump_EP1: Industrial  // tak oil pump
{
	lootPos[] = {{ 1.49048,-1.99609,-2.08473 }};
};
class land_provoz1: Industrial // nm brick garage
{
	zedPos[] = {{-0.134766,2.26465,-2.30756},{3.37305,1.97266,-2.30756},{-4.29297,-1.39258,-2.30756},{4.35107,-1.93945,-2.30756}};
	lootPos[] = {{1.60449,1.63086,-2.30756},{-2.98193,2.74121,-2.30756},{-1.59277,-2.30273,-2.30756},{1.97852,-2.03613,-2.30756}};
};
class land_b_small1: Industrial // nm cinder blocks 
{
	lootPos[] = {{-3.14185,1.36816,-1.50033},{-0.0275879,-1.74707,-1.50033},{-3.59619,-3.18945,-1.50033},{-0.729004,-4.95996,-1.50033}};
};
class land_seb_nasypka: Industrial // nm cement + metal
{
	zedPos[] = {{7.96338,0.114258,-6.50023}};
	lootPos[] = {{-0.00878906,8.66797,-6.59387},{-0.1875,4.55859,-6.59387},{10.5996,4.24609,-6.52272},{10.7554,1.3623,-6.52408},{9.08057,-6.9873,-0.134289},{2.66699,-7.53906,-0.134289}};
};
class land_kontejner_des: Industrial // nm dumpster
{
	lootPos[] = {{-2.17334,-0.0615234,-0.729944}};
};
class land_f_b2: Industrial { // nm
	lootPos[] = {{1.58398,0.899414,-4.24147},{-1.33301,-0.991211,-4.24147},{1.91113,-1.68262,-4.24147}};
};
class land_bud2: Industrial { // nm
	lootPos[] = {{-2.32031,-1.25,-1.76814},{-1.58008,-2.3125,-1.77484}};
};
class land_seb_mine_main_opt: Industrial { // nm
	lootPos[] = {{0.590332,4.68115,-0.991421},{-1.86768,4.13525,-0.992432},{0.14209,2.53271,-0.995407},{-3.43457,2.68115,-0.995136},{-3.01416,2.59521,-5.08478},{0.776855,-2.89209,-5.11486},{-6.06885,3.33838,7.8684},{-6.38086,-2.05469,7.8684},{-1.7251,-3.09668,7.8684},{-5.64111,-0.92334,14.6913},{-6.23584,2.76465,14.6913}};
};
class land_seb_mine_near: Industrial { // nm
	lootPos[] = {{7.87646,-5.52881,-8.8979},{9.02979,-5.5918,-8.8979},{4.37451,-7.10156,-8.8979}};
};
//DZE ADDED BELOW
class land_trubice: Industrial {
	lootPos[] = {{-2.36719,2.7627,2.59438},{5.82715,3.01563,2.59438},{1.57617,0.709961,2.59438}};
};
class land_x_skladiste_low_tex: Industrial { // concrete, arc roof, broken doors
	zedPos[] = {{12.5835,2.05273,-2.73836},{-10.9365,2.72217,-2.85032}};
	//lootPos[] = {{12.5835,2.05273,-2.73836},{-2.45117,8.69385,-1.62253},{-10.9365,2.72217,-2.85032},{-9.50781,-9.54053,-2.85108},{-12.1572,-6.07861,-2.8506}};
	lootPos[] = {{-8.12354,-0.32373,-2.85032},{-2.31592,-4.27539,-2.5975},{8.15527,-6.89307,-2.5975},{0.398926,4.80029,-2.82628},{-6.0249,-7.64355,-2.85032}};
};
class land_cast1: Industrial {
	lootPos[] = {{-5.39551,6.56055,-4.38392},{-5.68555,9.04297,-4.38393},{-5.57251,9.08203,-4.38393},{-3.05396,14.5527,-4.38392},{2.97681,13.9014,-4.38392},{-0.227783,11.8418,-4.38393},{1.44995,3.27246,-3.50372},{2.53198,-5.45508,-3.5118},{-4.85596,-2.20898,-3.4266},{1.04224,0.729492,-1.06585}};
};
class land_panelova: Industrial {
	lootPos[] = {{16,-14.6357,-4.04666},{3.79102,1.25659,-4.08966},{-15.4639,-8.38086,-4.08966},{-14.3535,-0.195313,-4.08966},{-1.61719,-12.8313,-4.08966},{15.4287,-4.25635,3.37273},{9.19336,-14.6272,3.37141},{5.80957,9.09253,3.37141},{9.95508,9.7937,3.37141},{-8.11523,-2.98291,3.34401},{-15.2598,-8.56641,3.34401}};
};
class land_seb_bouda3: Industrial {
	lootPos[] = {{2.63574,-3.0332,-1.72872},{-2.71875,-5.08691,-1.72873},{-3.00293,-1.50781,-1.72877},{-2.91357,3.86328,-1.72876},{3.12891,3.01563,-1.72879}};
};
class land_f_b1: Industrial { // one story garage and ramp
	zedPos[] = {{2.6582,-3.80225,-3.08734},{3.87988,2.10889,-3.1054}};
	//lootPos[] = {{-3.18848,-0.702148,-2.21533},{-2.42188,-4.46582,-2.21533}};
	lootPos[] = {{-4.45996,-2.84619,-2.21533},{-1.81152,-5.01123,-2.21533},{-5.32227,-5.21875,-2.21533}};
};

class land_jzd_silo_tes: Industrial {
	lootPos[] = {{2.74902,6.52246,0.214748},{11.5796,5.20703,0.214748},{5.72949,0.644531,0.21475},{10.6719,-6.1416,0.214748},{0.97998,-2.64844,0.214373},{3.22168,-7.55664,0.214746},{-2.62695,-0.580078,10.224}};
};
class land_jzd_4silka: Industrial {
	lootPos[] = {{0.551758,-5.24219,1.64133},{0.224609,1.37646,1.64133},{3.04492,0.456055,1.64133},{4.31641,5.94189,5.51407},{-3.53125,-5.80127,5.51407}};
};
class land_seb_vod_vez: Industrial {
	lootPos[] = {{2.02881,0.0849609,15.155}};
};
class land_seb_near_fac: Industrial {
	lootPos[] = {{-10.4116,-18.0859,1.75552}};
};

class Land_FuelStation_Build_PMC : Industrial //IndustrialFuel
{
	lootPos[] = {{-1.29761,-0.527832,-1.336},
		{-1.51141,1.30359,-1.33611},
		{2.23376,0.0710449,-1.33611}};
};
class land_bouda_garaz: Industrial
{
	lootPos[] = {
		{26.1628,-12.502,-0.952108},
		{23.3086,-6.62305,-0.952108}};
};

class Land_hut_old02: Industrial
{
	lootPos[] = {
		{-5.60449,-1.20215,-3.03296},
		{-3.80371,-2.33154,-3.03296},
		{2.10156,-8.16406,-3.03296},
		{3.87402,8.28125,-3.03296}};
};
class land_dum_istan2_02: Industrial
{
	lootPos[] = {
		{-0.566406,-3.44775,-4.14959},
		{-2.00146,1.43604,-4.14959}};
};
class Land_Ind_Garage01_EP1: Industrial
{
	lootPos[] = {
		{1.65088,2.49048,-1.23114}
	};
	lootPosSmall[] = {
		{2.89014,2.49634,-1.12063},
		{2.84814,3.43677,-1.12102},
		{1.39063,3.59766,-0.391855},
		{1.57227,3.61353,0.368147},
		{1.7251,3.61353,-1.15185}
	};
	zedPos[] = {{0.125488,0.557861,-0.357141},{1.11084,-1.33643,-0.36116}};
};
class Land_IndPipe2_bigL_L_EP1: Industrial
{
	lootPos[] = {
		{ 1.09961,1.11572,2.0323 }};
};

class Land_Misc_Cargo1Bo_EP1: Industrial {
	lootPos[] = {{-0.0170898,-0.331421,-1.09225}};
};
class Land_Mil_Repair_center_EP1: Industrial
{
	lootPos[] = {
		{-2.42432,-0.73584,-1.52847},
		{-2.43018,2.83984,-1.52847}};
};
class Land_Ind_PowerStation_EP1: Industrial {
	lootPos[] = {{4.04248,-3.4917,-1.26547},{3.8645,3.5249,-1.28112}};
};
class land_repair_center: Industrial  {
	lootPos[] = {
		{0.327148,1.65479,-2.37888},{-2.35547,-0.163574,-1.71927},{-2.41016,4.45654,-1.71927}
	};
	lootPosSmall[] = {
		{1.80469,2.01709,-1.6489},{1.60352,4.57178,-0.862885},{0.771484,4.55713,-0.48288},{1.56348,4.50439,-1.24289}
	};
	zedPos[] = {{0.982422,-0.634277,-1.51389}};
};

class Land_Ind_TankBig: Industrial
{
	lootChance = 1;
	lootPosSmall[] = {{-1.2981,3.27441,5.34628},{3.49609,-3.02539,5.34628}};
};
class Land_Ind_Coltan_Main_EP1: Industrial {
	lootPos[] = {{4.57178,-9.46716,2.36833},{-3.41223,16.6705,-6.38571},{-2.18005,4.8584,-6.33167},{-1.8158,7.86523,-6.33167},{6.59717,16.1372,0.928326},{7.28076,16.1573,4.84833}};
};

class Land_Ind_FuelStation_Build_EP1: Industrial
{
	lootChance = 1;
	zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
	lootPos[] = {{-1.34521,1.40698,-1.33611},{2.27051,-0.949951,-1.33611},{-2.23193,-1.146,-1.33589},{-0.185059,0.775146,-1.33609}};
};
class hiluxWreck: Industrial
{
	zombieClass[] = {"zZombie_Base","z_hunter"};
	zombieChance = 0.3;
	lootChance = 0;
	minRoaming = 1;
	maxRoaming = 2;
	lootPos[] = {};
};