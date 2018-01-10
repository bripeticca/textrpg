#ifndef __BASICCHAPTER__
#define __BASICCHAPTER__
#include <iostream>
using namespace std;

class Chapter 
{
    protected:
	string chapter;
	string section;

    public: 
	virtual ~Chapter()=0;

	Chapter() 
	{ 
	    chapter = "INVALID";
	    section = "";
	}

	// Printed at the beginning of a new chapter / section in chapter
	virtual void intro()
	{
	    cout << "====================== CHAPTER " << chapter << section << " ======================" << endl;
	}

	// When player types "whatchapter", this function is called to let the player know
	// what chapter they are on
	void whatChapter() 
	{
	    cout << "[YOU ARE CURRENTLY ON CHAPTER " << chapter << section << "]" << endl;
	}

	// When player reaches a new section in Chapter, section is updated.
	void updateSection(string newSection) 
	{
	    section = newSection;
	}
};
#endif
