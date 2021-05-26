#pragma once

#include <ostream>
#include <iomanip>

class Triad
{
private:

	int m_a;

	int m_b;

	int m_c;
public:
	Triad(int a, int b, int c);

	~Triad() = default;

	virtual bool Compare(const Triad& other);

};
class Time :public Triad
{

	unsigned int m_hour;
	unsigned int m_min;
	unsigned int m_sec;

public:

	Time(unsigned int hour, unsigned int min, unsigned int sec);
	Time(unsigned int sec);
	~Time() = default;

	friend std::ostream& operator<<(std::ostream& os, const Time& obj);
	virtual bool Compare(const Time& other);
	void Conversion();
	
};