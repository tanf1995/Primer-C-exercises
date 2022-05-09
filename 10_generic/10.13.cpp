#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
bool thanFive(string s);

int main() {
  vector<string> vec {"hello", "name", "ok", "statistics", "myself", "bye"};
  auto iterDivide = partition(vec.begin(), vec.end(), thanFive);

  for(auto iter = vec.begin(); iter != iterDivide; iter++) {
    cout<<*iter<<" ";
  }

  return 0;
}

bool thanFive(string s) {
  return s.size() >= 5;
}
