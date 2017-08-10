#include <date/date.h>

template< typename T = int >
T days_in_year(unsigned short y)
{
	using namespace date;
	using namespace std::chrono;

	auto next = sys_days{ year{ y + 1 } / 1 / 1 };
	auto curr = sys_days{ year{   y   } / 1 / 1 };

	return duration<int, hours::period>(next - curr) / 24h;
}

template< typename T = int >
int days_in_month(unsigned short y, unsigned char m)
{
	using namespace date;
	using namespace std::chrono;

	auto next = sys_days{ year{ y } / month{ m } / last };
	auto curr = sys_days{ year{ y } / month{ m } / 1 };

	return duration<int, hours::period>(next - curr) / 24h + 1;
}


