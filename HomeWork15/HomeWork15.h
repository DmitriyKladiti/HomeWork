// HomeWork15.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>

class Hero 
{
public:
	std::string name;
	
	Hero(std::string name) : name(name), xp(10), sp(8), dam(3) {};

	virtual void getInfo();

protected:
	Hero(std::string name, int xp, int sp, int dam) : name(name), xp(xp), sp(sp), dam(dam) {}

protected:
	int xp;
	int sp;
	int dam;
};
class Golum : public Hero 
{
public:
	Golum(std::string name) : Hero(name, 7, 12, 2), goblinPower(10) {};

	void getInfo() override;

private:
	int goblinPower;
};
class Fairy : public Hero 
{
public:
	Fairy(std::string name) : Hero(name, 5, 14, 1), fairyPower(15) {};

	void getInfo() override;

private:
	int fairyPower;
};
class StoneMan : public Hero 
{
public:
	StoneMan(std::string name) : Hero(name, 15, 5, 5), stoneManPower(12) {};

	void getInfo() override;

private:
	int stoneManPower;
};
class StoneFireMan : public Hero 
{
public:
	StoneFireMan(std::string name) : Hero(name, 13, 5, 7), stoneFireManPower(12) {};

	void getInfo() override;

private:
	int stoneFireManPower;
};
class Hors : public Hero 
{
public:
	Hors(std::string name) : Hero(name, 11, 16, 4), horsSpeed(13) {};

	void getInfo() override;

private:
	int horsSpeed;
};

enum class HeroType : std::int16_t
{
	basicHero = 0,
	Golum = 1,
	Fairy = 2,
	StoneMan = 3,
	StoneFireMan = 4,
	Hors = 5
};
class HeroFactory
{
public:
	HeroFactory();

	Hero* Create(HeroType type);
};







// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
