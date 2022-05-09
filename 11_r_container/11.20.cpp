#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
  map<string, int> word_count;
  string word;

  while (cin>>word)
  {
    auto rel = word_count.insert({ word, 1 });
    if (!rel.second) {
      ++(rel.first->second);
    }
  }

  return 0;
}
