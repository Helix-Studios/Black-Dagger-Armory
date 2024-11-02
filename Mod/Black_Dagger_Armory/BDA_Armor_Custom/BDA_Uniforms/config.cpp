class CfgPatches {
	class BDA_Uniforms_Customs {
		author="Black Dagger Development Crew";
		requiredAddons[]= {
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"BDA_Core",
			"BDA_Uniforms"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

class cfgWeapons {
	class UniformItem;
	class BDA_Uniform_B;
	class U_C_Scientist;
	class BDA_Base_Navy_Uniform;

//------------------------------------------------------------------// Naval Uniforms

	class BDA_Navy_Uniform_Shadow: BDA_Base_Navy_Uniform {
		author="Rib";
		scope=0;
		displayName="Naval BDU (G. Shadow)";
		hiddenSelections[]= {
			"camo"
		};
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Uniforms\data\BDA_Navy_Uniform_Shadow_CO.paa"
		};
		class ItemInfo: UniformItem {
			uniformClass="BDA_Navy_Uniform_Shadow_F";
		};
	};

	class BDA_Navy_Uniform_Knight: BDA_Base_Navy_Uniform {
		author="Rib";
		scope=2;
		displayName="Naval BDU (N. Knight)";
		hiddenSelections[]= {
			"camo"
		};
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Uniforms\data\BDA_Navy_Uniform_Knight_CO.paa"
		};
		class ItemInfo: UniformItem {
			uniformClass="BDA_Navy_Uniform_Knight_F";
		};
	};
};

class CfgVehicles {
	class BDA_Base_Naval_Uniform;

	//------------------------------------------------------------------// Naval Uniforms

	class BDA_Navy_Uniform_Shadow_F: BDA_Base_Naval_Uniform {
		scope = 0;
		uniformClass="BDA_Navy_Uniform_Shadow";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Uniforms\data\BDA_Navy_Uniform_Shadow_CO.paa"
		};
	};

	class BDA_Navy_Uniform_Knight_F: BDA_Base_Naval_Uniform {
		uniformClass="BDA_Navy_Uniform_Knight";
		hiddenSelectionsTextures[]= {
			"BDA_Armor_Custom\BDA_Uniforms\data\BDA_Navy_Uniform_Knight_CO.paa"
		};
	};

};

class cfgMods {
	author="Rib";
	timepacked="051020242250";
};