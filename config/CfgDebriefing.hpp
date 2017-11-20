// Mission endings
// Handles the mission ending screen
// https://community.bistudio.com/wiki/Debriefing

class example
{
	title = "Example Ending"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
	subtitle = "The mission maker should change this"; // Subtitle below the title when the closing shot is triggered
	description = "This should be changed before the mission is finished"; // Description visible on the debriefing screen after the closing shot
	//pictureBackground = ""; // Image file used as a background on the debriefing screen
	//picture = ""; // Icon used for the closing shot
	//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
};

class BESTEND //need to add backgrounds/pictures
{
	title = "MISSION FULLY COMPLETE";
	subtitle = "VERY WELL DONE";
	description = "Far beyond expectations. You deserve a commendation.";
};

class COLONELKILLED
{
	title = "MISSION COMPLETE";
	subtitle = "COLONEL KILLED";
	description = "You were not able to retrieve the tank, but killing the Colonel will make stabilizing the area easier.";
};

class TANKRETRIEVED
{
	title = "MISSION COMPLETE";
	subtitle = "TANK RETRIEVED";
	description = "The Colonel is still alive, but the tank you retrieved will definitely change that soon.";
};

	class BASEREACHED
{
	title = "BASE REACHED";
	subtitle = "YOU MADE IT";
	description = "You were unable to complete your objectives, but you made it home alive, and that's what counts.";
};

	class RETREATEND
{
	title = "RETREATED!";
	subtitle = "PROBABLY FOR THE BEST";
	description = "Return to base, regroup, and prepare for the next mission.";
};

	class DEBUGEND
{
	title = "DEBUG ENDING";
	subtitle = "WAIT WHAT";
	description = "Either the end trigger didn't work and someone went to hit this or someone bumped into this by accident. Either way, mission is over.";
};	

	class loser
{
	title = "Mission over!";
	subtitle = "Everybody died!";
	description = "The russians were too strong.";
	picture = "KIA";
	pictureColor[] = {0.8,0.1,0.1,1};
};