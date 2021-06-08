#include "Triad.h"

Triad::Triad(int a = 0, int b = 0, int c = 0)
	: m_a(a), m_b(b), m_c(c)
{
}

bool Triad::Top(const Triad& other)
{
	return ((m_a > other.m_a) && (m_b > other.m_b) && (m_c > other.m_c));
}

bool Triad::Bot(const Triad& other)
{
	return ((m_a < other.m_a) && (m_b < other.m_b) && (m_c < other.m_c));
}
bool Triad::Equal(const Triad& other)
{
	return ((m_a == other.m_a) && (m_b == other.m_b) && (m_c == other.m_c));
}
Time::Time(unsigned int hour, unsigned int min, unsigned int sec)
	: m_hour(hour), m_min(min), m_sec(sec)
{
	Conversion();
}
Time::Time(unsigned int sec)
	: m_sec(sec)
{
	m_hour = 0;
	m_min = 0;
	Conversion();
}
std::ostream& operator<<(std::ostream& os, const Triad& obj)
{
	return os << "(" << obj.m_a << ";" << obj.m_b << ";" << obj.m_c << ")";
}
std::ostream& operator<<(std::ostream& os, const Time& obj)
{
	return os << obj.m_hour << " : " << std::setw(2) << std::setfill('0') << obj.m_min << " : " << std::setw(2) << std::setfill('0') << obj.m_sec;
}
std::istream& operator>>(std::istream& in, Triad& f)
{
	double a, b, c;
	in >> a >> b >> c;
	f = Triad(a, b, c);
	return in;
}
inline bool operator < (const Triad& lhs, const Triad& rhs)
{
	return ((lhs.m_a < rhs.m_a) && (lhs.m_b < rhs.m_b) && (lhs.m_c < rhs.m_c));
}
inline bool operator> (const Triad& lhs, const Triad& rhs)
{
	return ((lhs.m_a > rhs.m_a) && (lhs.m_b > rhs.m_b) && (lhs.m_c > rhs.m_c));
}
inline bool operator==(const Triad& lhs, const Triad& rhs)
{
	return ((lhs.m_a == rhs.m_a) && (lhs.m_b == rhs.m_b) && (lhs.m_c == rhs.m_c));
}
bool Time::Top(const Time& other)
{
	return (seconds() > other.seconds());
}
bool Time::Bot(const Time& other)
{
	return (seconds() < other.seconds());
}
bool Time::Equal(const Time& other)
{
	return (seconds() == other.seconds());
}
int Time::seconds() const
{
	return ((m_hour * 60 + m_min) * 60 + m_sec);
}
void Time::Conversion()
{
	int maxtime = 60;
	int maxh = 24;
	m_min += m_sec / maxtime;
	m_sec = m_sec % maxtime;
	m_hour += m_min / maxtime;
	m_min = m_min % maxtime;
	m_hour = m_hour % maxh;
}