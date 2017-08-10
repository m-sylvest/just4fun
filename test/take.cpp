
#include "take.hpp"
#include "seq.hpp"
#include "ostream_helpers.hpp"

using namespace std;

int main( int argc, char *argv[] )
{
  auto s = seq( 12 );
	auto t = take( s, 3 );

	cout << t << endl;
	cout << s << endl;
  
  return 0;
}

