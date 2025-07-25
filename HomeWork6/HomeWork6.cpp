// HomeWork6.cpp: определяет точку входа для приложения.
//

#include "HomeWork6.h"
#include <cmath>

//using namespace std;

int main()
{

	const int sizeArr = 100;

	//Задание 5.1

	std::cout << "Task 5.1 \nPlease enter a number of animals\n";
	int numberSize;
	std::cin >> numberSize;
	float array[sizeArr];

	std::cout << "Please enter a weight of animal\n";

	for (int index = 0; index < numberSize; ++index) 
	{
		std::cin >> array[index];
	}

	for (int Iindex = 0; Iindex < numberSize - 1; ++Iindex) 
	{
		for (int Jindex = 0; Jindex < numberSize - Iindex - 1; ++Jindex) 
		{
			if (array[Jindex] > array[Jindex + 1]) std::swap(array[Jindex], array[Jindex + 1]);	
		}
	}

	for (int index = 0; index < numberSize; ++index)
	{
		std::cout << array[index] << " ";
	}


	//Задание 5.2

	std::cout << "\n\nTask 5.2 \nSort weight of animals by decreasing\n";

	for (int Iindex = 0; Iindex < numberSize - 1; ++Iindex) 
	{
		for (int Jindex = 0; Jindex < numberSize - Iindex - 1; ++Jindex) 
		{
			if (array[Jindex] < array[Jindex + 1]) std::swap(array[Jindex], array[Jindex + 1]);
		}
	}

	for (int index = 0; index < numberSize; ++index) 
	{
		std::cout << array[index] << " ";
	}


	//Задание 5.3

	std::cout << "\n\nTask 5.3 \nPlease enter a additionally weight of animal\n";
	int numberAdd;
	std::cin >> numberAdd;

	std::cout << "Please enter a weight of animal\n";

	for (int index = numberSize; index < numberSize + numberAdd; ++index)
	{
		std::cin >> array[index];
	}

	for (int Iindex = 0; Iindex < numberSize + numberAdd - 1; ++Iindex) 
	{
		for (int Jindex = 0; Jindex < numberSize + numberAdd - Iindex - 1; ++Jindex) 
		{
			if (array[Jindex] > array[Jindex + 1]) std::swap(array[Jindex], array[Jindex + 1]);
		}
	}

	for (int index = 0; index < numberSize + numberAdd; ++index) 
	{
		std::cout << array[index] << " ";
	}

	//Задание 5.4

	std::cout << "\n\nTask 5.4\nPlease enter a size of array\n";		
	std::cin >> numberSize;
	int arr[sizeArr][sizeArr];
	std::cout << "\n!!! ENTER NUMBER BY SPACES !!! " << 
		"AND PRESS ENTER WHEN THE STRING EQUALS " << numberSize << " !!!\n";

	const int zero = 0;

	int resultSumm = 0;
	
	for (int Iindex = 0; Iindex < numberSize; ++Iindex) 
	{
		for (int Jindex = 0; Jindex < numberSize; ++Jindex) 
		{
			if (Jindex > Iindex)
			{ 
				std::cin >> arr[Iindex][Jindex];
				resultSumm += arr[Iindex][Jindex];
			}
			else
			{
				arr[Iindex][Jindex] = zero;
				std::cout << arr[Iindex][Jindex] << " ";
			}
		}
		//std::cout << "\n";
	}
	std::cout << "\nSum of elements above the diagonal: " << resultSumm;


	//Задание 5.5

	srand(time(0));

	std::cout << "\nTask 5.5\nPlease enter a size of array\n";
	std::cin >> numberSize;
	std::cout << "\nPlease enter min & max a random\n";

	int minRandom;
	std::cin >> minRandom;

	int maxRandom;
	std::cin >> maxRandom;

	int resultMult = 1;

	for (int Iindex = 0; Iindex < numberSize; ++Iindex) 
	{
		for (int Jindex = 0; Jindex < numberSize; ++Jindex) 
		{
			if (Jindex < Iindex) 
			{
				arr[Iindex][Jindex] = minRandom + std::rand() % (maxRandom - minRandom + 1);
				std::cout << arr[Iindex][Jindex] << " ";
				resultMult *= arr[Iindex][Jindex];
			}
			else
			{
				arr[Iindex][Jindex] = zero;
				std::cout << arr[Iindex][Jindex] << " ";
			}
			
		}
		std::cout << "\n";
	}
	 std::cout << "Multiplication of elements below the diagonal: " << resultMult;

	//cout << "Hello CMake." << endl;
	return 0;
}
