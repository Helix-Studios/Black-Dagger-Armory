class CfgPatches {
	class BDA_Accessories_C {
		author="Black Dagger Development Crew";
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_FC_Units_Marines",
			"V_FZ_Armor",
			"BDA_Core",
			"BDA_Accessories"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

class CfgVehicles {
	class ItemInfo;
    class BDA_Rucksack_B;
    class BDA_Rucksack_B_SL;
    class BDA_Naval_Belt_R;

	class BDA_Rib_Belt: BDA_Naval_Belt_R {
		model = "";
		displayName = "NAVCOM Carrier Belt (R. Ribbington)";
		maximumLoad=500;
		mass=10;
		hiddenSelectionsTextures[]= {
			"BDA_Armor\BDA_Vests\data\BDA_Belt_NAVCOM_CO.paa"
		};
	};

};

class cfgMods
{
	author="Rib";
	timepacked="231020241044";
};
