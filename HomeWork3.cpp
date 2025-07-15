// HomeWork3.cpp: определяет точку входа для приложения.
//

#include "HomeWork3.h"

using namespace std;

int main()
{

	//Задание 2

	std::cout << "\nTaks2\nPlease enter a number with 8 digits" << std::endl;
	int number;
	std::cin >> number;

	int counterFerst = 10000000;
	int counterLast = 1;
	int palindromeTest = 0;
	int repit = 0;

	while (3 != repit) 
	{
		if (number / counterFerst % 10 == number / counterLast % 10)
	    {
			++palindromeTest;
	    }

		counterFerst /= 10;
		counterLast *= 10;
		++repit;		
	}

	std::cout << ((3 == palindromeTest) ? "Number is palindrome" : "Number is not palindrome") << std::endl;

	
	//Задача 3
	
	std::cout << "Taks3\nPlease enter any integer number" << std::endl;
	std::cin >> number;//0 000 000 000

	repit = 0;
	counterLast = 1;

	while (10 != repit)
	{
		if (0 < number / counterLast)
		{
			std::cout << number / counterLast % 10 << " ";
		}

		counterLast *= 10;
		++repit;
	}

    
	//Задача 4

	std::cout << "\nTaks4\nPlease enter any integer number" << std::endl;
	std::cin >> number;

	repit = 0;
	counterLast = 1;
	int counterDigit = 0;

	// ERROR: 10 - magic number
	// Решение: помести эту переменную в consexpr std::uint8_t MAX_INT_DIGIT_SIZE { 10 };
	while (10 != repit) 
	{
		if (0 < number / counterLast) 
		{
			++counterDigit;
		}

		counterLast *= 10;
		++repit;
	}

	std::cout << "In number a " << counterDigit << " digits" << std::endl;


	//Задача 5
	
	std::cout << "Taks5\nPlease enter any number" << std::endl;
	std::cin >> number;

	repit = 0;
	counterLast = 1;
	int oodDigit = 0;
	int oodTest;
	
	// ERROR: 10 - magic number
	while (10 != repit) 
	{
		oodTest = number / counterLast % 10;
		if (1 == oodTest % 2) 
		{
			++oodDigit;
		}

		counterLast *= 10;
		++repit;
	}
	
	std::cout << "In number " << oodDigit << " ood digital" << std::endl;
	

	//Задача 6

	std::cout << "Taks6\nPlease enter any number" << std::endl;
	std::cin >> number;

	repit = 0;
	counterLast = 1;
	int evenDigit = 1;
	int evenMult;
        
	// ERROR: 10 - magic number
	while (10 != repit) 
	{
		evenMult = number / counterLast % 10;
		if (0 == evenMult % 2) 
		{
			if (evenMult != 0) // ERROR: йода нотация
			{ // ERROR: code complexity - можно evenMult != 0 и 0 == evenMult % 2 объединить в одно условие
		       evenDigit *= evenMult; // ERROR: отсупы поехали
			}
		
		}

		counterLast *= 10;
		++repit;
	}

	(1 == evenDigit) ? evenDigit = 0 : evenDigit;

	std::cout << "In number " << evenDigit << " even digital" << std::endl;

	return 0;
}
