private ["_messages","_timeout"];

_messages = [
	["DayZ Epoch", "Welcome "+(name player)],
	["World", worldName],
	["Teamspeak", "ts.ckwgaming.com"],
	["Website", "ckwgaming.com"],
	["Server Rules", "Duping, glitching, hacking and other forms of cheating are bannable offenses."],
	["Server Rules", "Report cheating to admin on Teamspeak, or make a thread on the forums."],
	["Server Rules", "No spamming side/global voice chat. No racist rants."],
	["Server Rules", "Do not kill those in safe zones or those that are just leaving them."],
	["Server Rules", "Everything else is fair game. Enjoy."]
];
 
_timeout = 5;
{
	private ["_title","_content","_titleText"];
	uiSleep 2;
	_title = _x select 0;
	_content = _x select 1;
	_titleText = format[("<t font='TahomaB' size='0.40' color='#a81e13' align='right' shadow='1' shadowColor='#000000'>%1</t><br /><t shadow='1'shadowColor='#000000' font='TahomaB' size='0.60' color='#FFFFFF' align='right'>%2</t>"), _title, _content];
	[
		_titleText,
		[safezoneX + safezoneW - 0.8,0.50],     //DEFAULT: 0.5,0.35
		[safezoneY + safezoneH - 0.8,0.7],      //DEFAULT: 0.8,0.7
		_timeout,
		0.5
	] spawn BIS_fnc_dynamicText;
	uiSleep (_timeout * 1.1);
} forEach _messages;