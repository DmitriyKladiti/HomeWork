// HomeWork12.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>

// Задача 10.1 

class Hero1 
{
public:
	std::string name;
	int XP;
	int invent;
	int speed;
	int health;
};


// Задача 10.2

class Hero2
{
public:
	std::string name;
	int XP;
	int invent;
	int speed;
	int health;

	void wrideInformation();
	void showInformation();
	void speedBoost();
	void reduceInvent();
};

// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
