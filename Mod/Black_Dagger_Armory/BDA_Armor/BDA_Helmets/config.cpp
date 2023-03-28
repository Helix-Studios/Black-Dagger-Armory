class CfgPatches
{
	class BDA_Helmets
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
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

class cfgWeapons
{
	class ItemInfo;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class Uniform_Base;
	class HitpointsProtectionInfo;
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;
	class OPTRE_Helmet_NavyDeckCrew;
	class OPTRE_PatrolCap_Navy;
	class OPTRE_FC_VX19_Helmet;
	class OPTRE_FC_VX19_Helmet_dp;
	class OPTRE_UNSC_Cap_ODST;
	class H_Booniehat_oli;

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//------------------------------------------------------------------// Base Helmet.


    class BDA_CH252D_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		author="Schlopp";
		displayName="CH252D Helmet";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa"
		};
	};

    class BDA_CH252D_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Schlopp";
		displayName="CH252D Helmet";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};
	};

//------------------------------------------------------------------// Scythe Command.


    class BDA_CH252D_Helmet_P1: OPTRE_UNSC_CH252D_Helmet
	{
		author="Schlopp";
		displayName="CH252D Helmet (1stPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Scythe_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa"
		};
	};

    class BDA_CH252D_Helmet_P1_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Schlopp";
		displayName="CH252D Helmet (1stPLT)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Scythe_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};
	};

//------------------------------------------------------------------// 1-1 Helmet.


    class BDA_CH252D_Helmet_S1: OPTRE_UNSC_CH252D_Helmet
	{
		author="Schlopp";
		displayName="CH252D Helmet (1-1)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa"
		};
	};

    class BDA_CH252D_Helmet_S1_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Schlopp";
		displayName="CH252D Helmet (1-1)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_S1_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};
	};

//------------------------------------------------------------------// 1-2 Helmet.

    class BDA_CH252D_Helmet_S2: OPTRE_UNSC_CH252D_Helmet
	{
		author="Schlopp";
		scope=0;
		displayName="CH252D Helmet (1-2)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa"
		};
	};

    class BDA_CH252D_Helmet_S2_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Schlopp";
		scope=0;
		displayName="CH252D Helmet (1-2)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};
	};

//------------------------------------------------------------------// 1-3 Helmet.

    class BDA_CH252D_Helmet_S3: OPTRE_UNSC_CH252D_Helmet
	{
		author="Schlopp";
		scope=0;
		displayName="CH252D Helmet (1-3)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa"
		};
	};

    class BDA_CH252D_Helmet_S3_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Schlopp";
		scope=0;
		displayName="CH252D Helmet (1-3)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};
	};

	class BDA_CH252D_Helmet_SNW: OPTRE_UNSC_CH252D_Helmet
	{
		author="Schlopp";
		displayName="CH252D Helmet (Snow)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Snow_CO.paa",
			"BDA_Armor\BDA_Helmets\data\visors\BDA_Visor_CO.paa"
		};
	};

    class BDA_CH252D_Helmet_SNW_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Schlopp";
		displayName="CH252D Helmet (Snow)";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Helmet_Snow_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};
	};

	//------------------------------------------------------------------// Cascadia Helmet.

	class BDA_VX19_Helmet: OPTRE_FC_VX19_Helmet
	{
		scope=2;
		author="Schlopp";
		displayName="VX19 Flight Helmet";
		model="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
		picture="\OPTRE_FC_Units\Marines\data\h3_pilothelmet_i_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_co.paa"
		};
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
	};
	class BDA_VX19_Helmet_dp: OPTRE_FC_VX19_Helmet_dp
	{
		scope=1;
		author="Schlopp";
		displayName="VX19 Flight Helmet";
		model="\OPTRE_FC_Units\Marines\h3_pilothelmet_dp.p3d";
		picture="\OPTRE_FC_Units\Marines\data\h3_pilothelmet_i_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"BDA_Armor\BDA_Helmets\data\BDA_Pilot_Helmet_CO.paa",
			"optre_fc_units\marines\data\h3_pilothelmet_visor_CA.paa"
		};
		optreVarietys[]=
		{
			"_dp",
			"",
			"_broken"
		};
		optreHUDStyle="ODST_1";
	};

	class BDA_Marine_Helmet: BDA_VX19_Helmet // Prefeably don't retex this for now. Looking for feedback and create an improvement
    {
        scope=2;
        author="Schlopp";
        displayName="Marine Helmet Test";
        descriptionShort="Poopie";
		picture="\OPTRE_FC_Units\Marines\data\h3_pilothelmet_i_ca.paa";
        hiddenSelections[]=
        {
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "BDA_MarineHelmet\data\Helmet_co.paa",
        };
        subItems[]={};
        model="BDA_MarineHelmet\BDA_Marine_Helmet.p3d";
        ace_hearing_lowerVolume=0.60000002;
        ace_hearing_protection=0.85000002;
        class ItemInfo: HeadgearItem
        {
            mass=10;
            uniformModel="BDA_MarineHelmet\BDA_Marine_Helmet.p3d";
            hiddenSelections[]=
            {
                "camo1"
            };
            allowedSlots[]={801,901,701,605};
            modelSides[]={6};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=16;
                    passThrough=0.5;
                };
            };
        };
    };

};