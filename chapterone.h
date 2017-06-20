#include <iostream>
#include "basicChapter.h"
using namespace std;

class ChapterOne : public Chapter
{
    public:
    ChapterOne(string chapter) : Chapter(chapter) { }
};
