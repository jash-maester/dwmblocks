//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//        {""   , "~/dwmblocks/scripts/weather2"       , 3600, 0},
        {""   , "~/dwmblocks/scripts/network_traffic", 2, 0},
        {"  "   , "~/dwmblocks/scripts/fan_speed", 2, 0},
        {" "   , "~/dwmblocks/scripts/disk", 2, 0},
        {" "   , "~/dwmblocks/scripts/memory", 2, 0},
        {""   , "~/dwmblocks/scripts/cpu", 2, 0},
        {"  : "   , "~/dwmblocks/scripts/temperature", 2, 0},
        {""   , "~/dwmblocks/scripts/volume", 2, 0},
        {""   , "~/dwmblocks/scripts/battery_info.sh", 2, 0},
        {""   , "~/dwmblocks/scripts/clock", 2, 0},
	//{""   , "~/.local/bin/dwmblocks/dwmblocks-vol", 2, 10},
	//{"  ", "~/.local/bin/dwmblocks/dwmblocks-ram", 2, 0},
	//{"﬙  ", "~/.local/bin/dwmblocks/dwmblocks-cpu", 2, 0},
	//{""   , "~/.local/bin/dwmblocks/dwmblocks-bat", 2, 0},
	//{"  ", "~/.local/bin/dwmblocks/dwmblocks-time", 5, 0},
	{"\n", "", 0, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
