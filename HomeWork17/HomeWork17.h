// HomeWork17.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>

class Figure
{
public:
	virtual double pre() = 0;
	virtual double plo() = 0;
	virtual double compare() = 0;

	//virtual ~Figure();
};
class Rectungle : public Figure
{
public:
	Rectungle(double lon = 0.0, double width = 0.0) : m_lon(lon), m_width(width) {};

	double pre() override;
	double plo() override;

	double compare() override;

private:
	double m_lon;
	double m_width;
};
class Circle : public Figure
{
public:
	Circle(double rad = 0.0) : m_rad(rad) {};

	double pre() override;
	double plo() override;

	double compare() override;

private:
	double m_rad;
	const double PI = 3.14;

};

class Mashine
{
public:
	virtual void go() = 0;
	virtual void input() = 0;
	virtual void showSpeed() = 0;
};
class Car : public Mashine
{
public:
	Car(float speedValue = 0.0) : speed(speedValue) {};

	void go() override;
	void input() override;
	void showSpeed() override;

private:
	float speed = 0.0;
};
class Ship : public Mashine
{
public:
	Ship(float speedValue = 0.0) : speed(speedValue) {};

	void go() override;
	void input() override;
	void showSpeed() override;

private:
	float speed = 0.0;
};
class Plane : public Mashine
{
public:
	Plane(float speedValue = 0.0) : speed(speedValue) {};

	void go() override;
	void input() override;
	void showSpeed() override;

private:
	float speed = 0.0;
};
// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
