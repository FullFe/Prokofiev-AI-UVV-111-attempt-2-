#include <iostream>
#include "Triad.h"

int main()
{
	Triad test_1(1, 2, 3);
	Triad test_2(1, 2, 4);
	std::cout << test_1.Compare(test_2) << std::endl;
	std::cout << test_2.Compare(test_1) << std::endl;
	Time test_time_1(12,56,99999);
	std::cout << test_time_1 << std::endl;
	Time test_time_2(12, 0, 0);
	std::cout << test_time_2 << std::endl;
	std::cout << test_time_1.Compare(test_time_2) << std::endl;
	system("pause");
	return 0;
}