#include "Geometry.h"



void Geometry::setX(double x)
{
	m_x = x;
}
void Geometry::calc()
{
	this->value = exp(m_x);
}
double Geometry::getExp() const
{
	return value;
}
double Geometry::getX() const
{
	return m_x;
}
functions::functions(const double x)
{
	this->m_x = x;
	::Geometry::calc();
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
	value_a = (exp(m_x) + (1 / exp(m_x))) / 2;
	value_b = (exp(getX()) - (1 / exp(getX()))) / 2;
}