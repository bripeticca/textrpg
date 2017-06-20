#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <cstdlib>

using namespace std;
// NOTE TO SELF: need to keep track of chapter/checkpoint save for saving file.

#include "chapterone.h"

void displayFileContents(string textFile) {
    string bashScript = "./printFileContents.bash ";
    bashScript += textFile;
    system(bashScript.c_str());
}

int main() {
    ChapterOne ch1("Chapter One");
    displayFileContents("welcome.txt");

    char ans;

    do {
	cout << "Please press ENTER to start." << endl;
    }
    while(cin.get() != '\n');

    cout << "Get ready for your adventure." << endl;

//    sleep(50);

    ch1.intro("Chapter One");
}
