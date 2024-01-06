
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
			"AK105",
			"G36K",
			"HK416",
			"IA2",
			"MK18", 
			"SR47",
			"TWM_SV98",
			"TWM_AN94",
			"BO_L96",
			"BO_SV98",
			"ASC_Weapons_LVOAC",
			"ASC_Weapons_HK416",
			"DZ_Characters",
			"DZ_Characters_Tops",
			"FOG_Crye_G3_Shirt_ColorBase",
			"FOG_Pants_Crye_G3_ColorBase",
			"FOG_G99_Pants_ColorBase",
			"FOG_UFP_Pants_ColorBase",
			"FOG_UFJ_Shirt_ColorBase",
			"Spur_CamelBag",
			"Spur_Military_Bag"
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
			"TWM_Mag_AK105",
			"TWM_Mag_AK105_60rnd",
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd"
		};
	};

	class TWM_AN94_Base: AKM_Base
	{
		magazines[]=
		{
			"BO_AK74_30rnd",
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
	class ASC_HK416_Base: Rifle_Base
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

	class CZ527_Base;
	class TWM_SV98_Base: CZ527_Base
	{
		attachments[]+=
		{
			"weaponOpticsHunting"
		};
	}

	class BoltActionRifle_ExternalMagazine_Base;
	class BO_SV98_Base: BoltActionRifle_ExternalMagazine_Base
	{
		attachments[]+=
		{
			"weaponMuzzleAK"
		};
	}

	class TWM_FRF2_base: cz527_Base
	{
		attachments[]=
		{
			"weaponOpticsHunting",
			"weaponOptics",
			"weaponMuzzle308",
			"weaponWrap"
		};
	}

	class TWM_HK417_Base: M4A1_Base
	{
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"weaponButtstockM4",
			"weaponMuzzle308"
		};
	}

};
class CfgVehicles
{
	class FOG_Crye_G3_Shirt_ColorBase;
	class FOG_Crye_G3_Shirt_MC: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Crye_G3_Shirt_MCA: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Crye_G3_Shirt_AOR1: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Crye_G3_Shirt_CB: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Crye_G3_Shirt_DCU: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Crye_G3_Shirt_6CD: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Crye_G3_Shirt_MC_FRACU: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Crye_G3_Shirt_MC_Patagonia: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Crye_G2_Shirt_MC: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Crye_G3_Shirt_KHK: FOG_Crye_G3_Shirt_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Pants_Crye_G3_ColorBase;

	class FOG_Pants_Crye_G3_MC: FOG_Pants_Crye_G3_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_Pants_Crye_G3_AOR1: FOG_Pants_Crye_G3_ColorBase
	{
		heatIsolation=0.25;
	}
	
	class FOG_Pants_Crye_G3_CB: FOG_Pants_Crye_G3_ColorBase
	{
		heatIsolation=0.25;
	}
		
	class FOG_Pants_Crye_G3_MCA: FOG_Pants_Crye_G3_ColorBase
	{
		heatIsolation=0.25;
	}
			
	class FOG_Pants_Crye_G3_KHK: FOG_Pants_Crye_G3_ColorBase
	{
		heatIsolation=0.25;
	}
				
	class FOG_Pants_Crye_G3_MC_FRACU: FOG_Pants_Crye_G3_ColorBase
	{
		heatIsolation=0.25;
	}

	class FOG_G99_Pants_ColorBase;
	class FOG_G99_Pants_CB: FOG_G99_Pants_ColorBase
	{
		heatIsolation=0.3;
	}

	class FOG_G99_Pants_CB: FOG_G99_Pants_ColorBase
	{
		heatIsolation=0.3;
	}

	class FOG_UFP_Pants_ColorBase;
	class FOG_UFP_Pants_6CD: FOG_UFP_Pants_ColorBase
	{
		heatIsolation=0.1;
	}

	class FOG_UFP_Pants_DCU: FOG_UFP_Pants_ColorBase
	{
		heatIsolation=0.1;
	}

	class FOG_UFP_Pants_MC: FOG_UFP_Pants_ColorBase
	{
		heatIsolation=0.1;
	}
	
	class FOG_UFP_Pants_Tan: FOG_UFP_Pants_ColorBase
	{
		heatIsolation=0.1;
	}
		
	class FOG_UFJ_Shirt_ColorBase;
	class FOG_UFJ_Shirt_CB: FOG_UFJ_Shirt_ColorBase
	{
		heatIsolation=0.1;
	}

	class Clothing;
	class FOG_GunGloves_ColorBase: Clothing
	{
		heatIsolation=0.1;
	}

	class FOG_Tactical_Fingerless_Gloves_ColorBase: Clothing
	{
		heatIsolation=0.3;
	}

	class Spur_MilBag_ColorBase;
	class Spur_MilBag_Tan: Spur_MilBag_ColorBase
	{
		heatIsolation=0.25;
	}

	class Spur_MilBag_MultiCamo: Spur_MilBag_ColorBase
	{
		heatIsolation=0.25;
	}

	class Spur_CamelBag_ColorBase;
	class Spur_CamelBag_Tan: Spur_CamelBag_ColorBase
	{
		heatIsolation=0.35;
	}

	class Spur_CamelBag_MultiCamo: Spur_CamelBag_ColorBase
	{
		heatIsolation=0.35;
	}
};
