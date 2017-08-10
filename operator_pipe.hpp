#include <functional>

template <template<typename T, typename ... A> typename C, typename T, typename ... A, typename U>
auto operator | (const C<T, A...> &v, std::function<U(T)> f)
{
	C<U, A...> result;
	for (const auto &e : v)
		result.push_back(f(e));

	return result;
}


