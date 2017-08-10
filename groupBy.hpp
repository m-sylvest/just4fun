#include <vector>
#include <functional>

template <template<typename T, typename ... A> typename C, typename T, typename ... A>
std::vector<C<T,A...>> groupBy( C<T,A...> &in, std::function<bool(T&, T&)> grouper )
{
	std::vector<C<T,A...>> result;
	if (in.size() != 0)
	{
		T &prev = in[0];
		C<T,A...> in_group;
		in_group.push_back(prev);
		for ( auto i = in.begin() + 1; i != in.end() ; i++ )
		{
			if (!grouper(prev, *i))
			{
				result.push_back(in_group);
				in_group.clear();
			}
			in_group.push_back(*i);
			prev = *i;
		}
		result.push_back(in_group);
	}
	return result;
}


