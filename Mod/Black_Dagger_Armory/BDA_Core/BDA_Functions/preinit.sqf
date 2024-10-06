#include "\BDA_Core\BDA_Functions\define.hpp"

diag_log format[MACRO_DIAG_LOG,"Loading BDA camo system..."];

[
	"\BDA_Core\BDA_Functions\vehCamoChange.sqf", 
	MACRO_QUOTE(bda_fnc_vehCamoChange.sqf)
] call CBA_fnc_compileFunction;

diag_log format[MACRO_DIAG_LOG,"Done loading BDA camo system!"];