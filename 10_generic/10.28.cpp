#include <iterator>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main() {
  vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9};
  list<int> li1, li2, li3;

  copy(vec.begin(), vec.end(), inserter(li1, li1.begin()));
  copy(vec.begin(), vec.end(), back_inserter(li2));
  copy(vec.cbegin(), vec.cend(), front_inserter(li3));

  return 0;
}
