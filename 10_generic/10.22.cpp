#include<functional>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
using namespace std::placeholders;
bool biggerThan(string s, int len);

int main() {
  const int len = 6;
  vector<string> vec {"hello", "ok", "bye", "like", "yourself", "chinese"};
  int count = count_if(vec.cbegin(), vec.cend(), bind(biggerThan, _1, len));

  return 0;
}

bool biggerThan(string s, int len) {
  return s.size() >= len;
}
