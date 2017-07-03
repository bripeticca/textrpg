#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <cstdlib>

using namespace std;
// NOTE TO SELF: need to keep track of chapter/checkpoint save for saving file.

#include "prologue.h"
#include "chapterone.h"

void displayFileContents(string textFile) {
    string bashScript = "./printFileContents.bash ";
    bashScript += textFile;
    system(bashScript.c_str());
}

int main() {
    Prologue pr("Prologue");
    ChapterOne ch1("Chapter One");
    displayFileContents("welcome.txt");

    char ans;
    string name;

    while(cin.get() != '\n');

    cout << "Get ready for your adventure.\n" << endl;

    //    sleep(50);

    pr.intro("Prologue");

    displayFileContents("prologuetexts/prologue.txt");

    while(cin.get() != '\n');

    displayFileContents("prologuetexts/prologue2.txt");

    while(name == "") {
	cout << "> ";
	if(!(cin >> name)) {
	    cin.clear();
	    cin.ignore();
	}
    }

    cout << endl << name << "..." << endl;

    while(cin.get() != '\n');

    ch1.intro("Chapter One");
}
