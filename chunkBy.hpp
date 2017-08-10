#include <vector>
#include <algorithm>
#include "take.hpp"

std::vector<std::vector<int>> chunkBy(std::vector<int> &in, int count)
{
	std::vector<std::vector<int>> result;
	int c = std::min<int>(in.size(), count);
	if( c > 0 )
	{
    std::vector<int> taken = take(in, count);
		result.push_back(taken);
		if (in.size() > 0)
		{
			std::vector<std::vector<int>> more = chunkBy(in, count);
			result.resize( 1 + more.size() );
			copy(more.begin(), more.end(), result.end());
		}
	}
	return result;
}

