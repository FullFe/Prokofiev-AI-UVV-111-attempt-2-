#include <iostream>
#include "Geometry.h"
#include <cmath>
using namespace std;

Geometry::Geometry(double x)
{
	setX(x);
	calc();
}
void Geometry::setX(double x)
{
	this->m_x = x;
}
void Geometry::calc()
{
	value = exp(m_x);
}
double Geometry::getExp() const
{
	return value;
}
functions::functions()
{
	calc();
}
double functions::getGipsin() const
{
	return value_a;
}
double functions::getGipcos() const
{
	return value_b;
}
std::ostream& operator<<(std::ostream& os, const functions& obj)
{
	return os << obj.getGipcos() << obj.getGipsin();
}
double functions::getX() const
{
	return m_x;
}
void functions::calc()
{
	value_a = (getExp() + (1 / getExp())) / 2;
	value_b = (getExp() - (1 / getExp())) / 2;
}