//custom max_velocity all regards of script go to OPTRE
// VELOCITY = SPEED / 3.6
#define MAX_VELOCITY_DEFAULT 111

params [
	["_active", false, [true, 0]],
	["_keyPressed", true, [true]],
	["_rampUp", 0.1]
];

private _vehicle = vehicle player;
private _vehicleCfg = configOf _vehicle;

// All thrust-capable vehicles need config entries to allow it
// OPTRE_canThrust = 1
if (getNumber (_vehicleCfg >> "OPTRE_canThrust") isNotEqualTo 1) exitWith {};

// Conditional ordered from most likely to least likely imo
// Below 5m altitude, vehicle destroyed, player ejected, engine off, player not driver
if (
	(getPosATL _vehicle select 2) < 5 || {
	!alive _vehicle || {
	_vehicle isEqualTo player || {
	!isEngineOn _vehicle || {
	driver _vehicle != player
}}}}) exitWith {
	player setVariable ["OPTRE_AirThrustAmount", 0];
};



////////////////////////////////////
// HANDLE DIGITAL VS ANALOG INPUT //
////////////////////////////////////

// Only check on key events
if (_keyPressed) then {
	// User action will return boolean when activated with binary keypress
	if ((typeName _active) isEqualTo "BOOL") then {
		// Check for thruster texture, apply if found
		private _texture = getText (_vehicleCfg >> "OPTRE_thrustTexture");
		private _texIndex = getNumber (_vehicleCfg >> "OPTRE_thrustTextureIndex");

		// Binary key handlers only fire once, not while held, so set variable for future reference
		if (_active) then {

			// Check for active thrust variable, set if not yet set
			if (player getVariable ["OPTRE_AirThrustAmount", 0] isEqualTo 0) then {
				player setVariable ["OPTRE_AirThrustAmount", 1];
			};

			if (_texture isNotEqualTo "") then {
				_vehicle setObjectTextureGlobal [_texIndex, _texture];
			};
		} else {
			player setVariable ["OPTRE_AirThrustAmount", 0];

			if (_texture isNotEqualTo "") then {
				_vehicle setObjectTextureGlobal [_texIndex, ""];
			};
		};
	} else {
		// Key can return scalar, if analog
		// Use 2% thrust as minimum deadzone
		if (_active > 0.02) then {
			// Variable stored will be scalar representing analog strength
			if (player getVariable ["OPTRE_AirThrustAmount", 0] isEqualTo 0) then {
				player setVariable ["OPTRE_AirThrustAmount", _active];
			};
		} else {
			player setVariable ["OPTRE_AirThrustAmount", 0];
		};
	};
};


// any amount > 2% analogue will engage thrust
if (player getVariable ["OPTRE_AirThrustAmount", 0] > 0.02) then {

	// Check if vehicle has defined max thrust velocity
	private _maxVelocity = MAX_VELOCITY_DEFAULT;
	private _velocityCap = player getVariable "OPTRE_AirThrustAmount";
	private _velocityMult = 1;

	if (getNumber (_vehicleCfg >> "OPTRE_maxVelocity") > 1) then {
		_maxVelocity = getNumber (_vehicleCfg >> "OPTRE_maxVelocity");
	};

	if (getNumber (_vehicleCfg >> "OPTRE_velocityMultiplier") isNotEqualTo 0) then {
		_velocityMult = getNumber (_vehicleCfg >> "OPTRE_velocityMultiplier") min 0.01;
	};

	private _velocity = velocityModelSpace _vehicle;

	if (_velocity#1 < (_maxVelocity * _velocityCap)) then {
		_vehicle setVelocityModelSpace [_velocity#0, _velocity#1 + (_velocityMult * _rampUp), _velocity#2];
	};

	// Slightly cheaper than adding/removing a PFH, since we're only executing while thrusting
	// Re-executing also handles vehicles being destroyed or exited while holding the key
	[
		{call OPTRE_fnc_doAirThrust},
		[_active, false, (_rampUp + (_rampUp / 10)) min 1],
		0.1
	] call CBA_fnc_waitAndExecute;
};