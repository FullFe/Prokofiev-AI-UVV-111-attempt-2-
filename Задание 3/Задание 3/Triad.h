#pragma once

#include <ostream>
#include <iomanip>
/**
* \brief Класс Три числа
*/
class Triad
{
private:
	/**
* \brief число_1
*/
	int m_a;

	/**
* \brief число_2
*/
	int m_b;

	/**
* \brief число_3
*/
	int m_c;
public:

	/**
* \brief Конструктор параметризованный
*/
	Triad(int a, int b, int c);

	/**
* \brief Деконструктор
*/
	~Triad() = default;

	/**
* \brief Перегрузка оператора <
*/
	friend inline bool operator < (const Triad& lhs, const Triad& rhs);

	/**
* \brief Перегрузка оператора >
*/
	friend inline bool operator> (const Triad& lhs, const Triad& rhs);

	/**
* \brief Перегрузка оператора ==
*/
	friend inline bool operator==(const Triad& lhs, const Triad& rhs);

	/**
* \brief Метод сравнения(больше ли?)
*/
	virtual bool Top(const Triad& other);
	/**
* \brief Метод сравнения(меньше ли?)
*/
	virtual bool Bot(const Triad& other);
	/**
* \brief Метод сравнения(равно ли?)
*/
	virtual bool Equal(const Triad& other);
	/**
* \brief Перегрузка оператора вывода
*/
	friend std::ostream& operator<<(std::ostream& os, const Triad& obj);


};
class Time :public Triad
{
	/**
* \brief Час
*/
	unsigned int m_hour;
	/**
* \brief Минута
*/
	unsigned int m_min;
	/**
* \brief Секунда
*/
	unsigned int m_sec;

public:
	/**
* \brief Конструктор параметризованный
*/
	Time(unsigned int hour, unsigned int min, unsigned int sec);
	/**
* \brief Конструктор параметризованный
*/
	Time(unsigned int sec);
	/**
* \brief Деконструктор
*/
	~Time() = default;
	/**
* \brief Перегрузка оператора вывода
*/
	friend std::ostream& operator<<(std::ostream& os, const Time& obj);
	/**
* \brief Метод сравнения(больше ли?)
*/
	bool Top(const Time& other);
	/**
* \brief Метод сравнения(меньше ли?)
*/
	bool Bot(const Time& other);
	/**
* \brief Метод сравнения(равно ли?)
*/
	bool Equal(const Time& other);
	/**
* \brief Метод исключения ошибок во времени
*/
	void Conversion();
	/**
* \brief Метод перевод всего времени в секунды
*/
	int seconds() const;
};
