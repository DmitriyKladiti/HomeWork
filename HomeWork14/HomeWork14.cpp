// HomeWork14.cpp: определяет точку входа для приложения.
//

#include "HomeWork14.h"

namespace function
{
	// Задание 13.1
	void rasst(Point P1, Point P2)
	{
		std::cout << (P1.x + P2.x) << ' ' << (P1.y + P2.y) << '\n';
	}

	// Задание 13.2
	void rasstTri(PointTri p1, PointTri p2)
	{
		std::cout << (p1.x + p2.x) << ' ' << (p1.y + p2.y) << ' ' << (p1.z + p2.z) << '\n';
	}
}

int main()
{	

	// Задание 13.1

	Point k(1, 1), l(15, 73); 
	function::rasst(k, l);
	

	// Задание 13.2

	PointTri q(1, 1, 1), j(16, 37, 53);
	function::rasstTri(q, j);
	

	// Задание 13.3
	
	Point point1[6]{ Point(1, 1), Point(-8, 12), Point(14, 7), Point(-5, 30), Point(11, 74), Point(3, 8) };
	Point point2[3];

	for (int index = 0; 3 > index; ++index)
	{
		point2[index].x = point1[0 + index].x  + point1[5 - index].x;
		point2[index].y = point1[0 + index].y  + point1[5 - index].y;
		std::cout << point2[index].x << ' ' << point2[index].y  << '\n';
	}
	

	// Задание 13.4

	Hero Alesha(10, 2, 20);
	std::cout << "Please, enter name a hero\n";	
	std::cin >> Alesha.name;
	std::cout << Alesha.name << ", " << Alesha.xp << " xp, " << Alesha.sp << " sp, " << Alesha.dam << " dam\n";


	// Задание 13.5

	int size;
	std::cout << "How many heroes will appear:\n";
	std::cin >> size;
	Hero* arr = new Hero[size];

	for (int index = 0; size > index; ++index)
	{
		arr[index] = Alesha;
		std::cout << arr[index].name << ", " << arr[index].xp << " xp, " << arr[index].sp << " sp, " << arr[index].dam << " dam\n";
	}


	// Задание 13.6

	Golum Golum(10, 2, 20, 15);
	std::cout << "Please, enter name a golum\n";	
	std::cin >> Golum.name;
	std::cout << Golum.name << ", " << Golum.xp << " xp, " << Golum.sp << " sp, " << Golum.dam  << " dam, "<< Golum.goblinPower;
	
	return 0;
}

