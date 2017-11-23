// Mission endings
// Handles the mission ending screen
// https://community.bistudio.com/wiki/Debriefing

class BESTEND //need to add backgrounds/pictures
{
	title = "MISSION FULLY COMPLETE";
	subtitle = "VERY WELL DONE";
	description = "Far beyond expectations. You deserve a commendation.";
};

class GENERALKILLED
{
	title = "MISSION COMPLETE";
	subtitle = "GENERAL KILLED";
	description = "You were not able to retrieve the tank, but killing the General will make stabilizing the area easier.";
};

class TANKRETRIEVED
{
	title = "MISSION COMPLETE";
	subtitle = "TANK RETRIEVED";
	description = "The General is still alive, but the tank you retrieved will definitely change that soon.";
};

	class BASEREACHED
{
	title = "BASE REACHED";
	subtitle = "YOU MADE IT";
	description = "You were unable to complete your objectives, but you made it home alive, and that's what counts.";
};

	class loser
{
	title = "Mission over!";
	subtitle = "Everybody died!";
	description = "The russians were too strong.";
	picture = "KIA";
	pictureColor[] = {0.8,0.1,0.1,1};
};