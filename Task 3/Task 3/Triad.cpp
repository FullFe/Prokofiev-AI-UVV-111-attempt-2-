#include "Triad.h"

Triad::Triad(int a = 0, int b = 0, int c = 0)
	: m_a(a), m_b(b), m_c(c)
{
}

bool Triad::Compare(const Triad& other)
{
	return ((m_a >= other.m_a) && (m_b >= other.m_b) && (m_c > other.m_c));
}

Time::Time(unsigned int hour, unsigned int min, unsigned int sec)
	: m_hour(hour), m_min(min), m_sec(sec)
{
	Conversion();
}
Time::Time(unsigned int sec)
	:m_sec(sec)
{
	m_hour = 0;
	m_min = 0;
	Conversion();
}

std::ostream& operator<<(std::ostream& os, const Time& obj)
{
	return os << obj.m_hour << " : " << std::setw(2) << std::setfill('0') << obj.m_min << " : " << std::setw(2) << std::setfill('0') << obj.m_sec;
}

bool Time::Compare(const Time& other)
{
	return ((m_hour >= other.m_hour) && (m_min >= other.m_min) && (m_sec > other.m_sec));
}

void Time::Conversion()
{
	m_min += m_sec / 60;
	m_sec = m_sec % 60;
	m_hour += m_min / 60;
	m_min = m_min % 60;
	m_hour = m_hour % 24;
}
