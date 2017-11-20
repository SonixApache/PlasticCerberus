// Script for creating player tasks
// Only to be run on the server. BIS_fnc_taskCreate is global.
if (!isServer) exitWith {};

// Example task syntax below
/*
[
	true, // Owners of the task. See wiki page for details
	["task name", "parent task name"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["description", "title", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	[0,0,0], // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"attack", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

	Make sure to add the name of the zeus unit into the owner field in string format
	It should look like this when written
	
		[true, "zeus_unit"]
		
	This adds the task to all player units, as well as the "zeus_unit" curator.
	This makes sure that zeus units have the same tasks that the players do
*/
// Place tasks here
[WEST, "MAINTASK", ["You're stationed at a rudimentary FOB just off the MSR leading back to our airfield.<br/>Reach the airfield at any cost. This is your primary objective.<br/><br/>No man left behind.<br/>Your mission will only end when all of your active forces makes it home.", "Reach the base", "REACH"], getMarkerPos "ENDZONE", "ASSIGNED", 0, true, "land", true] call BIS_fnc_taskCreate;

[WEST, "OPTIONALTASKS", ["There are some additonal tasks available, if you are willing and able.", "", ""], objNull, "CREATED", 0, false, "", true] call BIS_fnc_taskCreate;

[WEST, ["GENERALTASK","OPTIONALTASKS"], ["The russians have overrun our forward base at Novy Sobor. <br/>The General of the enemy forces is currently doing an inspection. <br/> <br/> Eliminate him.", "Kill the General", "CAPTURE"], getPos GeneEricman, "CREATED", 0, false, "kill", true] call BIS_fnc_taskCreate;

[WEST, ["VYBORTASK","OPTIONALTASKS"], ["An armored patrol was ambushed and forced to retreat near Pushtoshka. There have been reports of an M1A1 Abrams being pillaged by the enemy.<br/><br/>Investigate this report. Ensure the tank does not fall into enemy hands.<br/>Return it to the base if possible. Destroy it if you must.<br/>", "Stolen M1A1 Abrams", "RETRIEVE"], getPos OBJTANK, "CREATED", 0, false, "repair", true] call BIS_fnc_taskCreate;