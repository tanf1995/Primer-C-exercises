#include <algorithm>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main() {
  vector<int> vec { 1, 2, 3, 4, 5, 5, 6, 7, 8, 1, 5, 2 };
  list<string> li {"hello", "hello", "world"};
  int num = count(vec.begin(), vec.end(), 5);
  int num2 = count(li.begin(), li.end(), "hello");

  return 0;
}
