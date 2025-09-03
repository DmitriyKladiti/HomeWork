// HomeWork16.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>

class Person
{
public:

	Person() : name(new std::string("")), age(new int(0)), email(new std::string("")) {};
	Person(std::string name, int age, std::string email) : name(new std::string(name)), age(new int(age)), email(new std::string(email)) {};

	void validateEmail();
	virtual void info();
	virtual void read();

	virtual ~Person()
	{
		delete age;
		delete name;
		delete email;
	}

protected:
	int* age = new int;
	std::string* name = new std::string;
	std::string* email = new std::string;
};
class Student : public Person
{
public:
	Student() : Person("", 0, ""), studentNumber(new int{1}), averageMurk(new float{1.0}) {};
	Student(std::string name, int age, std::string email, int studentNumber, float averageMurk) : Person(name, age, email)
		, studentNumber(new int (studentNumber))
		, averageMurk(new float (averageMurk)) {};

	void info() override;
	void read() override;

	~Student() override
	{
		delete studentNumber;
		delete averageMurk;
	}

private:
	int* studentNumber = new int;
	float* averageMurk = new float;


};
class Professor : public Person
{
public:
	Professor() : Person("", 0, ""), salary(new int{0}) {};
	Professor(std::string name, int age, std::string email, int salary) {};
	void info() override;
	void read() override;

	~Professor() override
	{
		delete salary;
	}

private:
	int* salary = new int;
};

enum class TypePerson : int
{
	Person = 0,
	Student = 1,
	Professor = 2
};
class PersonFaktory
{
public:
	//PersonFaktory();

	Person* Creatr(TypePerson type);

};
// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
