
#include <vector>
#include <algorithm>

std::vector<int> seq(int from, int to)
{
	// class generator:
	struct UniqueNumber {
		int current;
		UniqueNumber(int from = 1) { current = from - 1; }
		int operator()() { return ++current; }
	};

	std::vector<int> result(to - from + 1);
	std::generate_n(result.begin(), to - from + 1, UniqueNumber(from));
	return result;
}

std::vector<int> seq(int count) { return seq(1, count); }


