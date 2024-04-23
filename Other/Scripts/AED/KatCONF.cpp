class CfgPatches
{
	class kat_circulation
	{
		name="KAT - KAT - Circulation";
		requiredVersion=2.1400001;
		units[]=
		{
			"kat_X_AEDItem",
			"kat_bloodBankCrate"
		};
		weapons[]=
		{
			"kat_bloodIV_O",
			"kat_bloodIV_O_N",
			"kat_bloodIV_A",
			"kat_bloodIV_A_N",
			"kat_bloodIV_B",
			"kat_bloodIV_B_N",
			"kat_bloodIV_AB",
			"kat_bloodIV_AB_N",
			"kat_bloodIV_O_500",
			"kat_bloodIV_O_N_500",
			"kat_bloodIV_A_500",
			"kat_bloodIV_A_N_500",
			"kat_bloodIV_B_500",
			"kat_bloodIV_B_N_500",
			"kat_bloodIV_AB_500",
			"kat_bloodIV_AB_N_500",
			"kat_bloodIV_O_250",
			"kat_bloodIV_O_N_250",
			"kat_bloodIV_A_250",
			"kat_bloodIV_A_N_250",
			"kat_bloodIV_B_250",
			"kat_bloodIV_B_N_250",
			"kat_bloodIV_AB_250",
			"kat_bloodIV_AB_N_250",
			"kat_X_AED",
			"kat_crossPanel",
			"KAT_Empty_bloodIV_500",
			"KAT_Empty_bloodIV_250"
		};
		magazines[]={};
		requiredAddons[]=
		{
			"kat_main",
			"ace_medical",
			"ace_medical_ai",
			"ace_medical_blood",
			"ace_medical_damage",
			"ace_medical_engine",
			"ace_medical_feedback",
			"ace_medical_gui",
			"ace_medical_statemachine",
			"ace_medical_status",
			"ace_medical_treatment",
			"ace_medical_vitals",
			"ace_dogtags",
			"cba_settings"
		};
		author="Katalam";
		authors[]=
		{
			"Katalam"
		};
		url="$STR_kat_main_URL";
		version=2.1400001;
		versionStr="2.14.2";
		versionAr[]={2,14,2};
	};
};
class CfgFunctions
{
	class overwrite_medical_treatment
	{
		tag="ace_medical_treatment";
		class ace_medical_treatment
		{
			class cprLocal
			{
				file="\x\kat\addons\circulation\functions\fnc_cprLocal.sqf";
			};
			class cprSuccess
			{
				file="\x\kat\addons\circulation\functions\fnc_cprSuccess.sqf";
			};
		};
	};
	class overwrite_ace_medical_status
	{
		tag="ace_medical_status";
		class ace_medical_status
		{
			class getBloodPressure
			{
				file="\x\kat\addons\circulation\functions\fnc_getBloodPressure.sqf";
			};
		};
	};
	class overwrite_medical_vitals
	{
		tag="ace_medical_vitals";
		class ace_medical_treatment
		{
			class updateHeartRate
			{
				file="\x\kat\addons\circulation\functions\fnc_updateHeartRate.sqf";
			};
		};
	};
};
class CfgMovesBasic
{
	class Default;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class kat_CPR: Default
		{
			file="a3\anims_f\data\anim\sdr\inj\healing\ainvpknlmstpsnonwnondr_medic0.rtm";
			speed=0.11;
			looped=1;
			disableWeapons=1;
			disableWeaponsLong=1;
			showWeaponAim=0;
			canPullTrigger=0;
			duty=0.2;
			limitGunMovement=0;
			aiming="empty";
			aimingBody="empty";
			ConnectFrom[]=
			{
				"kat_CPR",
				0.1
			};
			ConnectTo[]=
			{
				"kat_CPR",
				0.1
			};
			forceAim=1;
			InterpolateTo[]=
			{
				"kat_CPR",
				0.1,
				"AinvPknlMstpSnonWnonDnon_medic",
				0.1,
				"AinvPknlMstpSnonWnonDr_medic0S",
				0.1,
				"Unconscious",
				0.02,
				"AinvPknlMstpSnonWnonDnon_medicEnd",
				0.2
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class kat_circulation
	{
		init="call compile preProcessFileLineNumbers '\x\kat\addons\circulation\XEH_preInit.sqf'";
		disableModuload="true";
	};
};
class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class kat_circulation
		{
			init="[(_this select 0), false] call kat_circulation_fnc_init";
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class kat_circulation
	{
		init="call compile preProcessFileLineNumbers '\x\kat\addons\circulation\XEH_postInit.sqf'";
	};
};
class CfgSounds
{
	sounds[]={};
	class kat_circulation_HeartRate
	{
		name="kat_circulation_HeartRate";
		sound[]=
		{
			"x\kat\addons\circulation\sounds\heartrate.wav",
			"db + 2",
			1,
			15
		};
		titles[]={};
	};
	class kat_circulation_NoHeartRate
	{
		name="kat_circulation_NoHeartRate";
		sound[]=
		{
			"x\kat\addons\circulation\sounds\noheartrate.wav",
			"db + 2",
			1,
			15
		};
		titles[]={};
	};
	class kat_circulation_NoShock
	{
		name="kat_circulation_NoShock";
		sound[]=
		{
			"x\kat\addons\circulation\sounds\noshock.wav",
			"db + 2",
			1,
			15
		};
		titles[]={};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_bloodIV;
	class kat_bloodIV_O: ACE_bloodIV
	{
		displayName="$STR_kat_circulation_BloodIV_O";
		ACE_isMedicalItem=1;
	};
	class kat_bloodIV_O_N: kat_bloodIV_O
	{
		displayName="$STR_kat_circulation_BloodIV_O_N";
	};
	class kat_bloodIV_A: kat_bloodIV_O
	{
		displayName="$STR_kat_circulation_BloodIV_A";
	};
	class kat_bloodIV_A_N: kat_bloodIV_O
	{
		displayName="$STR_kat_circulation_BloodIV_A_N";
	};
	class kat_bloodIV_B: kat_bloodIV_O
	{
		displayName="$STR_kat_circulation_BloodIV_B";
	};
	class kat_bloodIV_B_N: kat_bloodIV_O
	{
		displayName="$STR_kat_circulation_BloodIV_B_N";
	};
	class kat_bloodIV_AB: kat_bloodIV_O
	{
		displayName="$STR_kat_circulation_BloodIV_AB";
	};
	class kat_bloodIV_AB_N: kat_bloodIV_O
	{
		displayName="$STR_kat_circulation_BloodIV_AB_N";
	};
	class ACE_bloodIV_500;
	class kat_bloodIV_O_500: ACE_bloodIV_500
	{
		displayName="$STR_kat_circulation_BloodIV_O_500";
		ACE_isMedicalItem=1;
	};
	class kat_bloodIV_O_N_500: kat_bloodIV_O_500
	{
		displayName="$STR_kat_circulation_BloodIV_O_500_N";
	};
	class kat_bloodIV_A_500: kat_bloodIV_O_500
	{
		displayName="$STR_kat_circulation_BloodIV_A_500";
	};
	class kat_bloodIV_A_N_500: kat_bloodIV_O_500
	{
		displayName="$STR_kat_circulation_BloodIV_A_500_N";
	};
	class kat_bloodIV_B_500: kat_bloodIV_O_500
	{
		displayName="$STR_kat_circulation_BloodIV_B_500";
	};
	class kat_bloodIV_B_N_500: kat_bloodIV_O_500
	{
		displayName="$STR_kat_circulation_BloodIV_B_500_N";
	};
	class kat_bloodIV_AB_500: kat_bloodIV_O_500
	{
		displayName="$STR_kat_circulation_BloodIV_AB_500";
	};
	class kat_bloodIV_AB_N_500: kat_bloodIV_O_500
	{
		displayName="$STR_kat_circulation_BloodIV_AB_500_N";
	};
	class ACE_bloodIV_250;
	class kat_bloodIV_O_250: ACE_bloodIV_250
	{
		displayName="$STR_kat_circulation_BloodIV_O_250";
		ACE_isMedicalItem=1;
	};
	class kat_bloodIV_O_N_250: kat_bloodIV_O_250
	{
		displayName="$STR_kat_circulation_BloodIV_O_250_N";
	};
	class kat_bloodIV_A_250: kat_bloodIV_O_250
	{
		displayName="$STR_kat_circulation_BloodIV_A_250";
	};
	class kat_bloodIV_A_N_250: kat_bloodIV_O_250
	{
		displayName="$STR_kat_circulation_BloodIV_A_250_N";
	};
	class kat_bloodIV_B_250: kat_bloodIV_O_250
	{
		displayName="$STR_kat_circulation_BloodIV_B_250";
	};
	class kat_bloodIV_B_N_250: kat_bloodIV_O_250
	{
		displayName="$STR_kat_circulation_BloodIV_B_250_N";
	};
	class kat_bloodIV_AB_250: kat_bloodIV_O_250
	{
		displayName="$STR_kat_circulation_BloodIV_AB_250";
	};
	class kat_bloodIV_AB_N_250: kat_bloodIV_O_250
	{
		displayName="$STR_kat_circulation_BloodIV_AB_250_N";
	};
	class KAT_Empty_bloodIV_500: ACE_bloodIV
	{
		displayName="$STR_kat_circulation_FieldBloodTK500_Display";
		descriptionShort="$STR_kat_circulation_FieldBloodTK_Desc";
		picture="\x\kat\addons\circulation\ui\bloodIV_empty_ca.paa";
		author="Battlekeeper";
		hiddenSelectionsTextures[]=
		{
			"\x\kat\addons\circulation\ui\IVBag_blood_500ml_empty_ca.paa"
		};
		ACE_isMedicalItem=1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=2;
		};
	};
	class KAT_Empty_bloodIV_250: ACE_bloodIV
	{
		displayName="$STR_kat_circulation_FieldBloodTK250_Display";
		descriptionShort="$STR_kat_circulation_FieldBloodTK_Desc";
		picture="\x\kat\addons\circulation\ui\bloodIV_empty_ca.paa";
		author="Battlekeeper";
		hiddenSelectionsTextures[]=
		{
			"\x\kat\addons\circulation\ui\IVBag_blood_500ml_empty_ca.paa"
		};
		ACE_isMedicalItem=1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class kat_AED: ACE_ItemCore
	{
		scope=2;
		author="Katalam";
		displayName="$STR_kat_circulation_AED_DISPLAYNAME";
		picture="\x\kat\addons\circulation\ui\defib.paa";
		model="\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
		descriptionShort="$STR_kat_circulation_AED_DESCRIPTION";
		ACE_isMedicalItem=1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=30;
		};
	};
	class kat_X_AED: kat_AED
	{
		scope=2;
		displayName="$STR_kat_circulation_X_Display";
		picture="\x\kat\addons\circulation\ui\x-series.paa";
		model="\x\kat\addons\circulation\models\aedx\aedx.p3d";
		descriptionShort="$STR_kat_circulation_X_Desc";
		ACE_isMedicalItem=1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=40;
		};
	};
	class kat_crossPanel: ACE_ItemCore
	{
		scope=2;
		author="Katalam";
		displayName="$STR_kat_circulation_crosspanel";
		descriptionShort="$STR_kat_circulation_desc_crosspanel";
		picture="\x\kat\addons\circulation\ui\crosspanel.paa";
		icon="";
		mapSize=0.034000002;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class Items_base_F;
	class WeaponHolder_Single_limited_item_F;
	class NATO_Box_Base;
	class ACE_medicalSupplyCrate: NATO_Box_Base
	{
		class TransportItems;
		class TransportMagazines;
	};
	class Land_Defibrillator_F: Items_base_F
	{
		ace_dragging_canCarry=1;
		ace_dragging_carryPosition[]={0,1,1};
		ace_dragging_carryDirection=270;
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class ThingX;
	class kat_AEDItem: ThingX
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_kat_circulation_AED_DISPLAYNAME";
		author="Katalam";
		vehicleClass="Items";
		model="\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
		class TransportItems
		{
			class _xx_kat_AED
			{
				name="kat_AED";
				count=1;
			};
		};
		ace_dragging_canDrag=1;
		ace_dragging_canCarry=1;
		ace_dragging_dragPosition[]={0,1.1,0};
		ace_dragging_carryPosition[]={0,1.1,1};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection="interaction_point";
				distance=4.1999998;
				displayName="AED";
				condition="true";
				class KAT_AED_AnalyzeRhythm
				{
					displayName="$STR_kat_circulation_AnalyzeRhythm";
					condition="[_player, kat_circulation_medLvl_AED] call ace_medical_treatment_fnc_isMedic && [_player, _target, 2] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="[_player, (_target getVariable [""kat_circulation_Defibrillator_Patient"", nil])] call kat_circulation_fnc_AED_Analyze";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_shock.paa";
				};
				class KAT_AED_Shock
				{
					displayName="$STR_kat_circulation_Defibrillator_Action_Shock";
					condition="[_player, kat_circulation_medLvl_AED] call ace_medical_treatment_fnc_isMedic && [_player, _target, 3] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="(_target getVariable [""kat_circulation_Defibrillator_Patient"", nil]) setVariable [""kat_circulation_Defibrillator_Charged"", false, true]";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_shock.paa";
				};
				class KAT_AED_PlacePads
				{
					displayName="$STR_kat_circulation_AED_Action_PlacePads";
					condition="[_player, kat_circulation_medLvl_AED] call ace_medical_treatment_fnc_isMedic && [_player, _target] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="";
					insertChildren="[_player, _target] call kat_circulation_fnc_addDefibrillatorActions";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_pads.paa";
				};
				class KAT_AED_RemovePads: KAT_AED_PlacePads
				{
					displayName="$STR_kat_circulation_Defibrillator_Action_RemovePads";
					condition="[_player, kat_circulation_medLvl_AED] call ace_medical_treatment_fnc_isMedic && [_player, _target, 4] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="[_player, (_target getVariable [""kat_circulation_Defibrillator_Patient"", nil]), 'body', 'DefibrillatorRemovePads'] call ace_medical_treatment_fnc_treatment";
					insertChildren="";
				};
			};
		};
	};
	class kat_X_AEDItem: kat_AEDItem
	{
		displayName="$STR_kat_circulation_X_Display";
		model="\x\kat\addons\circulation\models\aedx\aedx.p3d";
		class TransportItems
		{
			class _xx_kat_X_AED
			{
				name="kat_X_AED";
				count=1;
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection="interaction_point";
				distance=4.1999998;
				displayName="$STR_kat_circulation_X_Display";
				condition="true";
				class KAT_AED_X_ViewMonitor
				{
					displayName="$STR_kat_circulation_ViewMonitor";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic";
					statement="[_player, _target, 1] call kat_circulation_fnc_AEDX_ViewMonitor";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aedx_monitor.paa";
				};
				class KAT_AED_X_ManualCharge
				{
					displayName="$STR_kat_circulation_Defibrillator_Action_Charge";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target, 7] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="[_player, (_target getVariable [""kat_circulation_Defibrillator_Patient"", nil])] call kat_circulation_fnc_Defibrillator_ManualCharge";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_shock.paa";
				};
				class KAT_AED_X_CancelCharge
				{
					displayName="$STR_kat_circulation_Defibrillator_Action_CancelCharge";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target, 8] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="(_target getVariable [""kat_circulation_Defibrillator_Patient"", nil]) setVariable [""kat_circulation_DefibrillatorInUse"", false, true]; (_target getVariable [""kat_circulation_Defibrillator_Patient"", nil]) setVariable [""kat_circulation_Defibrillator_Charged"", false, true]";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_shock.paa";
				};
				class KAT_AED_X_Shock
				{
					displayName="$STR_kat_circulation_Defibrillator_Action_Shock";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target, 3] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="(_target getVariable ""kat_circulation_Defibrillator_Patient"") setVariable [""kat_circulation_Defibrillator_Charged"", false, true]";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_shock.paa";
				};
				class KAT_AED_X_AnalyzeRhythm
				{
					displayName="$STR_kat_circulation_AnalyzeRhythm";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target, 2] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="[_player, (_target getVariable [""kat_circulation_Defibrillator_Patient"", nil]), 'AEDX'] call kat_circulation_fnc_AED_Analyze";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_shock.paa";
				};
				class KAT_AED_X_PlacePads
				{
					displayName="$STR_kat_circulation_AEDX_Action_PlacePads";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target, 1] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="[_player, (_target getVariable ""kat_circulation_AED_X_VitalsMonitor_Patient""), 'body', 'AEDXStationPlacePads', [_target]] call kat_misc_fnc_treatment";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_pads.paa";
				};
				class KAT_AED_X_PlacePadsTo: KAT_AED_X_PlacePads
				{
					displayName="$STR_kat_circulation_AEDX_Action_PlacePads";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="";
					insertChildren="[_player, _target, 1] call kat_circulation_fnc_addDefibrillatorActions";
				};
				class KAT_AED_X_RemovePads: KAT_AED_X_PlacePads
				{
					displayName="$STR_kat_circulation_Defibrillator_Action_RemovePads";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target, 4] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="[_player, (_target getVariable [""kat_circulation_Defibrillator_Patient"", nil]), 'body', 'DefibrillatorRemovePads'] call kat_misc_fnc_treatment";
					insertChildren="";
					icon="\x\kat\addons\circulation\ui\icon_aed_pads.paa";
				};
				class KAT_AED_X_ConnectMonitor
				{
					displayName="$STR_kat_circulation_AEDX_Action_ConnectMonitor";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target, 5] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="[_player, (_target getVariable ""kat_circulation_Defibrillator_Patient""), 'rightarm', 'AEDXStationConnectVitalsMonitor', [_target]] call kat_misc_fnc_treatment";
					insertChildren="[_player, _target, 3] call kat_circulation_fnc_addDefibrillatorActions";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_pads.paa";
				};
				class KAT_AED_X_ConnectMonitorTo: KAT_AED_X_ConnectMonitor
				{
					displayName="$STR_kat_circulation_AEDX_Action_ConnectMonitor";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="";
					insertChildren="[_player, _target, 2] call kat_circulation_fnc_addDefibrillatorActions";
				};
				class KAT_AED_X_DisconnectMonitor
				{
					displayName="$STR_kat_circulation_AEDX_Action_DisconnectMonitor";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && [_player, _target, 6] call kat_circulation_fnc_DefibrillatorPlaced_CheckCondition";
					statement="[_player, (_target getVariable ""kat_circulation_AED_X_VitalsMonitor_Patient""), 'rightarm', 'AEDXDisconnectVitalsMonitor'] call kat_misc_fnc_treatment";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_pads.paa";
				};
				class KAT_AED_X_EnableAudio
				{
					displayName="$STR_kat_circulation_AEDX_Action_EnableAudio";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && !(_target getVariable [""kat_circulation_AED_X_VitalsMonitor_Volume"", false])";
					statement="_target setVariable [""kat_circulation_AED_X_VitalsMonitor_Volume"", true, true]; [_target, true] call kat_circulation_fnc_AEDXPlaced_VitalsMonitor_SetVolume";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aedx_volume_on.paa";
				};
				class KAT_AED_X_DisableAudio: KAT_AED_X_EnableAudio
				{
					displayName="$STR_kat_circulation_AEDX_Action_DisableAudio";
					condition="[_player, kat_circulation_medLvl_AED_X] call ace_medical_treatment_fnc_isMedic && _target getVariable [""kat_circulation_AED_X_VitalsMonitor_Volume"", false]";
					statement="_target setVariable [""kat_circulation_AED_X_VitalsMonitor_Volume"", false, true]; [_target, false] call kat_circulation_fnc_AEDXPlaced_VitalsMonitor_SetVolume";
					icon="\x\kat\addons\circulation\ui\icon_aedx_volume_off.paa";
				};
				class KAT_AED_X_MeasureBloodPressure
				{
					displayName="$STR_kat_circulation_AEDX_Monitor_MeasureBloodPressure";
					condition="!(_target getVariable [""kat_circulation_AED_X_VitalsMonitor_Patient"", objNull] isEqualTo objNull) && {(missionNamespace getVariable [""kat_circulation_AED_X_VitalsMonitor_BloodPressureInterval"", 0] > 0)}";
					statement="_target getVariable ""kat_circulation_AED_X_VitalsMonitor_Patient"" call kat_circulation_fnc_measureBloodPressure";
					showDisabled=0;
					icon="\x\kat\addons\circulation\ui\icon_aed_pads.paa";
				};
			};
		};
	};
	class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate
	{
		class TransportItems: TransportItems
		{
			class _xx_kat_X_AED
			{
				name="kat_X_AED";
				count=1;
			};
			class _xx_kat_AED
			{
				name="kat_AED";
				count=1;
			};
			class _xx_KAT_Empty_bloodIV_500
			{
				name="KAT_Empty_bloodIV_500";
				count=10;
			};
			class _xx_KAT_Empty_bloodIV_250
			{
				name="KAT_Empty_bloodIV_250";
				count=20;
			};
			class _xx_kat_crossPanel
			{
				name="kat_crossPanel";
				count=5;
			};
		};
		class TransportMagazines: TransportMagazines
		{
			class _xx_kat_Painkiller
			{
				magazine="kat_Painkiller";
				count=10;
			};
		};
	};
	class kat_medicalSupplyCrate: ACE_medicalSupplyCrate
	{
		displayName="$STR_kat_circulation_bloodbank";
		class TransportItems: TransportItems
		{
			class _xx_kat_crossPanel
			{
				name="kat_crossPanel";
				count=2;
			};
			class _xx_kat_IO_FAST
			{
				name="kat_IO_FAST";
				count=15;
			};
			class _xx_kat_IV_16
			{
				name="kat_IV_16";
				count=15;
			};
			class _xx_KAT_Empty_bloodIV_250
			{
				name="KAT_Empty_bloodIV_250";
				count=7;
			};
			class _xx_KAT_Empty_bloodIV_500
			{
				name="KAT_Empty_bloodIV_500";
				count=7;
			};
			class _xx_kat_bloodIV_O
			{
				name="kat_bloodIV_O";
				count=7;
			};
			class _xx_kat_bloodIV_O_N
			{
				name="kat_bloodIV_O_N";
				count=7;
			};
			class _xx_kat_bloodIV_A
			{
				name="kat_bloodIV_A";
				count=7;
			};
			class _xx_kat_bloodIV_A_N
			{
				name="kat_bloodIV_A_N";
				count=7;
			};
			class _xx_kat_bloodIV_B
			{
				name="kat_bloodIV_B";
				count=7;
			};
			class _xx_kat_bloodIV_B_N
			{
				name="kat_bloodIV_B_N";
				count=7;
			};
			class _xx_kat_bloodIV_AB
			{
				name="kat_bloodIV_AB";
				count=7;
			};
			class _xx_kat_bloodIV_AB_N
			{
				name="kat_bloodIV_AB_N";
				count=7;
			};
			class _xx_kat_bloodIV_O_500
			{
				name="kat_bloodIV_O_500";
				count=7;
			};
			class _xx_kat_bloodIV_O_N_500
			{
				name="kat_bloodIV_O_N_500";
				count=7;
			};
			class _xx_kat_bloodIV_A_500
			{
				name="kat_bloodIV_A_500";
				count=7;
			};
			class _xx_kat_bloodIV_A_N_500
			{
				name="kat_bloodIV_A_N_500";
				count=7;
			};
			class _xx_kat_bloodIV_B_500
			{
				name="kat_bloodIV_B_500";
				count=7;
			};
			class _xx_kat_bloodIV_B_N_500
			{
				name="kat_bloodIV_B_N_500";
				count=7;
			};
			class _xx_kat_bloodIV_AB_500
			{
				name="kat_bloodIV_AB_500";
				count=7;
			};
			class _xx_kat_bloodIV_AB_N_500
			{
				name="kat_bloodIV_AB_N_500";
				count=7;
			};
			class _xx_kat_bloodIV_O_250
			{
				name="kat_bloodIV_O_250";
				count=7;
			};
			class _xx_kat_bloodIV_O_N_250
			{
				name="kat_bloodIV_O_N_250";
				count=7;
			};
			class _xx_kat_bloodIV_A_250
			{
				name="kat_bloodIV_A_250";
				count=7;
			};
			class _xx_kat_bloodIV_A_N_250
			{
				name="kat_bloodIV_A_N_250";
				count=7;
			};
			class _xx_kat_bloodIV_B_250
			{
				name="kat_bloodIV_B_250";
				count=7;
			};
			class _xx_kat_bloodIV_B_N_250
			{
				name="kat_bloodIV_B_N_250";
				count=7;
			};
			class _xx_kat_bloodIV_AB_250
			{
				name="kat_bloodIV_AB_250";
				count=7;
			};
			class _xx_kat_bloodIV_AB_N_250
			{
				name="kat_bloodIV_AB_N_250";
				count=7;
			};
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_Head
			{
				class CheckBloodPressure
				{
				};
			};
		};
		class ACE_SelfActions
		{
			class Medical
			{
				class ACE_Head
				{
					class CheckBloodPressure
					{
					};
				};
			};
			class KAT_Equipment
			{
				class openCrossPanel
				{
					displayName="$STR_kat_circulation_open_crosspanel";
					condition="('kat_crossPanel' in (uniformItems _player)) || ('kat_crossPanel' in (vestItems _player))";
					statement="createDialog ""kat_circulation_CrossPanel_Dialog""";
					showDisabled=0;
					exceptions[]=
					{
						"isNotInside",
						"isNotSitting"
					};
					icon="";
				};
				class KAT_placeAED
				{
					displayName="$STR_kat_circulation_place_AED";
					condition="'kat_AED' in (items _player) && !((_player getVariable [""kat_circulation_MedicDefibrillator_Patient"", objNull]) getVariable [""kat_circulation_DefibrillatorInUse"", false])";
					statement="[_player, 'kat_AED'] call kat_circulation_fnc_placeAED";
					icon="";
					showDisabled=0;
				};
				class KAT_placeAEDX: KAT_placeAED
				{
					displayName="$STR_kat_circulation_place_AEDX";
					condition="'kat_X_AED' in (items _player) && !((_player getVariable [""kat_circulation_MedicDefibrillator_Patient"", objNull]) getVariable [""kat_circulation_DefibrillatorInUse"", false])";
					statement="[_player, 'kat_X_AED'] call kat_circulation_fnc_placeAED";
					icon="\x\kat\addons\circulation\ui\icon_aedx.paa";
				};
				class KAT_AED_X_Interactions
				{
					displayName="$STR_kat_circulation_AED_X";
					condition="'kat_X_AED' in (items _player)";
					icon="\x\kat\addons\circulation\ui\icon_aedx.paa";
					class KAT_AED_X_ViewMonitor
					{
						displayName="$STR_kat_circulation_ViewMonitor";
						condition="true";
						statement="[_player, objNull, 2] call kat_circulation_fnc_AEDX_ViewMonitor";
						showDisabled=0;
						icon="\x\kat\addons\circulation\ui\icon_aedx_monitor.paa";
					};
					class KAT_AED_X_removeSound
					{
						displayName="$STR_kat_circulation_AEDX_Action_DisableAudio";
						condition="_player getVariable [""kat_circulation_AED_X_VitalsMonitor_Volume"", false]";
						statement="_player setVariable [""kat_circulation_AED_X_VitalsMonitor_Volume"", false, true]";
						showDisabled=0;
						icon="\x\kat\addons\circulation\ui\icon_aedx_volume_off.paa";
					};
					class KAT_AED_X_addSound: KAT_AED_X_removeSound
					{
						displayName="$STR_kat_circulation_AEDX_Action_EnableAudio";
						condition="!(_player getVariable [""kat_circulation_AED_X_VitalsMonitor_Volume"", false])";
						statement="_player setVariable [""kat_circulation_AED_X_VitalsMonitor_Volume"", true, true]";
						icon="\x\kat\addons\circulation\ui\icon_aedx_volume_on.paa";
					};
				};
			};
		};
	};
};
class ACE_Medical_Treatment
{
	class IV
	{
		class BloodIV;
		class BloodIV_500;
		class BloodIV_250;
		class BloodIV_O: BloodIV
		{
			volume=1000;
			bloodType="O";
			compatibility[]=
			{
				"O",
				"A",
				"B",
				"AB"
			};
		};
		class BloodIV_O_N: BloodIV
		{
			volume=1000;
			bloodType="O_N";
			compatibility[]=
			{
				"O",
				"O_N",
				"A",
				"A_N",
				"B",
				"B_N",
				"AB",
				"AB_N"
			};
		};
		class BloodIV_A: BloodIV
		{
			volume=1000;
			bloodType="A";
			compatibility[]=
			{
				"A",
				"AB"
			};
		};
		class BloodIV_A_N: BloodIV
		{
			volume=1000;
			bloodType="A_N";
			compatibility[]=
			{
				"A",
				"A_N",
				"AB",
				"AB_N"
			};
		};
		class BloodIV_B: BloodIV
		{
			volume=1000;
			bloodType="B";
			compatibility[]=
			{
				"B",
				"AB"
			};
		};
		class BloodIV_B_N: BloodIV
		{
			volume=1000;
			bloodType="B_N";
			compatibility[]=
			{
				"B",
				"B_N",
				"AB",
				"AB_N"
			};
		};
		class BloodIV_AB: BloodIV
		{
			volume=1000;
			bloodType="AB";
			compatibility[]=
			{
				"AB"
			};
		};
		class BloodIV_AB_N: BloodIV
		{
			volume=1000;
			bloodType="AB_N";
			compatibility[]=
			{
				"AB",
				"AB_N"
			};
		};
		class BloodIV_O_500: BloodIV_500
		{
			volume=500;
			bloodType="O";
			compatibility[]=
			{
				"O",
				"A",
				"B",
				"AB"
			};
		};
		class BloodIV_O_N_500: BloodIV_500
		{
			volume=500;
			bloodType="O_N";
			compatibility[]=
			{
				"O",
				"O_N",
				"A",
				"A_N",
				"B",
				"B_N",
				"AB",
				"AB_N"
			};
		};
		class BloodIV_A_500: BloodIV_500
		{
			volume=500;
			bloodType="A";
			compatibility[]=
			{
				"A",
				"AB"
			};
		};
		class BloodIV_A_N_500: BloodIV_500
		{
			volume=500;
			bloodType="A_N";
			compatibility[]=
			{
				"A",
				"A_N",
				"AB",
				"AB_N"
			};
		};
		class BloodIV_B_500: BloodIV_500
		{
			volume=500;
			bloodType="B";
			compatibility[]=
			{
				"B",
				"AB"
			};
		};
		class BloodIV_B_N_500: BloodIV_500
		{
			volume=500;
			bloodType="B_N";
			compatibility[]=
			{
				"B",
				"B_N",
				"AB",
				"AB_N"
			};
		};
		class BloodIV_AB_500: BloodIV_500
		{
			volume=500;
			bloodType="AB";
			compatibility[]=
			{
				"AB"
			};
		};
		class BloodIV_AB_N_500: BloodIV_500
		{
			volume=500;
			bloodType="AB_N";
			compatibility[]=
			{
				"AB",
				"AB_N"
			};
		};
		class BloodIV_O_250: BloodIV_250
		{
			volume=250;
			bloodType="O";
			compatibility[]=
			{
				"O",
				"A",
				"B",
				"AB"
			};
		};
		class BloodIV_O_N_250: BloodIV_250
		{
			volume=250;
			bloodType="O_N";
			compatibility[]=
			{
				"O",
				"O_N",
				"A",
				"A_N",
				"B",
				"B_N",
				"AB",
				"AB_N"
			};
		};
		class BloodIV_A_250: BloodIV_250
		{
			volume=250;
			bloodType="A";
			compatibility[]=
			{
				"A",
				"AB"
			};
		};
		class BloodIV_A_N_250: BloodIV_250
		{
			volume=250;
			bloodType="A_N";
			compatibility[]=
			{
				"A",
				"A_N",
				"AB",
				"AB_N"
			};
		};
		class BloodIV_B_250: BloodIV_250
		{
			volume=250;
			bloodType="B";
			compatibility[]=
			{
				"B",
				"AB"
			};
		};
		class BloodIV_B_N_250: BloodIV_250
		{
			volume=250;
			bloodType="B_N";
			compatibility[]=
			{
				"B",
				"B_N",
				"AB",
				"AB_N"
			};
		};
		class BloodIV_AB_250: BloodIV_250
		{
			volume=250;
			bloodType="AB";
			compatibility[]=
			{
				"AB"
			};
		};
		class BloodIV_AB_N_250: BloodIV_250
		{
			volume=250;
			bloodType="AB_N";
			compatibility[]=
			{
				"AB",
				"AB_N"
			};
		};
	};
};
class ACE_Medical_Treatment_Actions
{
	class FieldDressing;
	class Morphine;
	class CheckPulse;
	class CPR
	{
		displayNameProgress="";
		treatmentTime=0.0099999998;
		callbackStart="";
		callbackProgress="";
		callbackFailure="";
		callbackSuccess="[_medic, _patient] call kat_airway_fnc_handleRecoveryPosition; [_medic, _patient] call kat_circulation_fnc_CPRStart;";
		condition="ace_medical_treatment_fnc_canCPR";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon"
		};
	};
	class CheckDogtags: CheckPulse
	{
		displayName="$STR_kat_circulation_DogTag";
		displayNameProgress="$STR_kat_circulation_DogTag_Action";
		treatmentTime=2;
		allowedSelections[]=
		{
			"Head"
		};
		allowSelfTreatment=1;
		callbackSuccess="[_medic, _patient] call kat_circulation_fnc_bloodTypeLog; [_medic, _patient] call ace_dogtags_fnc_checkDogtag;";
		condition="true";
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon",
			"kat_recoveryposition"
		};
	};
	class CheckBloodPressure: CheckPulse
	{
		allowedSelections[]=
		{
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon",
			"kat_recoveryposition"
		};
	};
	class KAT_DrawBlood500: CheckPulse
	{
		displayName="$STR_kat_circulation_DrawBlood500_Action_Use";
		displayNameProgress="$STR_kat_circulation_DrawBlood_Action_Progress";
		treatmentTime="kat_circulation_blood_drawTime_500ml";
		allowedSelections[]=
		{
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};
		allowSelfTreatment="kat_circulation_enable_selfBloodDraw";
		category="advanced";
		medicRequired=0;
		consumeItem=1;
		callbackSuccess="[_medic, _patient, 500] call kat_circulation_fnc_drawBlood";
		condition="[_medic, _patient, 500] call kat_circulation_fnc_canDraw && (!(kat_pharma_RequireInsIVBloodDraw) || kat_pharma_fnc_removeIV)";
		items[]=
		{
			"KAT_Empty_bloodIV_500"
		};
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon",
			"kat_recoveryposition"
		};
	};
	class KAT_DrawBlood250: CheckPulse
	{
		displayName="$STR_kat_circulation_DrawBlood250_Action_Use";
		displayNameProgress="$STR_kat_circulation_DrawBlood_Action_Progress";
		treatmentTime="kat_circulation_blood_drawTime_250ml";
		allowedSelections[]=
		{
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};
		allowSelfTreatment="kat_circulation_enable_selfBloodDraw";
		category="advanced";
		medicRequired=0;
		consumeItem=1;
		callbackSuccess="[_medic, _patient, 250] call kat_circulation_fnc_drawBlood";
		condition="[_medic, _patient, 250] call kat_circulation_fnc_canDraw && (!(kat_pharma_RequireInsIVBloodDraw) || kat_pharma_fnc_removeIV)";
		items[]=
		{
			"KAT_Empty_bloodIV_250"
		};
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon",
			"kat_recoveryposition"
		};
	};
	class BloodIV;
	class BloodIV_O: BloodIV
	{
		displayName="$STR_kat_circulation_Action_BloodIV_O";
		items[]=
		{
			"kat_bloodIV_O"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 800, 12]] call CBA_fnc_localEvent;";
	};
	class BloodIV_O_N: BloodIV
	{
		displayName="$STR_kat_circulation_Action_BloodIV_O_N";
		items[]=
		{
			"kat_bloodIV_O_N"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 800, 12]] call CBA_fnc_localEvent;";
	};
	class BloodIV_A: BloodIV
	{
		displayName="$STR_kat_circulation_Action_BloodIV_A";
		items[]=
		{
			"kat_bloodIV_A"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 800, 12]] call CBA_fnc_localEvent;";
	};
	class BloodIV_A_N: BloodIV
	{
		displayName="$STR_kat_circulation_Action_BloodIV_A_N";
		items[]=
		{
			"kat_bloodIV_A_N"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 800, 12]] call CBA_fnc_localEvent;";
	};
	class BloodIV_B: BloodIV
	{
		displayName="$STR_kat_circulation_Action_BloodIV_B";
		items[]=
		{
			"kat_bloodIV_B"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 800, 12]] call CBA_fnc_localEvent;";
	};
	class BloodIV_B_N: BloodIV
	{
		displayName="$STR_kat_circulation_Action_BloodIV_B_N";
		items[]=
		{
			"kat_bloodIV_B_N"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 800, 12]] call CBA_fnc_localEvent;";
	};
	class BloodIV_AB: BloodIV
	{
		displayName="$STR_kat_circulation_Action_BloodIV_AB";
		items[]=
		{
			"kat_bloodIV_AB"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 800, 12]] call CBA_fnc_localEvent;";
	};
	class BloodIV_AB_N: BloodIV
	{
		displayName="$STR_kat_circulation_Action_BloodIV_AB_N";
		items[]=
		{
			"kat_bloodIV_AB_N"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 800, 12]] call CBA_fnc_localEvent;";
	};
	class BloodIV_500;
	class BloodIV_O_500: BloodIV_500
	{
		displayName="$STR_kat_circulation_Action_500_BloodIV_O";
		items[]=
		{
			"kat_bloodIV_O_500"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 400, 8]] call CBA_fnc_localEvent;";
	};
	class BloodIV_O_N_500: BloodIV_500
	{
		displayName="$STR_kat_circulation_Action_500_BloodIV_O_N";
		items[]=
		{
			"kat_bloodIV_O_N_500"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 400, 8]] call CBA_fnc_localEvent;";
	};
	class BloodIV_A_500: BloodIV_500
	{
		displayName="$STR_kat_circulation_Action_500_BloodIV_A";
		items[]=
		{
			"kat_bloodIV_A_500"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 400, 8]] call CBA_fnc_localEvent;";
	};
	class BloodIV_A_N_500: BloodIV_500
	{
		displayName="$STR_kat_circulation_Action_500_BloodIV_A_N";
		items[]=
		{
			"kat_bloodIV_A_N_500"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 400, 8]] call CBA_fnc_localEvent;";
	};
	class BloodIV_B_500: BloodIV_500
	{
		displayName="$STR_kat_circulation_Action_500_BloodIV_B";
		items[]=
		{
			"kat_bloodIV_B_500"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 400, 8]] call CBA_fnc_localEvent;";
	};
	class BloodIV_B_N_500: BloodIV_500
	{
		displayName="$STR_kat_circulation_Action_500_BloodIV_B_N";
		items[]=
		{
			"kat_bloodIV_B_N_500"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 400, 8]] call CBA_fnc_localEvent;";
	};
	class BloodIV_AB_500: BloodIV_500
	{
		displayName="$STR_kat_circulation_Action_500_BloodIV_AB";
		items[]=
		{
			"kat_bloodIV_AB_500"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 400, 8]] call CBA_fnc_localEvent;";
	};
	class BloodIV_AB_N_500: BloodIV_500
	{
		displayName="$STR_kat_circulation_Action_500_BloodIV_AB_N";
		items[]=
		{
			"kat_bloodIV_AB_N_500"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 400, 8]] call CBA_fnc_localEvent;";
	};
	class BloodIV_250;
	class BloodIV_O_250: BloodIV_250
	{
		displayName="$STR_kat_circulation_Action_250_BloodIV_O";
		items[]=
		{
			"kat_bloodIV_O_250"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 200, 4]] call CBA_fnc_localEvent;";
	};
	class BloodIV_O_N_250: BloodIV_250
	{
		displayName="$STR_kat_circulation_Action_250_BloodIV_O_N";
		items[]=
		{
			"kat_bloodIV_O_N_250"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 200, 4]] call CBA_fnc_localEvent;";
	};
	class BloodIV_A_250: BloodIV_250
	{
		displayName="$STR_kat_circulation_Action_250_BloodIV_A";
		items[]=
		{
			"kat_bloodIV_A_250"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 200, 4]] call CBA_fnc_localEvent;";
	};
	class BloodIV_A_N_250: BloodIV_250
	{
		displayName="$STR_kat_circulation_Action_250_BloodIV_A_N";
		items[]=
		{
			"kat_bloodIV_A_N_250"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 200, 4]] call CBA_fnc_localEvent;";
	};
	class BloodIV_B_250: BloodIV_250
	{
		displayName="$STR_kat_circulation_Action_250_BloodIV_B";
		items[]=
		{
			"kat_bloodIV_B_250"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 200, 4]] call CBA_fnc_localEvent;";
	};
	class BloodIV_B_N_250: BloodIV_250
	{
		displayName="$STR_kat_circulation_Action_250_BloodIV_B_N";
		items[]=
		{
			"kat_bloodIV_B_N_250"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 200, 4]] call CBA_fnc_localEvent;";
	};
	class BloodIV_AB_250: BloodIV_250
	{
		displayName="$STR_kat_circulation_Action_250_BloodIV_AB";
		items[]=
		{
			"kat_bloodIV_AB_250"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 200, 4]] call CBA_fnc_localEvent;";
	};
	class BloodIV_AB_N_250: BloodIV_250
	{
		displayName="$STR_kat_circulation_Action_250_BloodIV_AB_N";
		items[]=
		{
			"kat_bloodIV_AB_N_250"
		};
		callbackSuccess="[_medic, _patient, _bodyPart, _className, _usedItem] call kat_circulation_fnc_handleTreatment; ['kat_fluid', [_patient, 200, 4]] call CBA_fnc_localEvent;";
	};
	class AnalyzeRhythm: CheckPulse
	{
		displayName="$STR_kat_circulation_AnalyzeRhythm";
		displayNameProgress="";
		allowedSelections[]=
		{
			"Body"
		};
		icon="\x\kat\addons\circulation\ui\icon_aed_shock.paa";
		treatmentTime=0.0099999998;
		items[]={};
		consumeItem=0;
		condition="[_medic, _patient] call kat_circulation_fnc_Defibrillator_CheckCondition";
		callbackStart="";
		callbackSuccess="[_medic, _patient] call kat_circulation_fnc_AED_Analyze";
		medicRequired="kat_circulation_medLvl_AED";
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon",
			"kat_recoveryposition"
		};
	};
	class AEDShock: CheckPulse
	{
		displayName="$STR_kat_circulation_Defibrillator_Action_Shock";
		displayNameProgress="";
		allowedSelections[]=
		{
			"Body"
		};
		icon="\x\kat\addons\circulation\ui\icon_aed_shock.paa";
		category="advanced";
		items[]={};
		treatmentTime=0.0099999998;
		condition="([_medic, _patient] call ace_medical_treatment_fnc_canCPR) && !(_patient getVariable [""kat_airway_recovery"", false]) && _patient getVariable [""kat_circulation_DefibrillatorPads_Connected"", false] && _patient getVariable [""kat_circulation_Defibrillator_Charged"", false]";
		consumeItem=0;
		callbackStart="";
		callbackProgress="";
		callbackSuccess="_patient setVariable [""kat_circulation_Defibrillator_Charged"", false, true]";
		callbackFailure="";
		animationMedic="";
		treatmentLocations="kat_circulation_useLocation_AED";
		medicRequired="kat_circulation_medLvl_AED";
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon",
			"kat_recoveryposition"
		};
	};
	class AEDPlacePads: CPR
	{
		displayName="$STR_kat_circulation_AED_Action_PlacePads";
		displayNameProgress="$STR_kat_circulation_Defibrillator_Action_PlacePads_Progress";
		icon="\x\kat\addons\circulation\ui\icon_aed_pads.paa";
		items[]=
		{
			"kat_AED"
		};
		treatmentTime="kat_circulation_DefibrillatorPads_AttachTime";
		condition="[_medic, _patient, 0] call kat_circulation_fnc_Defibrillator_Pads_CheckCondition";
		consumeItem=0;
		callbackStart="";
		callbackProgress="";
		callbackSuccess="[_medic, _patient] call kat_airway_fnc_handleRecoveryPosition; [_medic, _patient, 0, 'kat_AED'] call kat_circulation_fnc_Defibrillator_AttachPads;";
		callbackFailure="";
		animationMedic="AinvPknlMstpSnonWnonDr_medic0";
		treatmentLocations="kat_circulation_useLocation_AED";
		medicRequired="kat_circulation_medLvl_AED";
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon",
			"kat_recoveryposition"
		};
	};
	class AEDStationPlacePads: AEDPlacePads
	{
		displayName="$STR_kat_circulation_AEDStation_Action_PlacePads";
		items[]={};
		condition="[_medic, _patient, 1, 'kat_AED', _extraArgs] call kat_circulation_fnc_Defibrillator_Pads_CheckCondition";
		callbackSuccess="[_medic, _patient] call kat_airway_fnc_handleRecoveryPosition; [_medic, _patient, 1, 'kat_AED', _extraArgs] call kat_circulation_fnc_Defibrillator_AttachPads";
	};
	class AEDVehiclePlacePads: AEDPlacePads
	{
		displayName="$STR_kat_circulation_AEDVehicle_Action_PlacePads";
		items[]={};
		condition="[_medic, _patient, 2] call kat_circulation_fnc_Defibrillator_Pads_CheckCondition";
		callbackSuccess="[_medic, _patient, 2, 'kat_AED'] call kat_circulation_fnc_Defibrillator_AttachPads";
	};
	class AEDXCharge: AEDShock
	{
		displayName="$STR_kat_circulation_Defibrillator_Action_Charge";
		condition="([_medic, _patient] call ace_medical_treatment_fnc_canCPR) && !(_patient getVariable [""kat_airway_recovery"", false]) && _patient getVariable [""kat_circulation_DefibrillatorPads_Connected"", false] && !(_patient getVariable [""kat_circulation_Defibrillator_Charged"", false]) && !(_patient getVariable [""kat_circulation_DefibrillatorInUse"", false]) && {((_patient getVariable [""kat_circulation_Defibrillator_Provider"", []]) select 2) isEqualTo 'kat_X_AED'}";
		callbackSuccess="[_medic, _patient] call kat_circulation_fnc_Defibrillator_ManualCharge";
		medicRequired="kat_circulation_medLvl_AED_X";
	};
	class AEDCancelCharge: AEDShock
	{
		displayName="$STR_kat_circulation_Defibrillator_Action_CancelCharge";
		condition="_patient getVariable [""kat_circulation_DefibrillatorPads_Connected"", false] && _patient getVariable [""kat_circulation_Defibrillator_Charged"", false] && _patient getVariable [""kat_circulation_DefibrillatorInUse"", false]";
		callbackSuccess="_patient setVariable [""kat_circulation_DefibrillatorInUse"", false, true]; _patient setVariable [""kat_circulation_Defibrillator_Charged"", false, true]";
		medicRequired="kat_circulation_medLvl_AED";
	};
	class AEDXPlacePads: AEDPlacePads
	{
		displayName="$STR_kat_circulation_AEDX_Action_PlacePads";
		displayNameProgress="$STR_kat_circulation_Defibrillator_Action_PlacePads_Progress";
		items[]=
		{
			"kat_X_AED"
		};
		condition="[_medic, _patient, 0, 'kat_X_AED'] call kat_circulation_fnc_Defibrillator_Pads_CheckCondition";
		callbackSuccess="[_medic, _patient] call kat_airway_fnc_handleRecoveryPosition; [_medic, _patient, 0, 'kat_X_AED'] call kat_circulation_fnc_Defibrillator_AttachPads";
		medicRequired="kat_circulation_medLvl_AED_X";
		icon="\x\kat\addons\circulation\ui\icon_aedx.paa";
	};
	class AEDXStationPlacePads: AEDXPlacePads
	{
		displayName="$STR_kat_circulation_AEDXStation_Action_PlacePads";
		items[]={};
		condition="[_medic, _patient, 1, 'kat_X_AED', _extraArgs] call kat_circulation_fnc_Defibrillator_Pads_CheckCondition;";
		callbackSuccess="[_medic, _patient] call kat_airway_fnc_handleRecoveryPosition; [_medic, _patient, 1, 'kat_X_AED', _extraArgs] call kat_circulation_fnc_Defibrillator_AttachPads";
	};
	class AEDXVehiclePlacePads: AEDXPlacePads
	{
		displayName="$STR_kat_circulation_AEDXVehicle_Action_PlacePads";
		items[]={};
		condition="[_medic, _patient, 2, 'kat_X_AED'] call kat_circulation_fnc_Defibrillator_Pads_CheckCondition";
		callbackSuccess="[_medic, _patient, 2, 'kat_X_AED'] call kat_circulation_fnc_Defibrillator_AttachPads";
	};
	class DefibrillatorRemovePads: AEDPlacePads
	{
		displayName="$STR_kat_circulation_Defibrillator_Action_RemovePads";
		displayNameProgress="$STR_kat_circulation_Defibrillator_Action_RemovePads_Progress";
		items[]={};
		treatmentTime="kat_circulation_DefibrillatorPads_DetachTime";
		condition="_patient getVariable [""kat_circulation_DefibrillatorPads_Connected"", false]";
		callbackSuccess="[_medic, _patient] call kat_circulation_fnc_Defibrillator_RemovePads";
		animationMedic="AinvPknlMstpSnonWnonDr_medic0";
		medicRequired="kat_circulation_medLvl_AED";
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon",
			"kat_recoveryposition"
		};
	};
	class AEDXConnectVitalsMonitor: AEDXPlacePads
	{
		displayName="$STR_kat_circulation_AEDX_Action_ConnectMonitor";
		displayNameProgress="$STR_kat_circulation_AEDX_Action_Connecting_Progress";
		allowedSelections[]=
		{
			"LeftArm",
			"RightArm"
		};
		category="examine";
		items[]=
		{
			"kat_X_AED"
		};
		treatmentTime="kat_circulation_AEDX_VitalsMonitor_AttachTime";
		condition="[_medic, _patient] call kat_circulation_fnc_AEDX_VitalsMonitor_CheckCondition";
		callbackSuccess="[_medic, _patient, _bodyPart, 0] call kat_circulation_fnc_AEDX_ConnectVitalsMonitor";
	};
	class AEDXStationConnectVitalsMonitor: AEDXConnectVitalsMonitor
	{
		displayName="$STR_kat_circulation_AEDXStation_Action_ConnectMonitor";
		items[]={};
		condition="[_medic, _patient, 1, _extraArgs] call kat_circulation_fnc_AEDX_VitalsMonitor_CheckCondition";
		callbackSuccess="[_medic, _patient, _bodyPart, 1, _extraArgs] call kat_circulation_fnc_AEDX_ConnectVitalsMonitor";
	};
	class AEDXVehicleConnectVitalsMonitor: AEDXConnectVitalsMonitor
	{
		displayName="$STR_kat_circulation_AEDXVehicle_Action_ConnectMonitor";
		items[]={};
		condition="[_medic, _patient, 2] call kat_circulation_fnc_AEDX_VitalsMonitor_CheckCondition";
		callbackSuccess="[_medic, _patient, _bodyPart, 2] call kat_circulation_fnc_AEDX_ConnectVitalsMonitor";
	};
	class AEDXDisconnectVitalsMonitor: AEDXConnectVitalsMonitor
	{
		displayName="$STR_kat_circulation_AEDX_Action_DisconnectMonitor";
		displayNameProgress="$STR_kat_circulation_AEDX_Action_Disconnecting_Progress";
		items[]={};
		treatmentTime="kat_circulation_AEDX_VitalsMonitor_DetachTime";
		condition="_patient getVariable [""kat_circulation_AED_X_VitalsMonitor_Connected"", false]";
		callbackSuccess="[_medic, _patient] call kat_circulation_fnc_AEDX_DisconnectVitalsMonitor";
	};
	class DisableAEDXAudio
	{
		displayName="$STR_kat_circulation_AEDX_Action_DisableAudio";
		displayNameProgress="";
		icon="\x\kat\addons\circulation\ui\icon_aedx_volume_off.paa";
		category="examine";
		treatmentLocations=0;
		medicRequired="kat_circulation_medLvl_AED_X";
		allowedSelections[]=
		{
			"Head",
			"LeftArm",
			"RightArm",
			"Body",
			"LeftLeg",
			"RightLeg"
		};
		treatmentTime=0.0099999998;
		allowSelfTreatment=0;
		condition="(_patient getVariable [""kat_circulation_DefibrillatorPads_Connected"", false] || _patient getVariable [""kat_circulation_AED_X_VitalsMonitor_Connected"", false]) && ((_patient getVariable [""kat_circulation_Defibrillator_Provider"", [-1, -1, -1]]) select 2 isEqualTo 'kat_X_AED') && (_patient getVariable [""kat_circulation_AED_X_VitalsMonitor_VolumePatient"", false])";
		callbackProgress="";
		callbackStart="";
		callbackFailure="";
		callbackSuccess="_patient setVariable [""kat_circulation_AED_X_VitalsMonitor_VolumePatient"", false, true]; if((_patient getVariable [""kat_circulation_Defibrillator_Provider"", [-1, -1, -1]]) select 1 isEqualTo 1) then {[((_patient getVariable [""kat_circulation_Defibrillator_Provider"", nil]) select 0), false] call kat_circulation_fnc_AEDXPlaced_VitalsMonitor_SetVolume}";
		animationPatient="";
		animationMedic="";
	};
	class EnableAEDXAudio: DisableAEDXAudio
	{
		displayName="$STR_kat_circulation_AEDX_Action_EnableAudio";
		icon="\x\kat\addons\circulation\ui\icon_aedx_volume_on.paa";
		condition="(_patient getVariable [""kat_circulation_DefibrillatorPads_Connected"", false] || _patient getVariable [""kat_circulation_AED_X_VitalsMonitor_Connected"", false]) && {((_patient getVariable [""kat_circulation_Defibrillator_Provider"", [-1, -1, -1]]) select 2 isEqualTo 'kat_X_AED') && !(_patient getVariable [""kat_circulation_AED_X_VitalsMonitor_VolumePatient"", false])}";
		callbackSuccess="_patient setVariable [""kat_circulation_AED_X_VitalsMonitor_VolumePatient"", true, true]; if((_patient getVariable [""kat_circulation_Defibrillator_Provider"", [-1, -1, -1]]) select 1 isEqualTo 1) then {[((_patient getVariable [""kat_circulation_Defibrillator_Provider"", [-1, -1, -1]]) select 0), true] call kat_circulation_fnc_AEDXPlaced_VitalsMonitor_SetVolume}";
	};
	class AEDXMeasureBloodPressure: AnalyzeRhythm
	{
		displayName="$STR_kat_circulation_AEDX_Monitor_MeasureBloodPressure";
		allowedSelections[]=
		{
			"Head",
			"LeftArm",
			"RightArm",
			"Body",
			"LeftLeg",
			"RightLeg"
		};
		icon="\x\kat\addons\circulation\ui\icon_aed_pads.paa";
		condition="_patient getVariable [""kat_circulation_AED_X_VitalsMonitor_Connected"", false] && (missionNamespace getVariable [""kat_circulation_AED_X_VitalsMonitor_BloodPressureInterval"", 0] > 0)";
		callbackSuccess="_patient call kat_circulation_fnc_measureBloodPressure";
		medicRequired="kat_circulation_medLvl_AED_X";
	};
	class ViewMonitor: CheckPulse
	{
		displayName="$STR_kat_circulation_ViewMonitor";
		displayNameProgress="";
		icon="\x\kat\addons\circulation\ui\icon_aedx_monitor.paa";
		category="examine";
		medicRequired="kat_circulation_medLvl_AED_X";
		allowedSelections[]=
		{
			"Head",
			"LeftArm",
			"RightArm",
			"Body",
			"LeftLeg",
			"RightLeg"
		};
		treatmentTime=0.0099999998;
		items[]={};
		consumeItem=0;
		condition="(_patient getVariable [""kat_circulation_DefibrillatorPads_Connected"", false] && {((_patient getVariable [""kat_circulation_Defibrillator_Provider"", [-1, -1, -1]] select 2) isEqualTo 'kat_X_AED')}) || (_patient getVariable [""kat_circulation_AED_X_VitalsMonitor_Connected"", false])";
		callbackStart="";
		callbackSuccess="[_medic, _patient] call kat_circulation_fnc_AEDX_ViewMonitor";
		animationPatient="";
		animationPatientUnconscious="";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon"
		};
	};
};
class kat_circulation_CrossPanel_Dialog
{
	idd=-1;
	movingEnable=1;
	onLoad="uiNamespace setVariable [""kat_circulation_CrossPanel_Display"", (_this select 0)]";
	onUnload="_this call kat_circulation_fnc_onCloseDialog";
	objects[]={};
	class controls
	{
		class background
		{
			moving=1;
			type=0;
			font="TahomaB";
			SizeEX=0.025;
			idc=-1;
			style=48;
			x="safezoneX";
			y="safezoneY+0.181889";
			w="1.62727*3/4";
			h="1.62727";
			colorBackground[]={1,1,1,1};
			colorText[]={1,1,1,1};
			text="\x\kat\addons\circulation\ui\crosspanel.paa";
		};
	};
};
class RscPicture;
class RscLine;
class RscText;
class RscBackground;
class RscButton;
class RscStructuredText;
class kat_circulation_AEDX_Monitor_Dialog
{
	idd=70000;
	movingEnable=0;
	onLoad="uiNamespace setVariable [""kat_circulation_AEDX_Monitor_Display"", (_this select 0)]";
	onUnload="uiNamespace setVariable [""kat_circulation_AEDX_Monitor_Display"", nil]";
	objects[]={};
	class ControlsBackground
	{
		class BlackBackground: RscText
		{
			idc=-1;
			x="(450 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(590 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(1062 / 2048 * (safezoneW * 0.55))";
			h="(824 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=80;
			colorBackground[]={0,0,0,1};
			colorText[]={0,0,0,1};
			text="";
		};
		class Background: BlackBackground
		{
		};
		class EKG: RscPicture
		{
			idc=70024;
			x="(475 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(534 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(1024 / 2048 * (safezoneW * 0.55))";
			h="(1024 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=48;
			size=0;
			colorBackground[]={0,0,0,1};
			colorText[]={1,1,1,1};
			text="\x\kat\addons\circulation\ui\ekg_off.paa";
		};
		class EKGSlider: RscPicture
		{
			idc=70010;
			x="(250 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(726 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(256 / 2048 * (safezoneW * 0.55))";
			h="(256 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=48;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			text="\x\kat\addons\circulation\ui\ekg_slider.paa";
		};
		class HeartRateVitalsDisplayBackground: RscText
		{
			idc=70012;
			x="(552 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1166 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(190 / 2048 * (safezoneW * 0.55))";
			h="(30 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=0;
			font="RobotoCondensed";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 0.6 * (0.55 / (getResolution select 5))";
			shadow=0;
			colorBackground[]={0.76999998,0.95999998,0.31999999,1};
			colorText[]={0,0,0,1};
			text="HR";
		};
		class HeartRateVitalsDisplayBackgroundText: HeartRateVitalsDisplayBackground
		{
			idc=-1;
			style=1;
			colorBackground[]={0,0,0,0};
			font="RobotoCondensedLight";
			text="bpm";
		};
		class BloodPressureVitalsDisplayBackground: HeartRateVitalsDisplayBackground
		{
			idc=-1;
			x="(746 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			w="(260 / 2048 * (safezoneW * 0.55))";
			colorBackground[]={0.039999999,0.95999998,0.98000002,1};
			colorText[]={0,0,0,1};
			text="NIBP";
		};
		class BloodPressureVitalsDisplayBackgroundText: BloodPressureVitalsDisplayBackground
		{
			idc=-1;
			style=1;
			colorBackground[]={0,0,0,0};
			font="RobotoCondensedLight";
			text="mmHg";
		};
		class BloodPressureVitalsDisplayLine: RscText
		{
			idc=-1;
			style=2;
			x="(760 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1279 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(120 / 2048 * (safezoneW * 0.55))";
			h="(3 / 2048 * ((safezoneW * 0.55) * 4/3))";
			colorBackground[]={0.039999999,0.95999998,0.98000002,1};
			colorText[]={1,1,1,1};
			text="";
		};
		class RespirationRateDisplayBackground: HeartRateVitalsDisplayBackground
		{
			idc=-1;
			x="(1010 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			colorBackground[]={0.73000002,0.02,0.74000001,1};
			colorText[]={0,0,0,1};
			text="Resp";
		};
		class RespirationRateDisplayBackgroundText: RespirationRateDisplayBackground
		{
			idc=-1;
			style=1;
			colorBackground[]={0,0,0,0};
			font="RobotoCondensedLight";
			text="/min";
		};
		class SpO2DisplayBackground: HeartRateVitalsDisplayBackground
		{
			idc=-1;
			x="(1204 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			colorBackground[]={0.99000001,0.97000003,0.02,1};
			colorText[]={0,0,0,1};
			text="SpO2";
		};
		class SpO2DisplayBackgroundText: SpO2DisplayBackground
		{
			idc=-1;
			style=1;
			colorBackground[]={0,0,0,0};
			font="RobotoCondensedLight";
			text="%";
		};
		class SpO2PulseRateDisplayBorder: RscText
		{
			idc=70018;
			x="(1366 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1207 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(26 / 2048 * (safezoneW * 0.55))";
			h="(80 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=0;
			font="RobotoCondensed";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 0.6 * (0.55 / (getResolution select 5))";
			shadow=0;
			colorBackground[]={0.99000001,0.97000003,0.02,1};
			colorText[]={0,0,0,0};
			text="";
			show=0;
		};
		class SpO2PulseRateDisplayBackground: SpO2PulseRateDisplayBorder
		{
			idc=70019;
			x="(1368 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1210 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(20 / 2048 * (safezoneW * 0.55))";
			h="(74 / 2048 * ((safezoneW * 0.55) * 4/3))";
			colorBackground[]={0,0,0,1};
		};
		class SpO2PulseRateDisplayBar: SpO2PulseRateDisplayBorder
		{
			idc=70020;
			x="(1370 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1211 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(17 / 2048 * (safezoneW * 0.55))";
			h="(71 / 2048 * ((safezoneW * 0.55) * 4/3))";
		};
		class SpO2PulseRateDisplayBarB: SpO2PulseRateDisplayBar
		{
			idc=70021;
			colorBackground[]={0,0,0,1};
		};
		class HeartRateDisplay: RscText
		{
			idc=70011;
			x="(552 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1196 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(190 / 2048 * (safezoneW * 0.55))";
			h="(80 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=2;
			font="RobotoCondensed";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 2.5 * (0.55 / (getResolution select 5))";
			shadow=0;
			colorBackground[]={0,0,0,0};
			colorText[]={0.76999998,0.95999998,0.31999999,1};
			text="---";
		};
		class TopBloodPressureDisplay: HeartRateDisplay
		{
			idc=70013;
			style=1;
			x="(760 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			w="(120 / 2048 * (safezoneW * 0.55))";
			h="(70 / 2048 * ((safezoneW * 0.55) * 4/3))";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 1.8 * (0.55 / (getResolution select 5))";
			colorText[]={0.039999999,0.95999998,0.98000002,1};
			text="---";
		};
		class BottomBloodPressureDisplay: TopBloodPressureDisplay
		{
			idc=70014;
			y="(1290 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			colorText[]={0.039999999,0.95999998,0.98000002,1};
			text="---";
		};
		class MeanBloodPressureDisplay: TopBloodPressureDisplay
		{
			idc=70015;
			x="(910 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			w="(100 / 2048 * (safezoneW * 0.55))";
			h="(60 / 2048 * ((safezoneW * 0.55) * 4/3))";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 1.1 * (0.55 / (getResolution select 5))";
			colorText[]={0.039999999,0.95999998,0.98000002,1};
			text="";
		};
		class RespirationRateDisplay: HeartRateDisplay
		{
			idc=70016;
			x="(1010 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			h="(120 / 2048 * ((safezoneW * 0.55) * 4/3))";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 0.7 * (0.55 / (getResolution select 5))";
			colorText[]={0.73000002,0.02,0.74000001,1};
			text="Resp off";
		};
		class SpO2Display: HeartRateDisplay
		{
			idc=70017;
			x="(1200 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			w="(170 / 2048 * (safezoneW * 0.55))";
			colorText[]={0.99000001,0.97000003,0.02,1};
			text="---";
		};
		class DateAndTime: RscText
		{
			idc=70022;
			x="(505 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(618 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(400 / 2048 * (safezoneW * 0.55))";
			h="(40 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=0;
			font="RobotoCondensed";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 0.8 * (0.55 / (getResolution select 5))";
			shadow=0;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			text="00/00/0000               00:00";
		};
		class Battery: RscPicture
		{
			idc=-1;
			x="(1256 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(622 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(64 / 2048 * (safezoneW * 0.55))";
			h="(64 / 2048 * ((safezoneW * 0.55) * 4/3))";
			style=48;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			text="\x\kat\addons\circulation\ui\battery.paa";
		};
		class ElapsedTime: DateAndTime
		{
			idc=70023;
			x="(1335 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			w="(130 / 2048 * (safezoneW * 0.55))";
			style=2;
			text="00:00:00";
		};
		class topMiddleText: RscText
		{
			idc=70025;
			x="(880 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(680 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(200 / 2048 * (safezoneW * 0.55))";
			h="(100 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=2;
			font="RobotoCondensed";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 0.6 * (0.55 / (getResolution select 5))";
			shadow=0;
			colorBackground[]={0,0,0,0};
			colorText[]={0,1,0,1};
			text="$STR_kat_circulation_AEDX_Monitor_CheckPads";
		};
		class ChargingStatusBlackBackground: BlackBackground
		{
			idc=70030;
			x="(478 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1119 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(1000 / 2048 * (safezoneW * 0.55))";
			h="(250 / 2048 * ((safezoneW * 0.55) * 4/3))";
			show=0;
		};
		class ChargingStatusBlackBackground2: BlackBackground
		{
			idc=70031;
			x="(1336 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(601 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(145 / 2048 * (safezoneW * 0.55))";
			h="(768 / 2048 * ((safezoneW * 0.55) * 4/3))";
			show=0;
		};
		class ChargingStatusDefibrillator: RscText
		{
			idc=70032;
			x="(579 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1137 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(400 / 2048 * (safezoneW * 0.55))";
			h="(50 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=2;
			font="RobotoCondensed";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 0.8 * (0.55 / (getResolution select 5))";
			shadow=0;
			colorBackground[]={0.050000001,0.85000002,0.36000001,1};
			colorText[]={0,0,0,1};
			text="$STR_kat_circulation_AEDX_Monitor_Defibrillator";
			show=0;
		};
		class ChargingStatus: ChargingStatusDefibrillator
		{
			idc=70033;
			y="(1189 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(400 / 2048 * (safezoneW * 0.55))";
			h="(172 / 2048 * ((safezoneW * 0.55) * 4/3))";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 1.5 * (0.55 / (getResolution select 5))";
			colorBackground[]={1,0.34999999,0,1};
			colorText[]={0,0,0,1};
			text="$STR_kat_circulation_AEDX_Monitor_CHARGING";
		};
		class ChargingStatusEnergySelect: ChargingStatusDefibrillator
		{
			idc=70034;
			x="(1065 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			w="(270 / 2048 * (safezoneW * 0.55))";
			text="$STR_kat_circulation_AEDX_Monitor_SelectedEnergy";
		};
		class ChargingStatusEnergySelectAmount: ChargingStatus
		{
			idc=70035;
			x="(1065 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			w="(270 / 2048 * (safezoneW * 0.55))";
			font="RobotoCondensedBold";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 2.5 * (0.55 / (getResolution select 5))";
			colorBackground[]={0,0,0,1};
			colorText[]={1,1,1,1};
			text="150 J";
		};
		class ChargingStatusBarCharged: RscText
		{
			idc=70036;
			x="(1344 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1360 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(126 / 2048 * (safezoneW * 0.55))";
			h="(1 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=0;
			shadow=0;
			colorBackground[]={1,1,1,1};
			colorText[]={1,1,1,0};
			show=0;
		};
		class ChargingStatusBar1: RscText
		{
			idc=70041;
			x="(1345 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1328 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(123 / 2048 * (safezoneW * 0.55))";
			h="(28 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=2;
			font="RobotoCondensedBold";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 0.6 * (0.55 / (getResolution select 5))";
			shadow=0;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			text="1";
			show=0;
		};
		class ChargingStatusBar2: ChargingStatusBar1
		{
			idc=70042;
			y="(1294 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="2";
		};
		class ChargingStatusBar3: ChargingStatusBar1
		{
			idc=70043;
			y="(1260 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="3";
		};
		class ChargingStatusBar4: ChargingStatusBar1
		{
			idc=70044;
			y="(1226 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="4";
		};
		class ChargingStatusBar5: ChargingStatusBar1
		{
			idc=70045;
			y="(1192 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="5";
		};
		class ChargingStatusBar6: ChargingStatusBar1
		{
			idc=70046;
			y="(1158 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="6";
		};
		class ChargingStatusBar7: ChargingStatusBar1
		{
			idc=70047;
			y="(1124 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="7";
		};
		class ChargingStatusBar8: ChargingStatusBar1
		{
			idc=70048;
			y="(1090 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="8";
		};
		class ChargingStatusBar9: ChargingStatusBar1
		{
			idc=70049;
			y="(1056 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="9";
		};
		class ChargingStatusBar10: ChargingStatusBar1
		{
			idc=70050;
			y="(1022 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="10";
		};
		class ChargingStatusBar15: ChargingStatusBar1
		{
			idc=70051;
			y="(988 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="15";
		};
		class ChargingStatusBar20: ChargingStatusBar1
		{
			idc=70052;
			y="(954 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="20";
		};
		class ChargingStatusBar30: ChargingStatusBar1
		{
			idc=70053;
			y="(920 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="30";
		};
		class ChargingStatusBar50: ChargingStatusBar1
		{
			idc=70054;
			y="(886 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="50";
		};
		class ChargingStatusBar70: ChargingStatusBar1
		{
			idc=70055;
			y="(852 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="70";
		};
		class ChargingStatusBar85: ChargingStatusBar1
		{
			idc=70056;
			y="(818 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="85";
		};
		class ChargingStatusBar100: ChargingStatusBar1
		{
			idc=70057;
			y="(784 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="100";
		};
		class ChargingStatusBar120: ChargingStatusBar1
		{
			idc=70058;
			y="(750 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="120";
		};
		class ChargingStatusBar150: ChargingStatusBar1
		{
			idc=70059;
			y="(682 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			h="(66 / 2048 * ((safezoneW * 0.55) * 4/3))";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 1.5 * (0.55 / (getResolution select 5))";
			text="150";
		};
		class ChargingStatusBar200: ChargingStatusBar1
		{
			idc=70060;
			y="(648 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			text="200";
		};
		class ChargingStatusBackground: EKG
		{
			idc=70040;
			text="\x\kat\addons\circulation\ui\chargingstatus_bg.paa";
			show=0;
		};
		class ShockTally: RscText
		{
			idc=70037;
			x="(980 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1282 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(84 / 2048 * (safezoneW * 0.55))";
			h="(46 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=2;
			font="RobotoCondensedBold";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * (0.55 / (getResolution select 5))";
			shadow=0;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			text="0";
			show=0;
		};
		class AEDBackground: RscPicture
		{
			idc=-1;
			x="(safezoneX + (safezoneW - (safezoneW * 0.55)) / 2)";
			y="(safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2)";
			w="(safezoneW * 0.55)";
			h="((safezoneW * 0.55) * 4/3)";
			type=0;
			style=48;
			font="TahomaB";
			size=0;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			text="\x\kat\addons\circulation\ui\zoll.paa";
		};
		class ShockButton: RscPicture
		{
			idc=70026;
			x="(1487 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1380 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(256 / 2048 * (safezoneW * 0.55))";
			h="(256 / 2048 * ((safezoneW * 0.55) * 4/3))";
			style=48;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			text="\x\kat\addons\circulation\ui\shockbutton.paa";
			show=0;
		};
		class AutoModeFeedbackMessageTop: RscText
		{
			idc=70028;
			x="(579 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1137 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(758 / 2048 * (safezoneW * 0.55))";
			h="(61 / 2048 * ((safezoneW * 0.55) * 4/3))";
			type=0;
			style=2;
			font="RobotoCondensed";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 1 * (0.55 / (getResolution select 5))";
			shadow=0;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			text="";
			show=0;
		};
		class AutoModeFeedbackMessage: AutoModeFeedbackMessageTop
		{
			idc=70029;
			y="(1198 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			h="(150 / 2048 * ((safezoneW * 0.55) * 4/3))";
			font="RobotoCondensedBold";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 1.6 * (0.55 / (getResolution select 5))";
			text="";
		};
		class AEDModeFeedbackMessageBackground: EKG
		{
			idc=70027;
			text="\x\kat\addons\circulation\ui\AEDmode_bg.paa";
			show=0;
		};
	};
	class Controls
	{
		class ShockButton: RscButton
		{
			text="";
			colorText[]={1,1,1,1};
			colorDisabled[]={1,1,1,1};
			colorBackground[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			colorBorder[]={0,0,0,0};
			soundEnter[]={};
			soundPush[]={};
			soundEscape[]={};
			idc=-1;
			style=0;
			x="(1537 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1430 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(156 / 2048 * (safezoneW * 0.55))";
			h="(156 / 2048 * ((safezoneW * 0.55) * 4/3))";
			shadow=0;
			font="RobotoCondensed";
			sizeEx="((((safezoneW / safezoneH) min 1.2) / 1.2) / 22)";
			onButtonClick="if !(kat_circulation_AEDX_MonitorTarget isEqualTo objNull) then {if(kat_circulation_AEDX_MonitorTarget getVariable [""kat_circulation_Defibrillator_Charged"", false]) then {kat_circulation_AEDX_MonitorTarget setVariable [""kat_circulation_Defibrillator_Charged"", false, true]; kat_circulation_AEDX_MonitorCharged = false; kat_circulation_AEDX_MonitorShockAdministered = true}}";
			tooltip="$STR_kat_circulation_Defibrillator_Action_Shock";
		};
		class AnalyzeButton: ShockButton
		{
			idc=-1;
			x="(913 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1487 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(122 / 2048 * (safezoneW * 0.55))";
			h="(89 / 2048 * ((safezoneW * 0.55) * 4/3))";
			onButtonClick="if (!(kat_circulation_AEDX_MonitorTarget isEqualTo objNull) && kat_circulation_AEDX_MonitorTarget getVariable [""kat_circulation_DefibrillatorPads_Connected"", false] && !(kat_circulation_AEDX_MonitorTarget getVariable [""kat_circulation_DefibrillatorInUse"", false])) then {[player, kat_circulation_AEDX_MonitorTarget, 'AEDX'] call kat_circulation_fnc_AED_Analyze; [] call kat_circulation_fnc_AEDX_ViewMonitor_AnalyzeFeedback}";
			tooltip="$STR_kat_circulation_AnalyzeRhythm";
		};
		class ChargeButton: AnalyzeButton
		{
			idc=-1;
			x="(1316 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			onButtonClick="if (!(kat_circulation_AEDX_MonitorTarget isEqualTo objNull) && kat_circulation_AEDX_MonitorTarget getVariable [""kat_circulation_DefibrillatorPads_Connected"", false] && !(kat_circulation_AEDX_MonitorTarget getVariable [""kat_circulation_DefibrillatorInUse"", false])) then {[player, kat_circulation_AEDX_MonitorTarget] call kat_circulation_fnc_Defibrillator_ManualCharge; [true] call kat_circulation_fnc_AEDX_ViewMonitor_AnalyzeFeedback; [] call kat_circulation_fnc_AEDX_ViewMonitor_Charging}";
			tooltip="$STR_kat_circulation_Defibrillator_Action_Charge";
		};
		class CancelChargeButton: ShockButton
		{
			idc=-1;
			x="(1116 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(1453 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(119 / 2048 * (safezoneW * 0.55))";
			h="(169 / 2048 * ((safezoneW * 0.55) * 4/3))";
			onButtonClick="if (!(kat_circulation_AEDX_MonitorTarget isEqualTo objNull) && (kat_circulation_AEDX_MonitorTarget getVariable [""kat_circulation_Defibrillator_Charged"", false])) then {kat_circulation_AEDX_MonitorTarget setVariable [""kat_circulation_DefibrillatorInUse"", false, true]; kat_circulation_AEDX_MonitorTarget setVariable [""kat_circulation_Defibrillator_Charged"", false, true]; kat_circulation_AEDX_MonitorCharged = false; kat_circulation_AEDX_MonitorShockAdministered = false}";
			tooltip="$STR_kat_circulation_Defibrillator_Action_CancelCharge";
		};
		class ToggleVolumeButton: ShockButton
		{
			idc=-1;
			x="(1678 / 2048 * (safezoneW * 0.55) + (safezoneX + (safezoneW - (safezoneW * 0.55)) / 2))";
			y="(802 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			w="(91 / 2048 * (safezoneW * 0.55))";
			h="(73 / 2048 * ((safezoneW * 0.55) * 4/3))";
			onButtonClick="if (!(kat_circulation_AEDX_MonitorTarget isEqualTo objNull)) then {if (kat_circulation_AEDX_MonitorTarget getVariable [""kat_circulation_AED_X_VitalsMonitor_VolumePatient"", false]) then {kat_circulation_AEDX_MonitorTarget setVariable [""kat_circulation_AED_X_VitalsMonitor_VolumePatient"", false, true]; [(kat_circulation_AEDX_MonitorTarget getVariable ""kat_circulation_Defibrillator_Provider"") select 0, false] call kat_circulation_fnc_AEDXPlaced_VitalsMonitor_SetVolume} else {kat_circulation_AEDX_MonitorTarget setVariable [""kat_circulation_AED_X_VitalsMonitor_VolumePatient"", true, true]; [(kat_circulation_AEDX_MonitorTarget getVariable ""kat_circulation_Defibrillator_Provider"") select 0, true] call kat_circulation_fnc_AEDXPlaced_VitalsMonitor_SetVolume}}";
			tooltip="$STR_kat_circulation_AEDX_Monitor_ToggleVolume";
		};
		class ManualBloodPressureMeasurement: ToggleVolumeButton
		{
			idc=-1;
			y="(1251 / 2048 * ((safezoneW * 0.55) * 4/3) + (safezoneY + (safezoneH - ((safezoneW * 0.55) * 4/3)) / 2))";
			onButtonClick="if (!(kat_circulation_AEDX_MonitorTarget isEqualTo objNull) && (missionNamespace getVariable [""kat_circulation_AED_X_VitalsMonitor_BloodPressureInterval"", 0] > 0)) then {kat_circulation_AEDX_MonitorTarget call kat_circulation_fnc_measureBloodPressure}";
			tooltip="$STR_kat_circulation_AEDX_Monitor_MeasureBloodPressure";
		};
	};
};
