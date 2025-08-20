// HomeWork13.cpp: определяет точку входа для приложения.
//

#include "HomeWork13.h"


int main()
{
	Animal Cat("Barsic", 12, 5.15), Lion("Alex", 8, 216.34), Hippo("Gloria", 9, 316.7);
	Cat.sum(Lion);
	Cat.show();

	Hippo.middle(Cat, Lion).show(); // Задачи 1

	Animal Cat1("Barsic", 12, 1.1), Lion1("Alex", 8, 2.2), Hippo1(" ", 9, 3.3); // Задачи 2
	Hippo1.middle(Cat1, Lion1).checkName().show();
	
	return 0;
}

void Animal::sum(const Animal &an)
{
	this->age += an.age;
}
void Animal::show()
{
	std::cout << name << " " << age << " " << ves << '\n';
}

Animal Animal::middle(const Animal& ve, const Animal& ve2) // Задачи 1
{
	this->ves += ve.ves + ve2.ves;
	this->ves /= 3;
	if (20 > this->ves) // Задачи 2
	{
		this->ves += 5;
	}
	return *this;
}

Animal Animal::checkName() // Задачи 2
{
	if (" " == this->name)
	{
		std::cout << "Name animal not entered, please enter\n";
		std::cin >> this->name;
	}
	return *this;
}