#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
using namespace std;

// NOTE TO SELF: need to keep track of chapter/checkpoint save for saving file.

// conditional for defining a sleep function depending on OS
#ifdef _WIN32
#include <windows.h>

	void sleep(unsigned milliseconds) {
		Sleep(milliseconds);
	}

#else
#include <unistd.h>
	
	void sleep(unsigned milliseconds) {
		usleep(milliseconds * 1000);
	}
#endif

#include <"basicChapter.h">
#include <"chapterone.h">

int main() {
	ifstream welcomePage;
	welcomePage.open("welcome.txt");
	cout << welcomePage << endl;
	welcomePage.close();

	char ans;

	do {
		cout << "Please press SPACEBAR to start." << endl;
	}
	while(getchar() != ' ');

	cout << "Get ready for your adventure." << endl;
	
	sleep(5000);

	ChapterOne.intro();
}
