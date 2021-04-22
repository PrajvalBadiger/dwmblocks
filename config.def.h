//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "dwm_bt",						360,	4},
	{"", "dwm_nw",						2,		10},
	//{"", "dwm_wttr",					360,	10},
	{"", "dwm_brightness",				360,	30},
	{"", "dwm_vol",					    360,	20},
	{"", "dwm_batt",					5,		3},
	{"", "dwm_date",					60,		0},
};


//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
