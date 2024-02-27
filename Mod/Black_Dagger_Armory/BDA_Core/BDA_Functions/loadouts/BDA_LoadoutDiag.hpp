#include "defines.hpp"
class BDA_LoadoutDiag
{
	idd = 42000;
	
	class ControlsBackground
	{
		class bkgrdundgrey
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33300782;
			y = safeZoneY + safeZoneH * 0.28645834;
			w = safeZoneW * 0.32421875;
			h = safeZoneH * 0.42708334;
			style = 0;
			text = "";
			colorBackground[] = {0.1066,0.1066,0.1066,0.8};
			colorText[] = {0.6588,0.4196,0.4,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class bkgrnd_header
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.29444445;
			w = safeZoneW * 0.3025;
			h = safeZoneH * 0.04;
			style = 0;
			text = "";
			colorBackground[] = {0.8,0.2,0.2,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class BDA_LoadList
		{
			type = 5;
			idc = 42001;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.34444445;
			w = safeZoneW * 0.1425;
			h = safeZoneH * 0.34555556;
			style = 16;
			colorBackground[] = {0.2,0.2,0.2,0.8353};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.8,0.2,0.2,1};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			onLBSelChanged = "_this call BDA_fnc_updateLoadLB";
			
		};
		class bkgrdtitle
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.43375;
			y = safeZoneY + safeZoneH * 0.29444445;
			w = safeZoneW * 0.1225;
			h = safeZoneH * 0.04;
			style = 0+2;
			text = "Black Dagger Loadouts";
			colorBackground[] = {0.0392,0.6784,0.4157,0};
			colorText[] = {0.949,0.949,0.949,1};
			font = "PuristaBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class BDA_Pic: RscPicture
		{
			idc = 42002;
			colorText[] = {1,1,1,1};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			text = "BDA_Core\BDA_Functions\loadouts\data\rifle.paa";
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.34444445;
			w = safeZoneW * 0.1525;
			h = safeZoneH * 0.28;
		};
		class BDA_Confirm
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.64444445;
			w = safeZoneW * 0.1525;
			h = safeZoneH * 0.04;
			style = 0+2;
			text = "Confirm Loadout";
			onButtonClick= "[]call BDA_fnc_loadLoadout";
			borderSize = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.8,0.2,0.2,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0.;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		
	};
	
};
