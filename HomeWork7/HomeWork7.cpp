// HomeWork7.cpp: определяет точку входа для приложения.

#include "HomeWork7.h"

//using namespace std;

namespace function 
{
	double circleSR(double radius)
	{
		double pi = acos(-1);
		double result = pi * pow(radius, 2);
		return result;
	}
	void rootsEquation(int one, int two, int three)
	{		
		if (0 != one)
		{
			double D = pow(two, 2) - 4 * one * three;
			if (0 < D)
			{
				std::cout << "Корень 1 = " << (-1 * two + sqrt(D)) / (2 * one) << std::endl;
				std::cout << "Корень 2 = " << (-1 * two - sqrt(D)) / (2 * one) << std::endl;
			}
			if (0 == D)
			{
				std::cout << "Корень 1 = " << (-1 * two) / (2 * one);
			}
			if (0 > D)
			{
				std::cout << "Кореней нет";
			}
		}
		else 
		{
			if (0 != two) 
			{
				std::cout << "Корень = " << -1 * (three / two) << std::endl;
			}
			else (0 == three) ? std::cout << "Бесконечность корней" << std::endl :
				std::cout << "Корней нет :)" << std::endl;
		}
	}
}

int main()
{
	std::locale::global(std::locale("ru_RU.UTF-8"));


	//Задание 6.4

	std::cout << "Task 6.4\nPlease enter a radius of the circle" << std::endl;

	double radius;
	std::cin >> radius;
	std::cout << function::circleSR(radius);


	//Задание 6.5

	std::cout << "\nTask\nPlease enter roots  of the equation" << std::endl;

	int i, o, p;
	std::cin >> i;
	std::cin >> o;
	std::cin >> p;
	
	function::rootsEquation(i, o, p);
	return 0;
}
