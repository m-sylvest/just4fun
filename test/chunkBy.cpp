#include <chunkBy.hpp>
#include <seq.hpp>
#include <ostream_helpers.hpp>

int main(int argc, char *argv[])
{
	auto a = seq(12);
	std::cout << chunkBy(a,3) << std::endl;
	return 0;
}

