#ifndef __PROLOGUE__
#define __PROLOGUE__
#include "basicChapter.h"

class Prologue : public Chapter {
    public:
	Prologue() 
	{ 
	    chapter = "Prologue";
	    section = "";
	}

	void intro() override 
	{
	    cout << "====================== " << chapter << section << " ======================" << endl;
	}
};
#endif
