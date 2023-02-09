

/*
Add the lines below to your init.sqf.
Adjust the default values for view distances as you like.
Be sure to check for battleye kicks / logs before deploying on your public server. 
*/

if(hasInterface) then{
	setViewDistance 3000;
	setObjectViewDistance [2400, 100];	
	execVM "addons\viewDist\initViewDistance.sqf";	
};