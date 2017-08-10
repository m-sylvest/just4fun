#include <list>
#include <set>

#include "seq.hpp"
#include "ostream_helpers.hpp"

using namespace std;

int main( int argc, char *argv[] )
{
	vector<int> s = seq( 12 );
	cout << s << endl;

  set<std::string> st = { "Peter", "Jakob", "Andreas" };
	cout << st << endl;
  
  return 0;
}

