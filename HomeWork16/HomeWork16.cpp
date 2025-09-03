// HomeWork16.cpp: определяет точку входа для приложения.
//

#include "HomeWork16.h"
#include <Windows.h>


int main()
{
	PersonFaktory Creat;
	srand(time(0));
	

	std::string stop = "";
	Person** pCreatePers = new Person*;

	int counterStud = 0;
	int counterProff = 0;
	int repeat = 0;
	while ("exit" != stop)
	{
		int bestRand = std::rand() % (2);
		Person** pResult = new Person * [++repeat];
		for (int index = 0; index < repeat; ++index)
		{
			pResult[index] = pCreatePers[index];
		}
		(0 == bestRand) ? pResult[repeat] = Creat.Creatr(TypePerson::Student) 
						: pResult[repeat] = Creat.Creatr(TypePerson::Professor);
		(0 == bestRand) ? ++counterStud 
						: ++counterProff;
		std::cout << "Please, enter a 'exit' to stop" << std::endl;
		std::cin >> stop;
	}

	std::cout << "Student: " << counterStud << std::endl;
	std::cout << "Proffesor: " << counterProff << std::endl;




	return 0;
}

void Person::info()
{
	std::cout << "Name: " << *name << "\nAge: " << *age << "\nEmail: " << *email << std::endl;
}
void Person::read()
{
	while(1 > *age)
	{
		std::cout << "Invalide age, please enter age" << std::endl;
		std::cin >> *age;
	}
	while ("" == *name)
	{
		std::cout << "Invalide name, please enter name" << std::endl;
		std::cin >> *name;
	}
}
void Person::validateEmail()
{
	if ("" == *email)
	{
		std::cout << "Name not entered, please enter" << std::endl;
		std::cin >> *email;
	}
}

void Student::info()
{
	std::cout << "Name: " << *name << "\nAge: " << *age << "\nEmail: " << *email << std::endl;
	std::cout << "Student Number: " << *studentNumber << "\nAverage Murk: " << *averageMurk << std::endl;
}
void Student::read()
{
	while(1 > *age)
	{
		std::cout << "Invalide age student, please enter age" << std::endl;
		std::cin >> *age;
	}
	while ("" == *name)
	{
		std::cout << "Invalide name student, please enter name" << std::endl;
		std::cin >> *name;
	}
	while (1 > *studentNumber)
	{
		std::cout << "Invalide student number, please enter number" << std::endl;
		std::cin >> *studentNumber;
	}
	while (1.0 > *averageMurk)
	{
		std::cout << "Invalide student murk, please enter murk" << std::endl;
		std::cin >> *averageMurk;
	}
}

void Professor::info()
{
	std::cout << "Name: " << *name << "\nAge: " << *age << "\nEmail: " << *email << std::endl;
	std::cout << "Salary: " << *salary << std::endl;
}
void Professor::read()
{
	while(1 > *age)
	{
		std::cout << "Invalide age professor, please enter age" << std::endl;
		std::cin >> *age;
	}
	while ("" == *name)
	{
		std::cout << "Invalide name professor, please enter name" << std::endl;
		std::cin >> *name;
	}
	while (1 > *salary)
	{
		std::cout << "Invalide salary professor, please enter name" << std::endl;
		std::cin >> *salary;
	}
}

Person* PersonFaktory::Creatr(TypePerson type)
{
	switch (type)
	{
		case TypePerson::Student:
		{
			Person* pStud = new Student;
			pStud->info();
			pStud->read();
			return pStud;
		}
		case TypePerson::Professor:
		{
			Person* pProff = new Professor;
			pProff->info();
			pProff->read();
			return pProff;
		}
	}
}
