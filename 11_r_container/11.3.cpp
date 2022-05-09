#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
  map<string, unsigned int> word_count;
  string word;

  while (cin>>word)
  {
    transform(word.begin(), word.end(), word.begin(), ::towlower);
    word.erase(remove_if(word.begin(), word.end(), [](char c) { return ispunct(c) != 0; }), word.end());
    word_count[word]++;
  }
  for(auto item: word_count) {
    cout<<item.first<<": "<<item.second<<" times"<<endl;
  }

  return 0;
}
