// HomeWork5.cpp: определяет точку входа для приложения.
//

#include "HomeWork5.h"

//using namespace std;

int main()
{
	constexpr int sizeArr = 10;


	//Задание 4.1

	std::cout << "Task 4.1 Please enter a number\n";
	int number;
	std::cin >> number;
	int repeat = 0;	
	int separation = 1;
	int arr[sizeArr];

	int copyNumb = number;
	
	while (0 != copyNumb) 
	{		
		arr[repeat] = number / separation % 10;
		separation *= 10;
		++repeat;
		copyNumb /= 10;
	}

	int indexLast = repeat;
	int palindromTest = 0;
	for (int index = 0; index < indexLast; ++index) 
	{		
		if (arr[index] != arr[indexLast - 1])
		{
			++palindromTest;
		}
		else (--indexLast);		
	}

	(0 == palindromTest) ? (std::cout << "Number is palindrome" << std::endl) :
			((std::cout << "Number is not palindrome" << std::endl));


	//Задание 4.2

	std::cout << "Task 4.2 Please enter a size of array\n";
	std::cin >> number;

	repeat = 0;
	while (repeat != number) 
	{
		std::cin >> arr[repeat];
		++repeat;
	}

	int min = arr[0];
	int max = arr[0];

	for (int index = 0; index < number; ++index) 
	{
		min = std::min(min, arr[index]);
		max = std::max(max, arr[index]);
	}

	std::cout << "Max = " << max << "\nMin = " << min << std::endl;


	
	//Задание 4.3

	std::cout << "Task 4.3 Please enter a size of array\n";
	std::cin >> number;

	repeat = 0;
	while (repeat != number) 
	{
		std::cin >> arr[repeat];
		++repeat;
	}

	int minIndex = 0;
	int maxIndex = 0;

	for (int index = 0; index < number; ++index) 
	{        
		(min >= arr[index]) ? minIndex = index : minIndex;
		min = std::min(min, arr[index]);

		(max <= arr[index]) ? maxIndex = index : maxIndex;
		max = std::max(max, arr[index]);
	}

	std::cout << "Max = " << max << " its index - " << maxIndex 
		<< "\nMin = " << min << " its index - " << minIndex << std::endl;


	//Задание 4.4

	std::cout << "Task 4.4 What number do you want to replace the max?\n";
	int replaceMax;
	std::cin >> replaceMax;

	std::cout << "New array" << std::endl;
	repeat = 0;
	while (repeat != number) 
	{		
		(arr[repeat] == max) ? arr[repeat] = replaceMax : arr[repeat];
		std::cout << arr[repeat] << " ";
		++repeat;
	}

	
	//Задание 4.5

	std::cout << "\nTask 4.5 Replacement max & min\n";	

	min = arr[0];
	max = arr[0];
	repeat = 0;
	while (repeat != number) 
	{
		(min >= arr[repeat]) ? minIndex = repeat : minIndex;
		min = std::min(min, arr[repeat]);

		(max <= arr[repeat]) ? maxIndex = repeat : maxIndex;
		max = std::max(max, arr[repeat]);		
		
		++repeat;
	}

	std::cout << "New array" << std::endl;

	arr[minIndex] = max;
	arr[maxIndex] = min;
	repeat = 0;
	while (repeat != number) 
	{
		std::cout << arr[repeat] << " ";
		++repeat;
	}

	return 0;
}
