// ACE Settings
// Config file for defining mission-specific ACE settings
// Only uncomment the settings you want to force, leave everything else commented to avoid breaking things.

class ACE_Settings
{
	
	class ace_medical_amountOfReviveLives 
	{
		value = 10;
	};
	
	class ace_medical_increaseTrainingInLocations 
	{
		value = 1;
	};
	
	class ace_medical_preventInstaDeath {value=1};
	class ace_medical_enableRevive {value=1};
	class ace_medical_maxReviveTime {value=360};
	
	class ace_repair_repairDamageThreshold //How much can untrained soldier repair vehicles?
	{
		value = 0.6;
		// Value is the damage value of the part. 0 is completely undamaged, and 1 is destroyed
	};
	
	class ace_repair_repairDamageThreshold_engineer //How much can engineers repair vehicles?
	{
		value = 0.2;
		// Value is the damage value of the part. 0 is completely undamaged, and 1 is destroyed
	};
};