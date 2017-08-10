#include <date_helpers.hpp>
#include <iostream>

using namespace std;
using namespace date;

int main(int argc, char *argv[])
{
	auto today = floor<days>(std::chrono::system_clock::now());
	cout << today << '\n';

	cout << days_in_year(2016) << endl;
	cout << days_in_month(2016, 2) << endl;
	cout << days_in_month(2016, 1) << endl;
	cout << days_in_month(2017, 2) << endl;
}


