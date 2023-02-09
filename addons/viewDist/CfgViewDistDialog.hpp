


import RscText;
import RscButton;
import RscButtonMenuCancel;
import RscXSliderH;
class AdjustViewDistaceDialog 
{
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by Ghostrider-GRG, v1.063, #Rilizo)
	////////////////////////////////////////////////////////
	idd = 112456;  // 
    onLoad = "uiNamespace setVariable ['AdjustViewDistaceDialog', _this select 0]; []spawn fn_initializeDialog;";
    movingenable=false;	
	class Controls 
	{
		class Background: RscText
		{
			idc = 1000;
			x = 0.312828 * safezoneW + safezoneX;
			y = 0.42586 * safezoneH + safezoneY;
			w = 0.314531 * safezoneW;
			h = 0.242 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class Accept: RscButton
		{
			idc = 1600;
			text = "Accept"; //--- ToDo: Localize;
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			colorActive[] = {0.5,0.5,0,1};
			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};			
			tooltip = "Accept These Changes to View and Object Distances"; //--- ToDo: Localize;
			action = "call fn_acceptChanges;";
		};
		class ChancelChanges: RscButtonMenuCancel
		{
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
			colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
		};
		class Label_view_distance: RscText
		{
			idc = 1001;
			text = "View Distance"; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
		};
		class Label_object_distance: RscText
		{
			idc = 1002;
			text = "Object Distance"; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
		};
		#define CT_XSLIDER 43
		class ViewDistanceSlider: RscXSliderH
		{
			idc = 1900;
			deletable = 0;
			fade = 0;
			//type = CT_XSLIDER ;
			color[] = {1,1,1,0.6};
			colorActive[] = {1,1,1,1};
			colorDisable[] = {1,1,1,0.4};
			//style = SL_HORZ + SL_TEXTURES;
			shadow = 0;		
			text = "View Distance";
			font = "RobotoCondensed";
			SizeEx = GUI_TEXT_SIZE_MEDIUM;			
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			SlliderRange[] = {1000,6000};
			sliderStep = 250;			
			colorDisabled[] = {1,1,1,0.2};
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
			toolTip = "Adjust View Distance";
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};				
			//setSliderPosition "visionDistance";
			onSliderPosChanged = "call fn_viewDistanceSliderEH;";
		};

		class ObjectDistanceSlider: RscXSliderH
		{
			idc = 1901;
			deletable = 0;
			fade = 0;
			//type = CT_XSLIDER;
			color[] = {1,1,1,0.6};
			colorActive[] = {1,1,1,1};
			colorDisable[] = {1,1,1,0.4};
			//style = SL_HORZ + SL_TEXTURES;
			shadow = 0;		
			text = "Object Distance";
			font = "RobotoCondensed";
			SizeEx = GUI_TEXT_SIZE_MEDIUM;				
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.2};
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
			toolTip = "Adjust Object Distance";
			tooltipColorText[] = {1,1,1,1};
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};			
			colorBackground[] = {0,0,0,1};
			SlliderRange[] = {1000,6000};
			sliderStep = 250;
			//setSliderPosition "getObjectViewDistance select 0";			
			onSliderPosChanged = "call fn_ObjectDistanceSliderEH;";
		};
		class Label: RscText
		{
			idc = 1003;
			align = "center";
			text = "Set View / Object Distance Using the Sliders Below"; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.304219 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			
		};
		class viewDistValue: RscText
		{
			idc = 1006;
			text = "pending"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
		};
		class objDistValue: RscText
		{
			idc = 1007;
			text = "waiting"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
		};		
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};		
};
