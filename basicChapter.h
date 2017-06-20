#include <iostream>
using namespace std;

class Chapter 
{
	public: 
		~Chapter()=0;
	protected:
		string ch;

		void intro(string chapter)
		{
			cout << "====================== " << chapter << " ======================" << endl;
		}

		void setChapter(string chapter) 
		{
			ch = chapter;
		}

}
