// HomeWork11.cpp: определяет точку входа для приложения.
//

#include "HomeWork11.h"
#include <gsl/gsl>

namespace function 
{
	void fillArray(int* pArray, int* size) 
	{
		std::cout << "Please enter of array elemet\n";
		for(int index = 0; index < *size; ++index) 
		{
			std::cin >> pArray[index];
		}
	}
	void showArray(int* pArray, int* size)
	{
		for(int index = 0; index < *size; ++index) 
		{
			std::cout << pArray[index] << ' ';
		}
		std::cout << '\n';
	}
	int* pop_back(gsl::not_null<int*>(pArray), int* size) 
	{
		int* copyArray = new int[--(*size)];
		for(int index = 0; index < *size; ++index) 
		{
			copyArray[index] = pArray.get()[index];
		}
		delete[] pArray;

		return copyArray;
	}
	int* pop_first(gsl::not_null<int*>(pArray), int* size) 
	{
		int* copyArray = new int[*size - 1];
		for(int index = 1; index < *size; ++index) 
		{
			copyArray[index - 1] = pArray.get()[index];
		}
		--(*size);
		delete[] pArray;
		return copyArray;
	}

	int* remove(gsl::not_null<int*>(pArray), int* size, int position) 
	{
		int* copyArray = new int[*size - 1];
		int indexCopy = 0;
		for(int index = 0; index < *size; ++index) 
		{			
			(index == position - 1) ? ++index : index;
			copyArray[indexCopy] = pArray.get()[index];
			++indexCopy;
		}
		delete[] pArray;
		--(*size);
		return copyArray;
	}

	void fillArrayRandom(int* pArray, int* size) 
	{
		int max = 10;
		for(int index = 0; index < *size; ++index) 
		{
			pArray[index] = std::rand() % max + 1;
		}
	}
	int* intersection(int* pArrayFir, int* sizeFer, int* pArraySec, int* sizeSec) 
	{
		int maxIntersection= std::max(*sizeFer, *sizeSec);
		int* intersectArray = new int[maxIntersection];
		int counterIntersection = 0;
		for(int Iindex = 0; Iindex < *sizeFer; ++Iindex) 
		{
			for(int Jindex = 0; Jindex < *sizeSec; ++Jindex) 
			{				
				if (pArrayFir[Iindex] == pArraySec[Jindex])
				{		
					int test = 0;

					for(int testIndex = 0; testIndex < maxIntersection; ++testIndex)
					{
						if (intersectArray[testIndex] == pArrayFir[Iindex])
						{
							++test;
						}								
					}
					if (0 == test)
					{
						intersectArray[counterIntersection] = pArrayFir[Iindex];
						++counterIntersection;
					}
				}
			}
		}
		delete[] pArrayFir;
		delete[] pArraySec;
		if(0 == counterIntersection) 
		{
			return nullptr;
		}
		
		*sizeFer = counterIntersection;
		return intersectArray;
	}

	int* getElementsNotInAnyArray(int* pArray, int* pArrayFir, int* pArraySec, int* size)
	{
		int* resulrArray = new int[*size];
		int newSize = 0;

		for (int Iindex = 0; Iindex < *size; ++Iindex)
		{
			int test = 0;
			for (int Jindex = 0; Jindex < *size; ++Jindex)
			{	
				if (pArray[Iindex] == pArrayFir[Jindex] || pArray[Iindex] == pArraySec[Jindex])
				{
					++test;
				}
			}
			if (0 == test)
			{
				resulrArray[newSize] = pArray[Iindex];
				++newSize;
			}
		}

		*size = newSize;
		delete[] pArray;
		delete[] pArrayFir;
		delete[] pArraySec;
		return resulrArray;
	}
}

int main()
{

	// Функция удаление с начала/с конца

	int* size = new int;
	std::cout << "Please enter a size array\n";
	std::cin >> *size;

	int* arrayPtr = new int[*size];

	function::fillArray(arrayPtr, size);
	function::showArray(arrayPtr, size);
	std::cout << "Function - delete last object\n";

	arrayPtr = function::pop_back(gsl::make_not_null(arrayPtr), size);
	function::showArray(arrayPtr, size);

	std::cout << "Function - delete first object\n";

	arrayPtr = function::pop_first(gsl::make_not_null(arrayPtr), size);
	function::showArray(arrayPtr, size);

	delete[] arrayPtr;


	// Функция удаления по индкесу

	std::cout << "Please enter a size array\n";
	std::cin >> *size;
	arrayPtr = new int[*size];
	function::fillArray(arrayPtr, size);
	function::showArray(arrayPtr, size);

	int removePosition;
	std::cout << "Please enter position which you want to delete\n";
	std::cin >> removePosition;

	arrayPtr = function::remove(gsl::make_not_null(arrayPtr), size, removePosition);
	function::showArray(arrayPtr, size);

	delete[] arrayPtr;


	// Функция нахождения пересечения массивов

	std::cout << "Please enter a size of first array\n";
	std::cin >> *size;
	arrayPtr = new int[*size];

	int* sizeSec = new int;
	std::cout << "Please enter a size of second array\n";
	std::cin >> *sizeSec;
	int* arraySecPtr = new int[*sizeSec];

	srand(time(0));

	std::cout << "First array\n";
	function::fillArrayRandom(arrayPtr, size);
	function::showArray(arrayPtr, size);

	std::cout << "Second array\n";
	function::fillArrayRandom(arraySecPtr, sizeSec);
	function::showArray(arraySecPtr, sizeSec);

	std::cout << "Intersection array\n";
	arrayPtr = function::intersection(arrayPtr, size, arraySecPtr, sizeSec);
	function::showArray(arrayPtr, size);

	delete[] arrayPtr;
	delete sizeSec;

	// Функция формирования массива из всех элементов, не принадлежащие ни одному из массивов

	std::cout << "Please enter a size array\n";
	std::cin >> *size;
	arrayPtr = new int[*size];
	function::fillArray(arrayPtr, size);

	int* arrayFirPtr = new int[*size];

	arraySecPtr = new int[*size];

	std::cout << "First array\n";
	function::fillArrayRandom(arrayFirPtr, size);
	function::showArray(arrayFirPtr, size);

	std::cout << "Second array\n";
	function::fillArrayRandom(arraySecPtr, size);
	function::showArray(arraySecPtr, size);

	arrayPtr = function::getElementsNotInAnyArray(arrayPtr, arrayFirPtr, arraySecPtr, size);

	std::cout << "Numbers thet did not fil on any array\n";
	function::showArray(arrayPtr, size);

	delete[] arrayPtr;
	delete size;

	return 0;
}
