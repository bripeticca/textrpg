#ifndef __DICTIONARY_H__
#define __DICTIONARY_H__
#include <map>

// This serves as a respository for any definitions.
// Currently, the words are not in alphabetical order, but that doesn't matter much.
// Note to self: .touppercase()

std::map<string, string> Dictionary = 
	{
	    { "DWARF DRAGON", "a small, domesticated breed of dragons that have been achieved through centuries of breeding. They are well known for their docile nature, but are prone to many illnesses due to their unnatural body sizes and traits."},
	    { "GOBSPLUTTER", "a foul-smelling mucus that comes from a dwarf dragon species."}
	};
