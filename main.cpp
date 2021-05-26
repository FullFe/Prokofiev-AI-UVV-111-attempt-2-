#include <iostream>
#include "Rectangle.h"

int main()
{
	Rectangle test1(1 ,2, 10, 30);
	Rectangle test2(7, 5);
	cout << test1.Area() << endl;
	test1.Move();
	cout << test1.getX1() << endl;
	//ddd
}