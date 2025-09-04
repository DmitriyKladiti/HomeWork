// HomeWork17.cpp: определяет точку входа для приложения.
//

#include "HomeWork17.h"



int main()
{
	Figure* pFigure = new Rectungle(4.0, 3.0);
	std::cout << pFigure->pre() << '\n';
	std::cout << pFigure->plo() << '\n';
	std::cout << pFigure->compare() << '\n';

	delete pFigure;
	
	Figure* pFigure1 = new Circle(4.0);
	std::cout << pFigure1->pre() << '\n';
	std::cout << pFigure1->plo() << '\n';
	std::cout << pFigure1->compare() << '\n';

	delete pFigure1;

	Mashine* pMashine = new Car(256.9);
	pMashine->go();
	pMashine->showSpeed();
	pMashine->input();
	pMashine->showSpeed();

	delete pMashine;

	return 0;
}

double Rectungle::pre()
{
	return 2 * m_lon + 2 * m_width;
}
double Rectungle::plo()
{
	return m_lon * m_width;
}
double Rectungle::compare()
{
	return (pre() / plo());
}

double Circle::pre()
{
	return 2 * PI * m_rad;
}
double Circle::plo()
{
	return PI * m_rad * m_rad;
}
double Circle::compare()
{
	return (pre() / plo());
}

void Car::go()
{
	std::cout << "Car moves on the groung" << std::endl;
}

void Car::input()
{
	std::cout << "Pleas enter new car speed" << std::endl;
	std::cin >> speed;
}

void Car::showSpeed()
{
	std::cout << "Car speed: ";
	std::cout << speed << std::endl;
}

void Ship::go()
{
	std::cout << "Ship moves on the water" << std::endl;
}

void Ship::input()
{
	std::cout << "Pleas enter new ship speed" << std::endl;
	std::cin >> speed;
}

void Ship::showSpeed()
{
	std::cout << "Ship speed: ";
	std::cout << speed << std::endl;
}

void Plane::go()
{
	std::cout << "Plain moves on the air" << std::endl;
}

void Plane::input()
{
	std::cout << "Pleas enter new plain speed" << std::endl;
	std::cin >> speed;
}

void Plane::showSpeed()
{
	std::cout << "Plain speed: ";
	std::cout << speed << std::endl;
}
