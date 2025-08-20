// HomeWork13.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>

class Animal
{
private:
	int age;
	float ves;
	std::string name;

public:
	Animal(std::string name = " ", int age = 0, float ves = 0)
	{
		this->age = age;
		this->ves = ves;
		this->name = name;
	}
	void sum(const Animal& an);
	void show();

	Animal middle(const Animal& ve, const Animal& ve2); // Задачи 1

	Animal checkName(); // Задачи 2

	




};

// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
