
class CfgPatches
{
	class HadalZoneCompatibility
	{
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Pistols",
			"DZ_Sounds_Weapons",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Firearms_aug",
			"DZ_Weapons_Firearms_M4",
			"DZ_Weapons_Firearms_M16A2",
			"DZ_Weapons_Firearms_FAL", 
			"DZ_Weapons_Firearms_AKM",
			"DZ_Weapons_Firearms_VSS",
			"AK105",
			"G36K",
			"HK416",
			"IA2",
			"MK18", 
			"SR47",
			"BO_L96",
			"BO_VSS",
			"BO_AN94",
			"BO_AKS74U",
			"BO_AK74",
			"BO_AEK971",
			"ASC_Weapons_LVOAC",
			"ASC_Weapons_AMB17",
			"RZXC_AK12"
		};
		ammo[] = {};
	};
};
class CfgMods
{
	class HadalZoneCompatibility
	{
		dir = "HadalZoneCompatibility";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "HadalZoneCompatibility";
		author = "angrystoma";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		inputs = "";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class missionScriptModule
			{
				value="";
				files[]= {"HadalZoneCompatibility\Scripts\5_Mission"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HadalZoneCompatibility\Scripts\4_World"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"HadalZoneCompatibility\Scripts\3_Game"};
			};
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
    class Rifle_Base;
	class M4A1_Base: Rifle_Base
	{
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};
	class Aug_Base;
	class Aug: Aug_Base
	{
		magazines[]=
		{
			"Mag_Aug_30Rnd",
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};
	class AugShort: Aug_Base
	{
		magazines[]=
		{
			"Mag_Aug_30Rnd",
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};
	class M16A2_Base: Rifle_Base
	{
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};
	class AKM_Base;
	class TWM_AK105_Base: AKM_Base
	{
		magazines[]=
		{
			"BO_AK74_30rnd",
			"RZXC_AK12_Mag_30Rnd",
			"TWM_Mag_AK105",
			"TWM_Mag_AK105_60rnd",
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd"
		};
	};

	class RZXC_AK12_Base;
	class RZXC_AK12: RZXC_AK12_Base
	{
		magazines[]=
		{
			"BO_AK74_30rnd",
			"RZXC_AK12_Mag_30Rnd",
			"TWM_Mag_AK105",
			"TWM_Mag_AK105_60rnd",
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd"
		};
	};

	class BO_AEK971_Base: Rifle_Base
	{
		magazines[]=
		{
			"BO_AK74_30rnd",
			"RZXC_AK12_Mag_30Rnd",
			"TWM_Mag_AK105",
			"TWM_Mag_AK105_60rnd",
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd"
		};
	};

	class BO_AK74_Base: Rifle_Base
	{
		magazines[]=
		{
			"BO_AK74_30rnd",
			"RZXC_AK12_Mag_30Rnd",
			"TWM_Mag_AK105",
			"TWM_Mag_AK105_60rnd",
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd"
		};
	};

	class BO_AKS74U_Base;
	class BO_AKS74U: BO_AKS74U_Base
	{
		magazines[]=
		{
			"BO_AK74_30rnd",
			"RZXC_AK12_Mag_30Rnd",
			"TWM_Mag_AK105",
			"TWM_Mag_AK105_60rnd",
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd"
		};
	};

	class BO_AN94_Base: Rifle_Base
	{
		magazines[]=
		{
			"BO_AK74_30rnd",
			"RZXC_AK12_Mag_30Rnd",
			"TWM_Mag_AK105",
			"TWM_Mag_AK105_60rnd",
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd"
		};
	}

	class TWM_HK416_Base: M4A1_Base
	{
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};
	class FAL_Base;
	class TWM_G36K_Base: FAL_Base
	{
		magazines[]=
		{
			"TWM_Mag_G36K",
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};
	class TWM_Howa20_Base: FAL_Base
	{
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};
	class TWM_IA2_Base: FAL_Base
	{
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};
	class TWM_MK18_Base: M4A1_Base
	{
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};
	class TWM_SR47_Base: M4A1_Base
	{
		magazines[]=
		{
			"Mag_AKM_30Rnd",
			"Mag_AKM_Palm30Rnd",
			"Mag_AKM_Palm30Rnd_Black",
			"Mag_AKM_Palm30Rnd_Green",
			"Mag_AKM_Drum75Rnd",
			"Mag_AKM_Drum75Rnd_Green",
			"Mag_AKM_Drum75Rnd_Black",
			"BO_PMAG_AKM_30rnd",
			"BO_PMAG_AKM_30rnd_FDE"
		};
	};
	class ASC_LVOAC_Base: Rifle_Base
	{
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"Mag_ASC_Stanag_10Rnd",
			"Mag_ASC_Stanag_10Rnd_Camo",
			"Mag_ASC_Stanag_10Rnd_DigiTan",
			"Mag_ASC_Stanag_10Rnd_Tan",
			"Mag_ASC_Stanag_10Rnd_UCP",
			"Mag_ASC_Stanag_20Rnd",
			"Mag_ASC_Stanag_20Rnd_Camo",
			"Mag_ASC_Stanag_20Rnd_DigiTan",
			"Mag_ASC_Stanag_20Rnd_Tan",
			"Mag_ASC_Stanag_20Rnd_UCP",
			"Mag_ASC_Stanag_100Rnd",
			"Mag_ASC_Stanag_100Rnd_Camo",
			"Mag_ASC_Stanag_100Rnd_DigiTan",
			"Mag_ASC_Stanag_100Rnd_Tan",
			"Mag_ASC_Stanag_100Rnd_UCP",
			"Mag_ASC_PMag_60Rnd",
			"Mag_ASC_PMag_60Rnd_Camo",
			"Mag_ASC_PMag_60Rnd_DigiTan",
			"Mag_ASC_PMag_60Rnd_Tan",
			"Mag_ASC_PMag_60Rnd_UCP",
			"BO_Mag_PMAG_30Rnd",
			"BO_Mag_PMAG_Tan_30Rnd",
			"BO_Mag_PMAG_Green_30Rnd",
			"BO_Mag_PMAGWindow_30Rnd", 
			"BO_Mag_D60_60Rnd",
			"BO_Mag_GEN2_100Rnd"
		};
	};

	class BoltActionRifle_ExternalMagazine_Base;
	class BO_L96_Base: BoltActionRifle_ExternalMagazine_Base
	{
			weight=6800;
	};

	class VSS_Base: Rifle_Base
	{
		magazines[]+=
		{
			"Mag_ASC_AMB17_25Rnd",
			"Mag_ASC_AMB17_25Rnd_Black",
			"BO_Mag_ASVAL_30rnd"
		};
	};

	// class VSS_Base;
	// class Vikhr: VSS_Base
	// {
	// 	magazines[]=
	// 	{
	// 		"Mag_VSS_10Rnd",
	// 		"Mag_VAL_20Rnd",
	// 		"Mag_ASC_AMB17_25Rnd",
	// 		"Mag_ASC_AMB17_25Rnd_Black",
	// 		"Mag_Vikhr_30Rnd",
	// 		"BO_Mag_ASVAL_30rnd"
	// 	};
	// };

	class BO_ASVAL_Base;
	class BO_ASVAL: BO_ASVAL_Base
	{
		magazines[]=
		{
			"Mag_VSS_10Rnd",
			"Mag_VAL_20Rnd",
			"Mag_ASC_AMB17_25Rnd",
			"Mag_ASC_AMB17_25Rnd_Black",
			"Mag_Vikhr_30Rnd",
			"BO_Mag_ASVAL_30rnd"
		};
	};

	// class ASC_AMB17_Base;
	// class ASC_AMB17: ASC_AMB17_Base
	// {
	// 	magazines[]=
	// 	{
	// 		"Mag_VSS_10Rnd",
	// 		"Mag_VAL_20Rnd",
	// 		"Mag_ASC_AMB17_25Rnd",
	// 		"Mag_ASC_AMB17_25Rnd_Black",
	// 		"Mag_Vikhr_30Rnd",
	// 		"BO_Mag_ASVAL_30rnd"
	// 	};
	// };
};
