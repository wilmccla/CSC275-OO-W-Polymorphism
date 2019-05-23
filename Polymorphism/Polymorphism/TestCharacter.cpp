#include <iostream>
#include <string>
#include "Character.h"
using namespace std;

void main()
{
	Character Bob;
	Bob.display(false);

	Character Joe = Character("Joe", "Human", "Chaotic Neutral");
	Joe.display(true);

	Villain Cerci = Villain("Cerci", "Drow", "Neutral Evil", 200);
	Cerci.display(true);

	Villain Hades = Villain("Hades", "Demon", "Chaotic Evil", -100);
	Hades.display(true);

	Villain Ursula;
	Ursula.display(false);

	Hero Jon = Hero("Jon", "Human", "Neutral Good", 300);
	Jon.display(true);

	Hero IronMan = Hero("Iron Man", "Human", "Neutral Good", -1);
	IronMan.display(true);

	Hero HarryPotter;
	HarryPotter.display(false);

	system("pause");
}