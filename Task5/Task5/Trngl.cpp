#include <iostream>
#include <cmath>

bool compare(double first, double second)
{
	return (first - second) < std::numeric_limits<double>::min();
}
/**
* \brief Метод проверки ввода данных
*/

inline bool not_exist_check(double a, double b, double c)
{

	return (compare(a + b , c)  || compare(a + c , b) || compare(b + c , a));
}
/**
* \brief Метод проверки ввода
*/
inline bool inv_val_check(double a, double b, double c)
{
	double value = 0;
	return (compare(a,value) || compare(b, value) || compare(c, value));
}

/**
* \brief Мой класс исключений
*/
class my_exception
{
public:
	std::string e;
	my_exception(std::string str)
		: e(str)
	{
	}
	std::string what()
	{
		return e;
	}
};

/**
* \brief Пустой класс
*/
class null_exception
{
};

/**
* \brief Мое исключение, наследник стандартного класса exception
*/
class invalid_value : public std::exception
{
public:
	const char* what() const throw()
	{
		return "Error, invalid side lengths\n";
	}
};

/**
* \brief без спецификации исключений
*/
inline double perimeter_1(double a, double b, double c)
{
	if (not_exist_check(a, b, c) || inv_val_check(a, b, c))
		throw 'e';
	return (a + b + c);
};

/**
* \brief со спецификацией throw();
*/
inline double perimeter_2(double a, double b, double c) throw()
{
	if (not_exist_check(a, b, c) || inv_val_check(a, b, c))
		throw 'e';
	return (a + b + c);
};

/**
* \brief с конкретной спецификацией с подходящим стандартным исключением
*/
inline double perimeter_3(double a, double b, double c) throw(std::invalid_argument)
{
	if (not_exist_check(a, b, c) || inv_val_check(a, b, c))
		throw std::invalid_argument("Error, invalid side lengths\n");
	return (a + b + c);
}

/**
* \brief Спецификация с собственным реализованным исключением (независимый класс с полями-параметрами функции)
*/
inline double perimeter_4_1(double a, double b, double c) throw(my_exception)
{
	if (not_exist_check(a, b, c) || inv_val_check(a, b, c))
		throw my_exception("Error, invalid side lengths\n");
	return (a + b + c);
}

/**
* \brief Спецификация с собственным реализованным исключением (пустой класс)
*/
inline double perimeter_4_2(double a, double b, double c) throw(null_exception)
{
	if (not_exist_check(a, b, c) || inv_val_check(a, b, c))
		throw null_exception();
	return (a + b + c);
}

/**
* \brief Спецификация с собственным реализованным исключением (наследник от стандартного исключения с полями)
*/
inline double perimeter_4_3(double a, double b, double c)
{
	if (not_exist_check(a, b, c) || inv_val_check(a, b, c))
		throw invalid_value();
	return (a + b + c);
}
// гитхаю задание 5