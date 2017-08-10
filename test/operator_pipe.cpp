#include <list>
#include <set>

#include "operator_pipe.hpp"

#include "seq.hpp"
#include "ostream_helpers.hpp"

using namespace std;

int main( int argc, char *argv[] )
{
  function< int(int) > f = [](int i){ return i+i; };

	auto s = seq( 12 ) | f;

	cout << s << endl;
  
  return 0;
}

