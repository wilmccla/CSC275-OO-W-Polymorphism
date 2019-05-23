#pragma once
#include <string>
using namespace std;

class Character
{
public:
	Character();
	Character(string N, string R, string A);

	string getName();
	void setName(string);
	string getRace();
	void setRace(string);
	string getAlliance();
	void setAlliance(string);
	void display(bool characteristics);
protected:
	string name;
	string race;
	string alliance;
private:
};


class Villain : public Character
{
public:
	Villain();
	Villain(string N, string R, string A, int M);

	int getMinions();
	void setMinions(int);
	void display(bool characteristics);
private:
	int minions;
};


class Hero : public Character
{
public:
	Hero();
	Hero(string N, string R, string A, int F);

	int setFollowers();
	void getFolloweres(int);
	void display(bool characteristics);
private:
	int followers;
};