#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> vec {"hello", "ok", "bye", "like", "yourself", "chinese"};
  const int len = 5;
  int count = count_if(vec.cbegin(), vec.cend(), [=](string s) { return s.size() >= len; });

  return 0;
}
