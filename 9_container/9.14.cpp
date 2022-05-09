#include <vector>
#include <string>
#include <list>
using namespace std;

int main() {
  list<const char*> li{"hello", "world"};
  vector<string> vec;

  vec.assign(li.cbegin(), li.cend());

  return 0;
}
