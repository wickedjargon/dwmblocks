//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-clock",	    60,	1},
	{"",	"sb-network",	60,	7},
	{"",	"sb-brightness",	60,	6},
	{"",	"sb-battery",	60,	2},
	{"",	"sb-headphones",	60,	3},
	{"",	"sb-musicozy",	60,	5},
	{"",	"sb-miniroll",	60,	8},
	{"",	"sb-volume",	60,	4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "   ";
