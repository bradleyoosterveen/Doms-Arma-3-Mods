/*
	Faction: UAV Operator
	Author: Dom
*/
class uavop {
	name = $STR_A3_B_SOLDIER_UAV_F0;
	rank = "Sergeant";
	description = $STR_DT_UAVOp_Description;
	maxCount = 1;
	traits[] = { //format {"trait",value,isCustom}}
		{"UAVHacker",true}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconMan_ca.paa";

	defaultLoadout[] = {
		{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},
		{},
		{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},
		{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"Chemlight_green",1,1},{"HandGrenade",1,1}}},
		{"V_PlateCarrierSpec_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,16},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},
		{"B_UAV_01_backpack_F",{}},
		"H_HelmetB","",{},
		{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}
	};

	arsenalWeapons[] = {
		"arifle_MX_ACO_pointer_F"
	};
	arsenalMagazines[] = {
		"30Rnd_65x39_caseless_mag"
	};
	arsenalItems[] = {
		
	};
	arsenalBackpacks[] = {
		
	};
};