#include <iostream>
#include <string>
#include "Character.h"
using namespace std;

Character::Character()
{
	
}

Character::Character(string N, string R, string A)
{
	name = N;
	race = R;
	alliance = A;
}

string Character::getName()
{
	return name;
}

void Character::setName(string N)
{
	name = N;
}

string Character::getRace()
{
	return race;
}

void Character::setRace(string R)
{
	race = R;
}

string Character::getAlliance()
{
	return alliance;
}

void Character::setAlliance(string A)
{
	alliance = A;
}

void Character::display(bool characteristics)
{
	if (characteristics == true) {
		cout << "This is a character named " << name <<
			". Their race is " << race <<
			", and their alliance is " << alliance << ".\n\n";
	}
	else { cout << "This is a boring character.\n\n";}
}

Villain::Villain()
{
	
}

Villain::Villain(string N, string R, string A, int M)
{
	name = N;
	race = R;
	alliance = A;
	minions = M;
}

int Villain::getMinions()
{
	return minions;
}

void Villain::setMinions(int M)
{
	minions = M;
}

void Villain::display(bool characteristics)
{
	if (characteristics == true) {
		if (minions > 0) {
			cout << "This is a Villain named " << name <<
				". They are a " << race << ", and have an alliance of " << alliance <<
				". They have " << minions <<
				" minions following their every command.\n\n";
		}
		else { cout << "Please check that you entered valid information for " << name << ".\n\n"; }
	}
	else { cout << "This is a boring Villain.\n\n"; }
}

Hero::Hero()
{
	
}

Hero::Hero(string N, string R, string A, int F)
{
	name = N;
	race = R;
	alliance = A;
	followers = F;
}

void Hero::getFolloweres(int F)
{
	followers = F;
}

int Hero::setFollowers()
{
	return followers;
}

void Hero::display(bool characteristics)
{
	if (characteristics == true) {
		if (followers > 0) {
			cout << "This is a Hero named " << name <<
				". They are a " << race <<
				", with an alliance of " << alliance <<
				". They have " << followers <<
				" followers following them on their journey.\n\n";
		}
		else { cout << "Please make sure you enterted valid information for " << name << ".\n\n"; }
	}
	else { cout << "This is a boring Hero.\n\n"; }
}



