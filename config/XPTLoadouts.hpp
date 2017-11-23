// XPTloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
// Also supports sub-loadout randomization. If a loadout has sub-classes defined, the script will automatically select one of them to apply to the unit.
class loadouts
{
	class B_Soldier_SL_F
	{
		displayName = "Squadleader"; 
		
		weapons[] = {"CUP_arifle_Mk16_STD_EGLM_black", "", "hgun_Pistol_heavy_01_F", "Binocular"}; 
		primaryWeaponItems[] = {"CUP_muzzle_snds_SCAR_L", "acc_pointer_IR", "optic_Hamr","hlc_30rnd_556x45_M","1Rnd_HE_Grenade_shell"}; 
		secondaryWeaponItems[] = {""}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "CUP_H_USArmy_HelmetMICH_wdl";
		facewearClass = "";
		vestClass = "TFAx_PlateCarrier_grn";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemAndroid"}; 
		uniformItems[] = {{"ACE_Banana",1},{"ACE_CableTie",4}, {"FHQ_optic_AC11704",1},{"HandGrenade", 2},{"11Rnd_45ACP_Mag",1}}; 
		vestItems[] = {{"1Rnd_HE_Grenade_shell", 2},{"hlc_30rnd_556x45_M", 9},{"1Rnd_Smoke_Grenade_shell", 2},{"1Rnd_SmokeRed_Grenade_shell", 2}}; 
		backpackItems[] = {{"ACE_quikclot",8}, {"ACE_elasticBandage",6},{"ACE_packingBandage",2},{"ACE_bloodIV_250",1},{"ACE_tourniquet",1},{"ACE_morphine",2},{"ACE_epinephrine",1},{"SmokeShell",2},{"SmokeShellBlue",1},{"hlc_200rnd_556x45_M_SAW",1}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
	class B_soldier_AR_F
	{
		displayName = "Autorifleman"; 
		
		weapons[] = {"hlc_m249_pip4", "", "hgun_Pistol_heavy_01_F", "Binocular"}; 
		primaryWeaponItems[] = {"muzzle_snds_H_MG_blk_F", "acc_pointer_IR", "optic_Hamr",{"hlc_200rnd_556x45_M_SAW",1}}; 
		secondaryWeaponItems[] = {""}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "TFAX_H_HelmetIA_US_wood";
		facewearClass = "";
		vestClass = "TFAx_PlateCarrier_grn";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; 
		uniformItems[] = {{"ACE_Banana",1},{"FHQ_optic_AC11704",1},{"HandGrenade", 2},{"11Rnd_45ACP_Mag",1}}; 
		vestItems[] = {"1Rnd_HE_Grenade_shell",{"hlc_200rnd_556x45_M_SAW", 2}}; 
		backpackItems[] = {{"ACE_quikclot",8}, {"ACE_elasticBandage",6},{"ACE_packingBandage",2},{"ACE_bloodIV_250",1},{"ACE_tourniquet",1},{"ACE_morphine",2},{"ACE_epinephrine",1},{"SmokeShell",2},{"SmokeShellBlue",1}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
	class B_soldier_LAT_F
	{
		displayName = "Rifleman AT"; 
		
		weapons[] = {"CUP_arifle_Mk16_STD_FG_black", "CUP_launch_M136", "hgun_Pistol_heavy_01_F", "Binocular"}; 
		primaryWeaponItems[] = {"CUP_muzzle_snds_SCAR_L", "acc_pointer_IR", "optic_Hamr","hlc_30rnd_556x45_M"}; 
		secondaryWeaponItems[] = {"CUP_M136_M"}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "TFAX_H_HelmetIA_US_wood";
		facewearClass = "";
		vestClass = "TFAx_PlateCarrier_grn";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; 
		uniformItems[] = {{"ACE_Banana",1},{"FHQ_optic_AC11704",1},{"HandGrenade", 2},{"11Rnd_45ACP_Mag",1}}; 
		vestItems[] = {"1Rnd_HE_Grenade_shell",{"hlc_30rnd_556x45_M", 10}}; 
		backpackItems[] = {{"ACE_quikclot",8}, {"ACE_elasticBandage",6},{"ACE_packingBandage",2},{"ACE_bloodIV_250",1},{"ACE_tourniquet",1},{"ACE_morphine",2},{"ACE_epinephrine",1},{"SmokeShell",2},{"SmokeShellBlue",1},{"hlc_200rnd_556x45_M_SAW",1}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
	class B_engineer_F
	{
		displayName = "Engineer"; 
		
		weapons[] = {"CUP_arifle_Mk16_STD_FG_black", "", "hgun_Pistol_heavy_01_F", "Binocular"}; 
		primaryWeaponItems[] = {"CUP_muzzle_snds_SCAR_L", "acc_pointer_IR", "optic_Hamr","hlc_30rnd_556x45_M"}; 
		secondaryWeaponItems[] = {""}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "CUP_H_USArmy_Helmet_ECH2_Black";
		facewearClass = "";
		vestClass = "TFAx_PlateCarrier_grn";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; 
		uniformItems[] = {{"ACE_Banana",1},"FHQ_optic_AC11704","ACE_Clacker",{"HandGrenade", 2},{"11Rnd_45ACP_Mag",1}}; 
		vestItems[] = {"1Rnd_HE_Grenade_shell",{"hlc_30rnd_556x45_M", 10},"ACE_DefusalKit","DemoCharge_Remote_Mag"}; 
		backpackItems[] = {{"ACE_quikclot",8}, {"ACE_elasticBandage",6},{"ACE_packingBandage",2},{"ACE_bloodIV_250",1},{"ACE_tourniquet",1},{"ACE_morphine",2},{"ACE_epinephrine",1},{"SmokeShell",2},{"SmokeShellBlue",1},{"hlc_200rnd_556x45_M_SAW",1}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
	class B_Soldier_A_F
	{
		displayName = "Ammobearer"; 
		
		weapons[] = {"CUP_arifle_Mk16_STD_FG_black", "", "hgun_Pistol_heavy_01_F", "Binocular"}; 
		primaryWeaponItems[] = {"CUP_muzzle_snds_SCAR_L", "acc_pointer_IR", "optic_Hamr","hlc_30rnd_556x45_M"}; 
		secondaryWeaponItems[] = {""}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "H_Cap_oli_hs";
		facewearClass = "";
		vestClass = "TFAx_PlateCarrier_grn";
		backpackClass = "B_Carryall_oli";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; 
		uniformItems[] = {{"ACE_Banana",1},{"FHQ_optic_AC11704",1},{"HandGrenade", 2}}; 
		vestItems[] = {{"hlc_30rnd_556x45_M", 8}, {"SmokeShell",2},{"SmokeShellBlue",1}}; 
		backpackItems[] = {{"ACE_quikclot",8}, {"ACE_elasticBandage",6},{"ACE_packingBandage",2},{"ACE_bloodIV_250",1},{"ACE_tourniquet",1},{"ACE_morphine",2},{"ACE_epinephrine",1},{"CUP_MAAWS_HEAT_M",1},{"hlc_200rnd_556x45_M_SAW",1},{"1Rnd_HE_Grenade_shell",5},{"30Rnd_556x45_Stanag_Tracer_Yellow",10}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
	class B_Soldier_GL_F
	{
		displayName = "Grenadier"; 
		
		weapons[] = {"CUP_arifle_Mk16_STD_EGLM_black", "", "hgun_Pistol_heavy_01_F", "Binocular"}; 
		primaryWeaponItems[] = {"CUP_muzzle_snds_SCAR_L", "acc_pointer_IR", "optic_Hamr","hlc_30rnd_556x45_M","1Rnd_HE_Grenade_shell"}; 
		secondaryWeaponItems[] = {""}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "TFAX_H_HelmetIA_US_wood";
		facewearClass = "";
		vestClass = "TFAx_PlateCarrier_grn";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; 
		uniformItems[] = {{"ACE_Banana",1},{"FHQ_optic_AC11704",1},{"HandGrenade", 2},{"11Rnd_45ACP_Mag",1}}; 
		vestItems[] = {"1Rnd_HE_Grenade_shell",{"hlc_30rnd_556x45_M", 10},{"1Rnd_HE_Grenade_shell",12}}; 
		backpackItems[] = {{"ACE_quikclot",8}, {"ACE_elasticBandage",6},{"ACE_packingBandage",2},{"ACE_bloodIV_250",1},{"ACE_tourniquet",1},{"ACE_morphine",2},{"ACE_epinephrine",1},{"SmokeShell",2},{"SmokeShellBlue",1},{"hlc_200rnd_556x45_M_SAW",1},{"1Rnd_HE_Grenade_shell",18}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
	class B_Soldier_TL_F
	{
		displayName = "Teamleader"; 
		
		weapons[] = {"CUP_arifle_Mk16_STD_EGLM_black", "", "hgun_Pistol_heavy_01_F", "Binocular"}; 
		primaryWeaponItems[] = {"CUP_muzzle_snds_SCAR_L", "acc_pointer_IR", "optic_Hamr","hlc_30rnd_556x45_M","1Rnd_HE_Grenade_shell"}; 
		secondaryWeaponItems[] = {""}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "TFAX_H_HelmetIA_US_wood";
		facewearClass = "";
		vestClass = "TFAx_PlateCarrier_grn";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemAndroid"}; 
		uniformItems[] = {{"ACE_Banana",1},{"FHQ_optic_AC11704",1},{"HandGrenade", 2},{"11Rnd_45ACP_Mag",1}}; 
		vestItems[] = {{"1Rnd_HE_Grenade_shell", 2},{"hlc_30rnd_556x45_M", 9},{"1Rnd_Smoke_Grenade_shell", 2},{"1Rnd_SmokeRed_Grenade_shell", 2}}; 
		backpackItems[] = {{"ACE_quikclot",8}, {"ACE_elasticBandage",6},{"ACE_packingBandage",2},{"ACE_bloodIV_250",1},{"ACE_tourniquet",1},{"ACE_morphine",2},{"ACE_epinephrine",1},{"SmokeShell",2},{"SmokeShellBlue",1},{"hlc_200rnd_556x45_M_SAW",1}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
	class B_soldier_AT_F
	{
		displayName = "AT Specialist"; 
		
		weapons[] = {"CUP_arifle_Mk16_STD_FG_black", "CUP_launch_MAAWS", "hgun_Pistol_heavy_01_F", "Binocular"}; 
		primaryWeaponItems[] = {"CUP_muzzle_snds_SCAR_L", "acc_pointer_IR", "optic_Hamr","hlc_30rnd_556x45_M"}; 
		secondaryWeaponItems[] = {"CUP_optic_MAAWS_Scope","CUP_MAAWS_HEAT_M"}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "TFAX_H_HelmetIA_US_wood";
		facewearClass = "";
		vestClass = "TFAx_PlateCarrier_grn";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; 
		uniformItems[] = {{"ACE_Banana",1},{"FHQ_optic_AC11704",1},{"HandGrenade", 2},{"11Rnd_45ACP_Mag",1}}; 
		vestItems[] = {{"hlc_30rnd_556x45_M", 6}}; 
		backpackItems[] = {{"ACE_quikclot",8}, {"ACE_elasticBandage",6},{"ACE_packingBandage",2},{"ACE_bloodIV_250",1},{"ACE_tourniquet",1},{"ACE_morphine",2},{"ACE_epinephrine",1},{"SmokeShell",2},{"SmokeShellBlue",1}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
	class B_soldier_M_F
	{
		displayName = "Marksman (Marksman DLC)"; 
		
		weapons[] = {"hlc_rifle_SAMR", "", "hgun_Pistol_heavy_01_F", "Rangefinder"}; 
		primaryWeaponItems[] = {"hlc_muzzle_556NATO_KAC", "acc_pointer_IR", ."optic_AMS_khk","hlc_30rnd_556x45_M"}; 
		secondaryWeaponItems[] = {""}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "CUP_H_FR_PRR_BoonieWDL";
		facewearClass = "";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "B_Kitbag_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; 
		uniformItems[] = {{"ACE_Banana",1},{"FHQ_optic_AC11704",1},{"HandGrenade", 2},{"11Rnd_45ACP_Mag",1}}; 
		vestItems[] = {"1Rnd_HE_Grenade_shell",{"hlc_30rnd_556x45_M", 10}}; 
		backpackItems[] = {{"ACE_quikclot",8}, {"ACE_elasticBandage",6},{"ACE_packingBandage",2},{"ACE_bloodIV_250",1},{"ACE_tourniquet",1},{"ACE_morphine",2},{"ACE_epinephrine",1},{"SmokeShell",2},{"SmokeShellBlue",1},{"hlc_200rnd_556x45_M_SAW",1}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
	class B_medic_F
	{
		displayName = "Medic"; 
		
		weapons[] = {"CUP_arifle_Mk16_STD_FG_black", "", "hgun_Pistol_heavy_01_F", "Binocular"}; 
		primaryWeaponItems[] = {"CUP_muzzle_snds_SCAR_L", "acc_pointer_IR", "optic_Hamr","hlc_30rnd_556x45_M"}; 
		secondaryWeaponItems[] = {""}; 
		handgunItems[] = {"optic_MRD","11Rnd_45ACP_Mag"}; 
		
		uniformClass = "TFA_wood";
		headgearClass = "TFAX_H_HelmetIA_US_wood";
		facewearClass = "";
		vestClass = "TFAx_PlateCarrier_grn";
		backpackClass = "IP_B_Kitbag_SnowTiger";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMicroDAGR"}; 
		uniformItems[] = {{"ACE_Banana",1},{"FHQ_optic_AC11704",1},{"HandGrenade", 2},{"11Rnd_45ACP_Mag",1},{"ACE_bloodIV_250",1}}; 
		vestItems[] = {{"ACE_quikclot", 20},{"ACE_elasticBandage", 20},{"ACE_epinephrine", 5},{"ACE_tourniquet", 5},{"ACE_morphine", 10},{"ACE_bloodIV_250", 5},{"SmokeShell", 4},{"hlc_30rnd_556x45_M", 6}}; 
		backpackItems[] = {{"ACE_quikclot", 40},{"ACE_elasticBandage", 40},{"ACE_epinephrine", 10},{"ACE_tourniquet", 10},{"ACE_morphine", 20},{"ACE_bloodIV_500", 4},{"ACE_bloodIV_1000", 2},{"ACE_personalAidKit", 4},{"SmokeShell", 4},{"SmokeShell",2},{"SmokeShellBlue",1},{"ACE_surgicalKit",1},{"ACE_defibrillator",1}}; 
		
		basicMedUniform[] = {}; 
		basicMedVest[] = {}; 
		basicMedBackpack[] = {}; 
		
		advMedUniform[] = {}; 
		advMedVest[] = {}; 
		advMedBackpack[] = {}; 
		
		
	};
	
};