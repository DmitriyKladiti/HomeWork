// HomeWork9.cpp: определяет точку входа для приложения.
//

#include "HomeWork9.h"

//using namespace std;

const int arraySize = 100;

namespace funktion
{
	int countingNegativeElements(int (*pCountArr)[], int sizeNumber)
	{
		int counter = 0;
		for (int index = 0; index < sizeNumber; ++index) 
		{
			(0 > (*pCountArr)[index]) ? ++counter : counter;
		}
		return counter;
	}

	int searchMax(int (*pArr)[], int sizeNumber) 
	{
		int max = (*pArr)[0];
		for (int index = 0; index < sizeNumber; ++index) 
		{
			((*pArr)[index] < (*pArr)[index + 1]) ? max = ((*pArr)[index + 1]) : max;
		}
		return max;
	}
	int summBelowSecondary(int (*pArray)[4][4]) 
	{
		int summ = 0;
		for (int Iindex = 0; Iindex < 4; ++Iindex) 
		{
			for (int Jindex = 0; Jindex < 4; ++Jindex) 
			{
				if (4 - 1 < Iindex + Jindex )
				{
					summ += (*pArray)[Iindex][Jindex];
				}
			}
		}
		return summ;
	}
	double srCircle(double* radius) 
	{
		double p = 3.141592;
		double square = p * (*radius) * (*radius);
		return square;
	}
	void rootsEquation(int* one, int* two, int* three)
	{		
		if (0 != (*one))
		{
			double D = ((*two) * (*two)) - (4 * (*one) * (*three));
			if (0 < D)
			{
				std::cout << "Корень 1 = " << (-1 * (*two) + sqrt(D)) / (2 * (*one)) << std::endl;
				std::cout << "Корень 2 = " << (-1 * (*two) - sqrt(D)) / (2 * (*one)) << std::endl;
			}
			if (0 == D)
			{
				std::cout << "Корень 1 = " << (-1 * (*two)) / (2 * (*one));
			}
			if (0 > D)
			{
				std::cout << "Кореней нет";
			}
		}
		else 
		{
			if (0 != (*two)) 
			{
				std::cout << "Корень = " << -1 * ((*three) / (*two)) << std::endl;
			}
			else (0 == (*three)) ? std::cout << "Бесконечность корней" << std::endl :
				std::cout << "Корней нет :)" << std::endl;
		}
	}

}

int main()
{
	std::locale::global(std::locale("ru_RU.UTF-8"));

	//Задание 6.1

	std::cout << "Task 6.1\nPlease enter array size" << std::endl;
	int number;
	std::cin >> number;
	int arr[arraySize];

	std::cout << "Please enter array elements and negative\n";

	for (int index = 0; index < number; ++index) 
	{
		std::cin >> arr[index];
	}

	std::cout << funktion::countingNegativeElements(&arr, number);


	//Задние 6.2

	std::cout << "\nTask 6.2\nSearch Max\n";

	std::cout << funktion::searchMax(&arr, number);


	//Задание 6.3

	std::cout << "\nTask 6.3\nSumm of numbers under the secondary diagonal\n";

	int array[4][4] = { {2, -4, 5, 1}, {4, 0, -6, 7}, {7, 2, -1, 3}, {3, -5, 8, 3} };

	std::cout << funktion::summBelowSecondary(&array);
	

	//Задание 6.4

	double rad;
	std::cout << "\nTask 6.4\nPlease enter radius" << std::endl;
	std::cin >> rad;

	std::cout << funktion::srCircle(&rad);


	//Задние 6.5

	std::cout << "\nTask 6.5\nPlease enter a roots of equation" << std::endl;
	int a, b, c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	funktion::rootsEquation(&a, &b, &c);

	//cout << "Hello CMake." << endl;
	return 0;
}
