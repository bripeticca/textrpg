#ifndef __CHAPTERONE__
#define __CHAPTERONE__
#include <iostream>
using namespace std;

class Chapter;

class ChapterOne : public Chapter
{
    public:
	ChapterOne() 
	{
	    chapter = "1";
	    section = ".0";
	}	
};
#endif
