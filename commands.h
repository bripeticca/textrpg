#ifndef __COMMANDS_H__
#define __COMMANDS_H__
#include <map>

enum Commands {
    START,
    HELP,
    MENU,
    SAVE,
    LOAD,
    NAME,
    QUIT
};

std::map<string, int> CommandDictionary =
	{ {"START", 0},
	  {"HELP", 1},
	  {"MENU", 2},
	  {"SAVE", 3},
	  {"LOAD", 4},
	  {"NAME", 5},
	  {"QUIT", 6}
	};

#endif
