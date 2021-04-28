#include <iostream>
#include "Rectangle.h"
using namespace std;



Rectangle::Rectangle(const double x1, const double y1, const double x2, const double y2)
{
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
}
Rectangle::Rectangle(const unsigned double width, const unsigned double length)
{
	this->width = width;
	this->length = length;
}
Rectangle::~Rectangle();




double setX1()
{
	return x1;
}


double setY1()
{
	return y1;
}


double setX2()
{
	return x2;
}



double setY2()
{
	return y2;
}


double getLength()
{
	cout << 'Length is' << length << endl;
}


double getWidth()
{
	cout << 'Width is' << width << endl;
}



double Rectangle::output(const double x1, const double y1, const double x2, const double y2)
{
	cout << 'x1:' << " " << x1 << endl;
	cout << 'x2:' << " " << x2 << endl;
	cout << 'y1:' << " " << y1 << endl;
	cout << 'y2:' << " " << y2 << endl;
}
double Rectangle::length(const double x1, const double x2)
{
	length = x2 - x1;
}
double Rectangle::width(const double y1, const double y2)
{
	width = y2 - y1;
}
double Rectangle::getArea(const unsigned double length, const unsigned double width, const double area)
{
	area = length * width
}
void Rectangle::move(const unsigned double length, const unsigned double width, const double x1, const double y1)
{

}
