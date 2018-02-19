#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <cstdlib>
#include <cstring>

using namespace std;
// NOTE TO SELF: need to keep track of chapter/checkpoint save for saving file.

#include "commands.h"
#include "playerInfo.h"
#include "prologue.h"
#include "chapterone.h"

// For displaying Chapter texts
void displayFileContents(string textFile) {
    string bashScript = "./printFileContents.bash ";
    bashScript += textFile;
    system(bashScript.c_str());
}

bool isValidCommand(string response) 
{
    string upperResponse = response;
    int len = response.length();
    for(int i = 0; i < len; ++i) 
    {
	upperResponse[i] = toupper(response[i]);
    }
    auto it = CommandDictionary.find(upperResponse);
    if(it != CommandDictionary.end())
	return true;
    else
	return false;
}

int main() {
    // do a constant check for any commands
    // IF NOT SAVED 
    // Player initialization
    PlayerInfo *player = PlayerInfo::getPlayerInstance();

    
    // Chapters Initialization
    Prologue pr;
    ChapterOne ch1;
    displayFileContents("welcome.txt");

    cout << "PRESS [ENTER] TO BEGIN" << endl;

    while(cin.get() != '\n');

    // do a check for any saved files

    cout << "TYPE [START] TO [START NEW GAME]" << endl << "TYPE [LOAD] TO LOAD GAME" << endl << "TYPE [QUIT] TO QUIT" << "TYPE [HELP] FOR MORE COMMANDS" << endl;

    string response;

    // NOTE TO SELF: MUST BLACKLIST CERTAIN COMMANDS WHEN IN-GAME????

    cout << ">";

    while(cin >> response) 
    {
	if(isValidCommand(response)) 
	{
	    cout << "cool" << endl;
	    break;
	}
	else 
	{
	    cout << "please enter a valid command" << endl;
	    cout << ">";
	    // do nothing???
	}
    }


    char ans; // what is this used for
    string name;

    while(cin.get() != '\n');

    cout << "Get ready for your adventure.\n" << endl;

    std::this_thread::sleep_for(3s);

    pr.intro();

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

    // SAVE PLAYER NAME


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
    // different file that does the file displaying??? idk... do this later or something1

    // find a way to compartmentalize this

    displayFileContents("prologuetexts/prologue4.txt");

    cout << "[HER/HIM/THEY]" << endl;

    while(cin.get() != '\n');

    ch1.intro();
}
