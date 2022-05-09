#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
  vector<int> vec {1, 2, 1, 3, 3, 4, 5, 7};
  list<int> li;

  sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
  unique_copy(vec.begin(), vec.end(), back_inserter(li));

  return 0;
}
