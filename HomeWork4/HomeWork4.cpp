// HomeWork4.cpp: определяет точку входа для приложения.
//

#include "HomeWork4.h"
#include <cmath>
#include <iomanip>

int main()
{
	//Задача 1

	std::cout << "Task 1" << std::endl;

	for (int index = 0; index < 97; index += 8) 
	{
		std::cout << index << " ";
	}


	//Задача 2

	std::cout << "\nTask 2" << std::endl;

	for (int index = -90; index < 93; index += 14) 
	{
		std::cout << index << " ";
	}


	//Задача 3

	std::cout << "\nTask 3" << std::endl;

	for (int index = 100; index > 0; --index)
	{
		std::cout << index << " ";
	}


	//Задача 4

	std::cout << "\nTask 4" << std::endl;

	for (int index = 1; index < 11; ++index) 
	{
		std::cout << index << " * 11 = " << index * 11 << std::endl;
	}

	 
	//Задача 5

	std::cout << "Task 5" << std::endl;

	for (int index = 1; pow(index,3) < 1001; ++index) 
	{
		std::cout << pow(index, 3) << " ";
	}


	//Задача 6

	std::cout << "\nTask 6 Please enter a number" << std::endl;
	int number;
	std::cin >> number;
	int result = 1;

	for (int index = 1; index < number + 1; ++index) 
	{
		result *= index;
	}

	std::cout << number << "! = " << result;


	//Задача 7

	std::cout << "\nTask 7 Please enter a number" << std::endl;

	for (int index = 0; index < 2; ++index)
	{
		index = 0;
		std::cout << "\nPlease enter 0 to finish" << std::endl;
		std::cin >> number;
		result = 1;

		if (0 != number)
		{
			for (int index2 = 1; index2 < number + 1; ++index2)
			{
				result *= index2;
			}
			std::cout << number << "! = " << result;
		}
		else index = 2;				
	}


	//Задача 8

	std::cout << "Task 8 Please enter a number" << std::endl;
	std::cin >> number;
	int counterDigit = 0;
	int counterTest = 1;
	int maxIntDigits = 10;
	int repeat = 0;

	while (maxIntDigits != repeat) 
	{
		if (0 < number / counterTest) 
		{			
			++counterDigit;
			counterTest *= 10;
		}
		++repeat;
	}

	int testFerstDigit;
	int testLastDigit; 
	int palindromTest = 0;
	
	for (int index = 0; index < counterDigit; ++index) 
	{
		testFerstDigit = pow(10, counterDigit - index - 1); 
		testLastDigit = pow(10, index);

		if (number / testFerstDigit % 10 == number / testLastDigit % 10) 
		{
			++palindromTest;
		}
	}
	
	(counterDigit == palindromTest) ? (std::cout << "Number is a palindrom" << std::endl) : 
		(std::cout << "Number is not palindrom");


	//Доп дз

	std::cout << "Task DOP" << std::endl;

	for (int Iindex = 0; Iindex < 10; ++Iindex) 
	{
		if (0 == Iindex % 2) 
		{
			for (int Jindex = 0; Jindex < 10; ++Jindex)
			{
				std::cout << std::setw(3) << Iindex * 10 + Jindex;
			}
		}
		else
		{
			for (int Jindex = 9; Jindex > -1; --Jindex)
			{
				std::cout << std::setw(3) << Iindex * 10 + Jindex;
			}
		}
		std::cout << "" << std::endl;
	}


	return 0;
}
