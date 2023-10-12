class CfgPatches
{
	class BDA_CMA_Uniforms
	{
		author="Schlopp";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"LM_OPCAN_CGC"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
class CfgVehicles
{
	class I_Soldier_F;
	class B_Soldier_F;
	class I_E_Man_Base_F;
	class UniformItem;
	class BDA_CMA_Tropic: B_Soldier_F
	{
		author="Schlopp";
		displayName="CMA Combat Fatigues (Tropic)";
		scope=1;
		model="a3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_CMA_Uniform_Tropic.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="a3\characters_f_beta\INDEP\ia_soldier_02.p3d";
			uniformClass="BDA_CMA_Uniform_Tropic";
			containerClass="Supply40";
			mass=40;
		};
	};
	class BDA_CMA_Tropic_Rolled: B_Soldier_F
	{
		author="Schlopp";
		displayName="CMA Combat Fatigues (Tropic, Rolled)";
		scope=1;
		model="a3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_CMA_Uniform_Tropic.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="a3\characters_f_beta\INDEP\ia_soldier_02.p3d";
			uniformClass="BDA_CMA_Uniform_Tropic_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class BDA_CMA_Tropic_Top: B_Soldier_F
	{
		author="Schlopp";
		displayName="CMA Combat Fatigues (Tropic, Tanktop)";
		scope=1;
		model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_CMA_Tropic_Top.paa",
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_CMA_Uniform_Tropic.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
			uniformClass="BDA_CMA_Uniform_Tropic_Top";
			containerClass="Supply40";
			mass=40;
		};
	};
	class BDA_VD_Tropic: I_E_Man_Base_F
	{
		author="Schlopp";
		scope=1;
		model="\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		uniformClass="BDA_VD_Uniform_Tropic";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_VD_Uniform_Tropic_CO.paa"
		};
	};

};
class cfgWeapons
{
	class ItemInfo;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class Uniform_Base;
	class H_HelmetB;
	class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_heavy_base_F;
	class HitpointsProtectionInfo;

//------------------------------------------------------------------// Uniform Tropic.

	class BDA_CMA_Uniform_Tropic: Uniform_Base
	{
		author="Schlopp";
		scope=2;
		displayName="CMA Combat Fatigues (Tropic)";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
			uniformClass="BDA_CMA_Tropic";
			containerClass="Supply40";
			mass=40;
		};
	};
	class BDA_CMA_Uniform_Tropic_Rolled: Uniform_Base
	{
		author="Schlopp";
		scope=2;
		displayName="CMA Combat Fatigues (Tropic, Rolled)";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
			uniformClass="BDA_CMA_Tropic_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class BDA_CMA_Uniform_Tropic_Top: Uniform_Base
	{
		author="Schlopp";
		scope=2;
		displayName="CMA Combat Fatigues (Tropic, Tanktop)";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
			uniformClass="BDA_CMA_Tropic_Top";
			containerClass="Supply40";
			mass=40;
		};
	};

	

	class BDA_CMA_MC32L_Tropic: V_CarrierRigKBT_01_light_base_F
	{
		author="Schlopp";
		scope=2;
		picture="BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\UI\icon_V_CarrierRigKBT_01_light_Olive_F_ca.paa";
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		displayName="MC32L Body Armor (Tropic)";
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_CMA_MC32_Tropic_CO.paa"
		};
	};
	class BDA_CMA_MC32H_Tropic: V_CarrierRigKBT_01_heavy_base_F
	{
		author="Schlopp";
		scope=2;
		picture="BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\UI\icon_V_CarrierRigKBT_01_heavy_Olive_F_ca.paa";
		displayName="MC32H Body Armor (Tropic)";
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_CMA_MC32_Tropic_CO.paa"
		};
	};
	class BDA_VD_MC32L_Tropic: V_CarrierRigKBT_01_light_base_F
	{
		author="Schlopp";
		scope=2;
		picture="BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\UI\icon_V_CarrierRigKBT_01_light_Olive_F_ca.paa";
		model="\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		displayName="Viridian MC32L Body Armor";
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_VD_MC32_Tropic_CO.paa"
		};
	};
	class BDA_VD_MC32H_Tropic: V_CarrierRigKBT_01_heavy_base_F
	{
		author="Schlopp";
		scope=2;
		picture="BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\UI\icon_V_CarrierRigKBT_01_heavy_Olive_F_ca.paa";
		displayName="Viridian MC32H Body Armor";
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_VD_MC32_Tropic_CO.paa"
		};
	};
	class BDA_CMA_CH230_Tropic: H_HelmetB
	{
		author="LM Mods";
		scope=2;
		displayName="CH-230 (Tropic)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\LM_OPCAN3.0\BLU\CGC\H\CH230";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_CMA_CH230_Tropic_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			hiddenSelections[]=
			{
				"Camo"
			};
			uniformModel="\LM_OPCAN3.0\BLU\CGC\H\CH230";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class BDA_VD_CH230_Tropic: H_HelmetB
	{
		author="LM Mods";
		scope=2;
		displayName="Viridian CH-230";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\LM_OPCAN3.0\BLU\CGC\H\CH230";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_VD_CH230_Tropic_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			hiddenSelections[]=
			{
				"Camo"
			};
			uniformModel="\LM_OPCAN3.0\BLU\CGC\H\CH230";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class BDA_VD_Uniform_Tropic: Uniform_Base
	{
		author="Schlopp";
		scope=2;
		displayName="Viridian Combat Fatigues";
		picture="\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_I_E_Uniform_01_sweater_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\BDA_FAC\BDA_CMA\BDA_CMA_Uniforms\data\BDA_VD_Uniform_Tropic_CO.paa"
		};
		DLC="Enoch";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="BDA_VD_Tropic";
			containerClass="Supply40";
			mass=60;
		};
	};
};
class cfgMods
{
	author="Schlopp";
	timepacked="1583873077";
};
