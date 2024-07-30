class CfgPatches 
{
    class BDA_Props 
    {
        name="Project Archeron - Props";
		author="Project Archeron Team";
		requiredVersion=0.1;
		requiredAddons[]={"BDA_Core"};
		units[]={};
		weapons[]={};
    };
};

class CfgVehicles 
{
    class Thing;

    class PA_Can_B: Thing 
    {
        displayName = "Can [Bepis]";
        scope = 2;
        model = "BDA_Ext\BDA_Props\can1.p3d";
        editorCategory="BDA_EdCat_BlackDagger";
		editorSubcategory="BDA_ESC_Props";
        armor = 20;
        hiddenSelections[] = {"camo1"};
        hiddenSelectionstextures[] = {"BDA_Ext\BDA_Props\data\can_co.paa"};
        class DestructionEffects {};
    };

};