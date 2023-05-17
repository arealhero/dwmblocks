//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/    /*Update Interval*/  /*Update Signal*/
  { "", "sb-xkblayout",    0,    10 },
  { "", "sb-volume",       0,    11 },
  { "", "sb-battery",      5,    3  },
  { "", "sb-ram",          30,   0  },
  { "", "sb-date",         5,    0  },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
