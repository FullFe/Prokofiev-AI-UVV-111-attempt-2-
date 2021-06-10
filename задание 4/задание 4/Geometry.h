#pragma once
#include <ostream>
#include <iostream>
#include <cmath>
using namespace std;

/**
* \brief Класс Геометрия
*/
class Geometry
{
private:
protected:
	/**
* \brief поле X
*/
	double m_x;
	/**
* \brief поле значение функции
*/
	double value;
public:
	/**
* \brief Конструктор
*/
	Geometry() = default;
	/**
* \brief сеттер X
*/
	void setX(double x);
	/**
* \brief Деконструктор
*/
	~Geometry() = default;
	/**
* \brief геттер функции
*/
	double getExp() const;
	/**
* \brief Метод подсчета значения функции
*/
	virtual void calc();
	/**
	* \brief геттер X
	*/
	double getX() const;
};

/**
* \brief Класс Функции
*/
class functions : public Geometry
{
private:

	/**
* \brief поле значения гиперболического синуса
*/
	double value_a;
	/**
* \brief поле значения гиперболического косинуса
*/
	double value_b;
public:
	/**
* \brief Конструктор
*/
	functions(double x);
	/**
* \brief Деконструктор
*/
	~functions() = default;
	/**
* \brief геттер значения гиперболического синуса
*/
	double getGipcos() const;
	/**
* \brief геттер значения гиперболического косинуса
*/
	double getGipsin() const;

	double getX() const;
	/**
* \brief Переопределение метода подсчета значения функции
*/
	void calc();

};