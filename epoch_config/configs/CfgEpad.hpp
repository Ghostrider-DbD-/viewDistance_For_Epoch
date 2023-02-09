
/*
    Add the following class definition to CfgEpad.hpp. 

			class viewdistance 
			{
				buttonText = "";
				Description = "View Dist";
				icon = "\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
				action = "call fn_adjustViewDistance;";  //  addons\viewDist\initViewDistance.sqf
				ToolTip = "Adjust View/Object Distance";
				ToggleVar = "";
				ToggleAble = "false";
			};	

*/


		class settings
		{
			ButtonText = "";
			Description = "Settings";
			icon = "x\addons\a3_epoch_code\Data\UI\epad\settings_ca.paa";
			color[] = {1,1,0,1};
			colortoggled[] = {0,1,0,1};
			action = "";
			Tooltip = "Settings";
			ToggleVar = "";
			ToggleAble = "false";
			class viewdistance 
			{
				buttonText = "";
				Description = "View Dist";
				icon = "\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
				action = "call fn_adjustViewDistance;";  //  addons\viewDist\initViewDistance.sqf
				ToolTip = "Adjust View/Object Distance";
				ToggleVar = "";
				ToggleAble = "false";
			};	

			// other class definitions for the epad follow ... 
		};