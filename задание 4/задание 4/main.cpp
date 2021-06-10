#include <iostream>
#include "Geometry.h"
#include <cmath>

using namespace std;
int main()
{

	functions test_2(2.0);
	test_2.calc();
	cout << test_2.getExp() << endl;
	cout << test_2.getGipcos() << "_" << test_2.getGipsin() << endl;
	system("pause");
}