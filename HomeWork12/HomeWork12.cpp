// HomeWork12.cpp: определяет точку входа для приложения.
//

#include "HomeWork12.h"

//using namespace std;



int main()
{

	// Задача 10.1

	Hero1 pers;
	std::cout << "Please enter a name of Hero:";	
	std::cin >> pers.name;
	std::cout << "Please enter a XP of Hero:";	
	std::cin >> pers.XP;
	std::cout << "Please enter a inventory of Hero:";	
	std::cin >> pers.invent;
	std::cout << "Please enter a spped of Hero:";	
	std::cin >> pers.speed;
	std::cout << "Please enter a health of Hero:";	
	std::cin >> pers.health;

	std::cout << "Hero is create!\nHes information " << pers.name << ", " << pers.XP <<
		" xp, " << pers.invent << " kg, " << pers.speed << " sp, " << pers.health << " hp." << std::endl;


	// Задание 10.2

	Hero2 hero;

	hero.wrideInformation();
	hero.showInformation();


	// Задача 10.4

	hero.speedBoost();
	hero.speedBoost();
	hero.speedBoost();


	//// Задача 10.5

	hero.reduceInvent();
	hero.reduceInvent();
	hero.reduceInvent();
	
	return 0;
}

void Hero2::wrideInformation() 
{
	std::cout << "Please enter a name of Hero:";	
	std::cin >> name;
	std::cout << "Please enter a XP of Hero:";	
	std::cin >> XP;
	if (0 > XP) XP = 0;  // Задача 10.3
	std::cout << "Please enter a inventory of Hero:";	
	std::cin >> invent;
	std::cout << "Please enter a spped of Hero:";	
	std::cin >> speed;
	if (0 > speed) speed = 0;  // Задача 10.3
	std::cout << "Please enter a health of Hero:";	
	std::cin >> health;
	if (1 > health) health = 1;  // Задача 10.3
	if (10 < health) health = 10;  // Задача 10.3
}
void Hero2::showInformation()
{
	std::cout << "Hero is create!\nHes information " << name << ", " << XP <<
	" xp, " << invent << " kg, " << speed << " sp, " << health << " hp." << std::endl;
}
void Hero2::speedBoost()  // Задача 10.4
{
	std::cout << "\n======== SPEED INCREASE ========\n\n";
	++speed;
	std::cout << "Hes information " << name << ", " << XP <<
	" xp, " << invent << " kg, " << speed << " sp, " << health << " hp." << std::endl;
}
void Hero2::reduceInvent()  // Задача 10.5
{
	std::cout << "\n======== INVENTORY REDUCE ========\n\n";
	invent -= 50;	
	if (1 > invent) invent = 0;
	std::cout << "Hes information " << name << ", " << XP <<
	" xp, " << invent << " kg, " << speed << " sp, " << health << " hp." << std::endl;
	if (0 == invent) std::cout << "\n======== GAME OVER ========\n\n";
	
}

