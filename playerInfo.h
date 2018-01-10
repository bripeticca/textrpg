#ifndef __PLAYER_INFO_H__
#define __PLAYER_INFO_H__

#include <iostream>
#include "pronounBank.h"

using namespace std;

// should be singleton -- only ever want one instance of this in a game
class PlayerInfo 
{
    static PlayerInfo *thePlayerInstance;

    string name;
    int level;
    int health;
    string possessivePronoun; // his/hers/theirs
    string blankselfPronoun; // himself/herself/themselves
    string personalPronoun; // him/her/them
    string subjectivePronoun; // he/she/they
    // ... etc.


    // CONSTRUCTOR (with an unnecessarily long MIL)
    PlayerInfo() : name{""}, level{0}, health{10}, possessivePronoun{"theirs"}, blankselfPronoun{"themselves"}, personalPronoun{"them"}, subjectivePronoun{"they"} { }

    public:

    static PlayerInfo *getPlayerInstance() 
    {
	if(!thePlayerInstance) thePlayerInstance = new PlayerInfo();
	return thePlayerInstance;
    }

    void setPronouns(string possessive, string blankself, string personal, string subjective) 
    {
	possessivePronoun = possessive;
	blankselfPronoun = blankself;
	personalPronoun = personal;
	subjectivePronoun = subjective;
    }

    string getPossessive() 
    {
	return possessivePronoun;
    }

    string getBlankself() 
    {
	return blankselfPronoun;
    }

    string getpersonal() 
    {
	return personalPronoun;
    }

    string getSubjective() 
    {
	return subjectivePronoun;
    }

    string playerName() 
    {
	return name;
    }
};

#endif
