#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
  vector<int> vec;
  list<int> li {1, 2, 3, 4, 5};

  copy(li.cbegin(), li.cend(), back_inserter(vec));

  return 0;
}
