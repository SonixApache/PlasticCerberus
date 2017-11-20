// Mission briefings
// Config method of creating custom briefings
/*
	CONFIG BRIEFING EXAMPLE
	The following config is an example of how your briefing should be written
	
	class example	// Config class. Used when calling XPT_fnc_briefingCreate. Needs to be unique.
	{
		category = "Diary";		// Category that the briefing goes in. Use "Diary" for the default briefing class
		entryName = "Title";	// Briefing title. This is usually something like "Situation", "Mission", "Assets", etc.
		entryText = "Text";		// Briefing text. Formatted as structured text, contains the contents of your briefing.
		onStart = 1;			// Briefing on start. Determines if the briefing should be created upon mission start. Set to 0 to disable.
		sides[] = {0,1,2,3};	// Briefing sides. Determines which sides will receive the briefing message on mission start. Good for TvTs.
	};
	
	Briefings will appear ordered from bottom to top as they're listed here.
	This is because the game adds new briefings to the top of the list, and the template adds the briefings from top to bottom.
*/
class briefings
{
	class assets	// Example assets briefing. Should include a list of all friendly vehicle assets available.
	{
		category = "Diary";
		entryName = "Assets";
		entryText = "You have at your disposal:<br/>- Four M1151/M2 HMMWVs loaded with supplies<br/>- One M1152 ECV HMMWV with less supplies";
		onStart = 1;
		sides[] = {0,1,2,3};
	};
	class mission	// Example mission briefing. Should include a brief overview of the player's tasks.
	{
		category = "Diary";
		entryName = "Mission";
		entryText = "Your task is to reinforce our position at the airfield. Preferably by moving further along the MSR, clearing a path so we can move in supplies.<br/><br/>There are two optional objectives along the MSR:<br/> General Gene Ericman is currently located in the captured FOB in Novy Sobor. Taking him out would make stabilizing the area a lot easier.<br/>There is also talk of a disabled M1A1 Abrams tank located in Pustoshka. The crew bailed after a russian armored brigade rolled through and knocked out the engine.<br/>Retrieving or destroying it would be beneficial to our cause.";
		onStart = 1;
		sides[] = {0,1,2,3};
	};
	class situation	// Example situation briefing. Should include a bit of backstory to your mission.
	{
		category = "Diary";
		entryName = "Situation";
		entryText = "The russians have upped the ante and brought in some heavy weapons. Our position at the airfield is in danger.<br/>Your unit has just finished taking a break at the FOB after moving along the MSR from our HQ at Elektrozavodsk.<br/><br/>Your humvees will be your lifeline for this mission. They're loaded with ammunition and medical supplies. Try to keep them close, but out of danger.<br/><br/>There have been reports of many heavy weapons being set up in the area, along with quite a lot of armor. Be on your toes.";
		onStart = 1;
		sides[] = {0,1,2,3};
	};
};