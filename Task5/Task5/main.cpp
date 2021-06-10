#include "trngl.cpp"

int main()
{
	double a, b, c;

	std::cout << "Input triangle sides:\n";
	std::cin >> a >> b >> c;


	std::cout << "===========================================Test 1\n";
	try
	{
		double perimeter;
		perimeter = perimeter_1(a, b, c);
		std::cout << "perimeter:  " << perimeter << std::endl;
	}
	catch (char)
	{
		std::cout << "Error 1\n";
	}


	std::cout << "===========================================Test 2\n";
	try
	{
		double perimeter;
		perimeter = perimeter_2(a, b, c);
		std::cout << "perimeter:  " << perimeter << std::endl;
	}
	catch (char)
	{
		std::cout << "Error 2\n";
	}


	std::cout << "===========================================Test 3\n";
	try
	{
		double perimeter;
		perimeter = perimeter_3(a, b, c);
		std::cout << "perimeter:  " << perimeter << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		std::cout << e.what();
	}


	std::cout << "===========================================Test 4_1\n";
	try
	{
		double perimeter;
		perimeter = perimeter_4_1(a, b, c);
		std::cout << "perimeter:  " << perimeter << std::endl;
	}
	catch (my_exception& e)
	{
		std::cout << e.what();
	}


	std::cout << "===========================================Test 4_2\n";
	try
	{
		double perimeter;
		perimeter = perimeter_4_2(a, b, c);
		std::cout << "perimeter:  " << perimeter << std::endl;
	}
	catch (null_exception& e)
	{
		std::cout << "Error 4_2\n";
	}


	std::cout << "===========================================Test 4_3\n";
	try
	{
		double perimeter;
		perimeter = perimeter_4_3(a, b, c);
		std::cout << "perimeter:  " << perimeter << std::endl;
	}
	catch (invalid_value e)
	{
		std::cout << e.what();
	}
	system("pause");
	return 0;
}
// гитхаб задание 5