#include <algorithm>

template <typename T>
T take(T & in, int count)
{
	int c = std::min<int>(in.size(), count);
	T chunk(c);

	copy_n(in.begin(), c, chunk.begin());
	in.erase(in.begin(), in.begin() + c);

	return chunk;
};

