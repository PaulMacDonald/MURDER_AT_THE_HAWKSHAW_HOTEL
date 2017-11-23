#include<iostream>
#include<string>
using namespace std;

#include"Suspect.h"

// CONSTRUCTOR
/*No parameter for guiltyFlag, just automatically set it to false
and then pick one later and set to TRUE with setGuiltyFlag().*/
Suspect::Suspect(string name)
{
	_name = name;
	_guiltyFlag = false;
}

// SETTERS
void Suspect::setGuiltyFlag(bool guiltyFlag)
{
	_guiltyFlag = guiltyFlag;
}

void Suspect::setGuiltyAnswer(string answer) // takes in a string, pushes it back into _guiltyAnswers
{
	_guiltyAnswers.push_back(answer);
}

void Suspect::setInnocentAnswer(string answer) // takes in a string, pushes it back into _innocentAnswers
{
	_innocentAnswers.push_back(answer);
}

// GETTERS

string Suspect::getName()
{
	return _name;
}

string Suspect::getAnswer(int q) // return answer 1 or 2
{
	if (q >= 1 && q <= 2)
	{
		if (_guiltyFlag == true)
			return _guiltyAnswers[q - 1];

		if (_guiltyFlag == false)
			return _innocentAnswers[q - 1];
	}

	else
		return NULL;
}

bool Suspect::getGuiltyFlag()
{
	return _guiltyFlag;
}