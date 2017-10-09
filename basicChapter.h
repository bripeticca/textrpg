#ifndef __BASICCHAPTER__
#define __BASICCHAPTER__
#include <iostream>
using namespace std;

class Chapter 
{
    public: 
	virtual ~Chapter()=0;

	Chapter(string chapterName) : ch(chapterName) { }

	void intro(string chapter)
	{
	    cout << "====================== " << chapter << " ======================" << endl;
	}
    protected:
	string ch;

	void setChapter(string chapter) 
	{
	    ch = chapter;
	}

};
#endif
