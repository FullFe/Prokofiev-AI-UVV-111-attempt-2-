#include <iostream>
#include "Rectangle.h"


Rectangle::Rectangle(const double x1, const double y1, const double x2, const double y2)
{
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
}
Rectangle::Rectangle(const double width, const double length)
{
	x1 = 0;
	y1 = 0;
	x2 = x1 + width;
	y2 = y1 + length;
}





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
double Rectangle::Length()
{
	double length = this->x2 - this->x1;
	return length;
}

double Rectangle::Width()
{

	double width = this->y2 - this->y1;
	return width;
}
double Rectangle::Area()
{
	double area = Length() * Width();
	return area;
}
void Rectangle::Move()
{
	setX1(x1);
	setY1(y1);
	setX2(x1 + Length());
	setY2(y1 + Width());

}
//ddd

