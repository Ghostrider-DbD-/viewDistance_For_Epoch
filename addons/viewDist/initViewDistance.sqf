

grg_viewDist = viewDistance;
grg_objDist = getObjectViewDistance select 0;

fn_initializeDialog = {
	_display = findDisplay 112456;
	(_display displayCtrl 1900) sliderSetRange [1000,6000];
	(_display displayCtrl 1900) sliderSetPosition grg_viewDist;
	(_display displayCtrl 1901) sliderSetRange [1000,6000];
	(_display displayCtrl 1901) sliderSetPosition (grg_objDist);
	(_display displayCtrl 1006) ctrlSetText format["%1",viewDistance];
	(_display displayCtrl 1007) ctrlSetText format["%1",getObjectViewDistance select 0];
	//systemChat format["Dialog initialized at %1",diag_tickTime];
};

fn_viewDistanceSliderEH = {
	params ["_control", "_newValue"];
	//systemChat format["viewDist changed to %1",_newValue];
	grg_viewDist = _newValue;
	_display = findDisplay 112456;
	(_display displayCtrl 1006) ctrlSetText format["%1",_newValue];
};

fn_ObjectDistanceSliderEH = {
	params ["_control", "_newValue"];
	//systemChat format["Obj Distance changed to %1",_newValue];
	grg_objDist = _newValue;
	_display = findDisplay 112456;	
	(_display displayCtrl 1007) ctrlSetText format["%1",_newValue];
};

fn_acceptChanges = {
	//systemChat format["View Dist set to %1",grg_viewDist];
	setViewDistance grg_viewDist;
	//systemChat format["objDist set to %1",grg_objDist];
	setObjectViewDistance grg_objDist;
	closeDialog 0;
};

fn_adjustViewDistance = {
	createDialog "AdjustViewDistaceDialog";
};

diag_log format["<INFO> InitViewDistance executed tat %1",diag_tickTime];