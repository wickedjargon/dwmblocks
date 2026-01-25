//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-clock",	    60,	1},
	{"",	"sb-network",	60,	7},
	{"",	"sb-brightness",	60,	6},
	{"",	"sb-battery",	60,	2},
	{"",	"sb-bluetooth 3C:B0:ED:A7:6A:88",	60,	3},
	{"",	"sb-bluetooth 41:42:AB:DD:51:37",	60,	5},
	{"",	"sb-bluetooth 10:94:97:3C:C4:41",	60,	8},
	{"",	"sb-volume",	60,	4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "   ";
