#include "groupBy.hpp"

#include "seq.hpp"
#include "ostream_helpers.hpp"

using namespace std;

int main( int argc, char *argv[] )
{
	function<bool(int&, int&)> andBy2 = [](int &i1, int &i2) { return (i1 & 2) == (i2 & 2);  };

  auto s = seq(12);
	auto t = groupBy( s, andBy2 );

	cout << t << endl;
  
  return 0;
}

