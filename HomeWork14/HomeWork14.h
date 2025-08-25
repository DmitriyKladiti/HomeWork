// HomeWork14.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>

class Point // Задание 13.1
{
public:
	float x, y;
	Point() : x(0), y(0) {};// = delete;
	Point(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

public:
	
	void showPoint();

};
class PointTri : public Point // Задание 13.2
{
	public:
	float z;
	PointTri() = delete;
	PointTri(float x, float y, float z) : Point (x, y) , z (z) {}

};
class Hero // Задание 13.4
{
public:
	std::string name;
	
	Hero() : xp(xp), sp(sp), dam(dam) {};
	Hero(int xp, int sp, int dam) : xp(xp), sp(sp), dam(dam) {};

	int xp;
	int sp;
	int dam;
};
class Golum : public Hero // Задание 13.6
{
public:
	Golum(int xp, int sp, int dam, int goblinPower) : Hero(xp, sp, dam), goblinPower(goblinPower) {};

	int goblinPower;
};
class Fairy : public Hero 
{
public:
	Fairy(int xp, int sp, int dam, int fairyPower) : Hero(xp, sp, dam), fairyPower(fairyPower) {};

	int fairyPower;
};
class StoneMan : public Hero 
{
public:
	StoneMan(int xp, int sp, int dam, int StoneManPower) : Hero(xp, sp, dam), StoneManPower(StoneManPower) {};

	int StoneManPower;
};
class StoneFireMan : public Hero 
{
public:
	StoneFireMan(int xp, int sp, int dam, int StoneFireManPower) : Hero(xp, sp, dam), StoneFireManPower(StoneFireManPower) {};

	int StoneFireManPower;
};
class Hors : public Hero 
{
public:
	Hors(int xp, int sp, int dam, int HorsSpeed) : Hero(xp, sp, dam), HorsSpeed(HorsSpeed) {};

	int HorsSpeed;
};

// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
