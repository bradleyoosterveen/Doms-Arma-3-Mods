/*
	Faction: Team Leader
	Author: Dom
*/
class teamlead {
	name = $STR_B_SOLDIER_TL_F0;
	rank = "Sergeant";
	description = $STR_DT_TeLe_Description;
	maxCount = 10;
	traits[] = { //format {"trait",value,isCustom}}

	};
	icon = "a3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";

	defaultLoadout[] = {
		{"arifle_MX_GL_Hamr_pointer_F","","acc_pointer_IR","optic_Hamr",{"30Rnd_65x39_caseless_mag",30},{"1Rnd_HE_Grenade_shell",1},""},
		{},
		{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},
		{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"Chemlight_green",1,1}}},
		{"V_PlateCarrierGL_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"30Rnd_65x39_caseless_mag_Tracer",2,30},{"16Rnd_9x21_Mag",2,16},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",5,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",1,1},{"1Rnd_SmokeGreen_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1}}},
		{},
		"H_HelmetSpecB","",{"Binocular","","","",{},{},""},
		{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}
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