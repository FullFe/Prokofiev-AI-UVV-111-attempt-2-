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




void Rectangle::setX1(double newX1)
{
	 x1 = newX1;
}


void Rectangle::setY1(double newY1)
{
	y1 = newY1;
}


void Rectangle::setX2(double newX2)
{
	x2 = newX2;
}



void Rectangle::setY2(double newY2)
{
	y2 = newY2;
}


double Rectangle::getLength()
{
	return this->length;
}


double Rectangle::getWidth()
{
	return this->width;
}



double Rectangle::getX1()
{
	return this->x1;
}
double Rectangle::getY1()
{
	return this->y1;
}
double Rectangle::getX2()
{
	return this->x2;
}
double Rectangle::getY2()
{
	return this->y2;
}
double Rectangle::Length(const double x1, const double x2)
{
	double length = x2 - x1;
	return length
}
double Rectangle::Width(const double y1, const double y2)
{

	double width = y2 - y1;
	return width;
}
unsigned double Rectangle::Area(const unsigned double length, const unsigned double width)
{
	unsigned double area = length * width;
		return area;
}
void Rectangle::Move(const unsigned double length, const unsigned double width, const double x1, const double y1)
{
	setX1(x1);
	setY1(y1);
	setX2(x1 + length);
	setY2(y1 + width);

}
