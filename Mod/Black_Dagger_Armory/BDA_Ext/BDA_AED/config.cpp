class CfgPatches {
    class BDA_AED {
        name="BDA - Ribs AED";
        author="Rib";
        requiredVersion=0.1;
        version=0.1;
        units[]={
            "BDA_AEDItem"
        };
        weapons[]={
            "BDA_AED"
        };
        magazines[]={};
        requiredAddons[]={
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
			"cba_settings"
        };
    };
};

class CfgFunctions {
    class BDA_FunctionYeet {
        tag="ace_medical_treatment";
        class ace_medical_treatment
		{
			class cprLocal
			{
				file="\BDA_Ext\BDA_AED\functions\fnc_cprLocal.sqf";
			};
			class cprSuccess
			{
				file="\BDA_Ext\BDA_AED\functions\fnc_cprSuccess.sqf";
			};
		};
    };
};

class CfgWeapons {
    class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
    class BDA_AED: ACE_ItemCore {
        scope=2;
        author="Rib";
        displayName="Automated External Defibrillator";
        model="\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        descriptionShort="AED";
        ACE_isMedicalItem=1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass=20;
        };
    };
};

class CfgVehicles {
    class Item_Base_F;
	class Items_base_F;
	class WeaponHolder_Single_limited_item_F;
    class Land_Defibrillator_F: Items_base_F
	{
		ace_dragging_canCarry=1;
		ace_dragging_carryPosition[]={0,1,1};
		ace_dragging_carryDirection=270;
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
    class ThingX;
    class BDA_AEDItem: ThingX {
        scope=2;
        scopeCurator=2;
        displayName="Automated External Defibrillator";
        author="Rib";
        vehicleClass="Items";
        model="\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        class TransportItems
		{
			class _xx_BDA_AED
			{
				name="BDA_AED";
				count=1;
			};
		};
        ace_dragging_canDrag=1;
		ace_dragging_canCarry=1;
		ace_dragging_dragPosition[]={0,1.1,0};
		ace_dragging_carryPosition[]={0,1.1,1};
    };
};

class ACE_Medical_Treatment_Actions {
    class BasicBandage;
    class CPR: BasicBandage {
        displayName = "$STR_ACE_Medical_Treatment_Actions_CPR";
        displayNameProgress = "$STR_ACE_Medical_Treatment_Actions_PerformingCPR";
        icon = "";
        category = "advanced";
        treatmentLocations = TREATMENT_LOCATIONS_ALL;
        allowedSelections[] = {"Body"};
        allowSelfTreatment = 0;
        medicRequired = 0;
        treatmentTime = 15;
        items[] = {};
        condition = QFUNC(canCPR);
        callbackSuccess = QFUNC(cprSuccess);
        callbackFailure = QFUNC(cprFailure);
        callbackProgress = QFUNC(cprProgress);
        callbackStart = QFUNC(cprStart);
        animationMedic = "AinvPknlMstpSnonWnonDr_medic0";
        animationMedicProne = "AinvPknlMstpSnonWnonDr_medic0";
        animationMedicSelf = "";
        animationMedicSelfProne = "";
        consumeItem = 0;
        litter[] = {};
    };

    class Defibrillator: CPR {
        displayName = "$STR_BDA_Medical_Treatment_Actions_Defib";
        displayNameProgress = "$STR_BDA_Medical_Treatment_Actions_PerformingDefib";
        icon = "\BDA_AED\ui\defib_action.paa";
        items[] = {"BDA_AED"};
        consumeItem = 0;
        condition = QFUNC(canCPR);
		animationMedic = "AinvPknlMstpSnonWnonDnon_medic3";
        animationMedicProne = "AinvPknlMstpSnonWnonDr_medic0";
        treatmentTime = 10;
        callbackSuccess = QFUNC(cprSuccess);
        callbackFailure = QFUNC(cprFailure);
        callbackProgress = QFUNC(cprProgress);
        callbackStart = QFUNC(cprStart);
    };
};
    
