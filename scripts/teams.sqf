//Stolen from Death Mittens, from Route Rasman v2. God bless you, Mittens.
private ["_type", "_unit"];

_type = _this select 0;
_unit = _this select 1;
	
Sleep 5;
		
switch (_type) do
{

	case "ALPHARED":
	{
	_unit assignTeam "RED"; 
	[_unit,"AlphaRedID"] call BIS_fnc_setUnitInsignia; 
	};

	case "ALPHABLUE":
	{
	_unit assignTeam "BLUE";  
	[_unit,"AlphaBlueID"] call BIS_fnc_setUnitInsignia;
	};
	
	case "BRAVORED":
	{
	_unit assignTeam "RED"; 
	[_unit,"BravoRedID"] call BIS_fnc_setUnitInsignia; 
	};

	case "BRAVOBLUE":
	{
	_unit assignTeam "BLUE"; 
	[_unit,"BravoBlueID"] call BIS_fnc_setUnitInsignia;
	};
	
	case "GREEN":
	{
	_unit assignTeam "GREEN"; 
	[_unit,"ResGreenID"] call BIS_fnc_setUnitInsignia; 	
	};
	
	case "YELLOW":
	{
	_unit assignTeam "YELLOW"; 
	[_unit,"ResYellowID"] call BIS_fnc_setUnitInsignia; 
	};

};
