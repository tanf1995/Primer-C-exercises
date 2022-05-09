#include <algorithm>
#include <vector>
#include <string>

using namespace std;
void elimDups(vector<string> &vec);
bool isShorter(string s1, string s2);

int main() {
  vector<string> vec {"hello", "world", "go", "go", "hello"};

  elimDups(vec);
  stable_sort(vec.begin(), vec.end(), isShorter);

  return 0;
}

void elimDups(vector<string> &vec) {
  sort(vec.begin(), vec.end());
  auto iter = unique(vec.begin(), vec.end());

  vec.erase(iter, vec.end());
}

bool isShorter(string s1, string s2) {
  return s1.size() < s2.size();
}
