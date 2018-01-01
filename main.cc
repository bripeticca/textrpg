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

// For displaying Chapter texts
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

    std::this_thread::sleep_for(3s);

    pr.intro("Prologue");

    displayFileContents("prologuetexts/prologue.txt");

    while(cin.get() != '\n');

    displayFileContents("prologuetexts/prologue2.txt");

    while(name == "") {
	cout << "[ENTER YOUR NAME]" << endl;
	cout << "> ";
	if(!(cin >> name)) {
	    cin.clear();
	    cin.ignore();
	}
    }

    cout << endl << name << "..." << endl;

    while(cin.get() != '\n');

    cout << endl;

    cout << "...And the world was silent once more." << endl;

    cout << endl;

    cout << "[PRESS ENTER]" << endl;
    
    while(cin.get() != '\n'); 
    
    displayFileContents("prologuetexts/prologue3.txt");

    cout << "\"My name is " << name << "...\"" << endl; 

    cout << endl;


    // instead of this do a count of how many texts there are ? or make basic function in
    // different file that does the file displaying??? idk

    // find a way to compartmentalize this

    displayFileContents("prologuetexts/prologue4.txt");

    ch1.intro("Chapter One");
}
