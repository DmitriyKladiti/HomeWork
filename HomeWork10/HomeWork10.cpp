// HomeWork10.cpp: определяет точку входа для приложения.
//

#include "HomeWork10.h"

namespace functione
{
	void tastOfNegativeMoney(double *value) 
	{
		std::cin >> *value;
		if(0 > *value) 
		{
			while (0 > *value)
			{
				std::cout << "Summ of money cann't be negative. Please enter a positive value\n";
				std::cin >> *value;
			}
		}
		
	}
	double convertMoney(double *value) 
	{
		double exchangeRate = 3.14;
		return *value * exchangeRate;
	}

	void fillArray(int array[], int value) 
	{
		std::cout << "Please fill in the array\n";
		for (int index = 0; index < value; ++index) 
		{
			std::cin >> array[index];
		}
	}
	void testNumberMultiplesOfSix(int array[], int summ, int value) 
	{
		for (int index = 0; index < value; ++index) 
		{
			(0 == array[index] % 6) ? summ += array[index] : summ;
		}
		std::cout << "Reselt = " << summ;
	}

	int* reverse(int array[], int value) 
	{
		int *reverseArr = new int[value];
		int last = value - 1;
		for (int index = 0; index < value; ++index) 
		{
			reverseArr[index] = array[last];
			--last;
		}
		delete[] array;
		return reverseArr;
	}
	void showArr(int array[], int value) 
	{
		for (int index = 0; index < value; ++index) 
		{
			std::cout << array[index] << ' ';
		}
	}

	int* addNumberToArray(int array[], int value, int add) 
	{
		int* pAdd = new int[value + 1];
		for (int index = 0; index < value + 1; ++index) 
		{
			pAdd[index] = array[index];
			(index == value) ? pAdd[index] = add : add;
		}
		delete[] array;
		return pAdd;
	}
}

int main()
{
	//Задание 7.1

	std::cout << "Task 7.1\nPlease enter a summ of money\n";
	double *pSummOfMoney = new double;

	functione::tastOfNegativeMoney(pSummOfMoney);
	*pSummOfMoney = functione::convertMoney(pSummOfMoney);

	std::cout << "Result = " << *pSummOfMoney;
	

	//Задание 7.2

	std::cout << "\nTask 7.2\nPlease enter a size array\n";
	int size;
	std::cin >> size;
	int *pArr = new int[size];

	functione::fillArray(pArr, size);

	int *SummNumber = new int { 0 };
	functione::testNumberMultiplesOfSix(pArr, *SummNumber, size);


	//Задача 7.3

	std::cout << "\nTask 7.3\nPlease enter a size array\n";

	std::cin >> size;
	int *pArray = new int[size];

	functione::fillArray(pArray, size);
	pArray = functione::reverse(pArray, size);
	functione::showArr(pArray, size);

	delete[] pArray;


	//Задача 7.4


	std::cout << "\nTask 7.4\nPlease enter a size array\n";

	std::cin >> size;
	pArray = new int[size];

	functione::fillArray(pArray, size);
	int addNumber;
	std::cout << "Please enter a additional number\n";
	std::cin >> addNumber;

	pArray = functione::addNumberToArray(pArray, size, addNumber);
	functione::showArr(pArray, size + 1);

	delete[] pArray;

	return 0;
}
