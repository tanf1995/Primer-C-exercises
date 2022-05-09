#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <ios>
using namespace std;

int main() {
  vector<string> words;
  ifstream f("D:\\tf\\cpp\\8_IO\\hello.txt");

  if (!f.is_open()) {
    cerr<<"open hello.txt failed"<<endl;
    return -1;
  }

  string word = "";
  char c;
  while (!f.eof())
  {
    f.get(c);
    if (c != ' ' && c != '\t' && c != ',' && c != '.') {
      word += c;
    } else {
      if (word.size()) {
        words.push_back(word);
        word = "";
      }
    }
  }
  f.close();

  cout<<"hello.txt contents: "<<endl;
  for (auto word:words) {
    cout<<word<<endl;
  }

  return 0;
}
