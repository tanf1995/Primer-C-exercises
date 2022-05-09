#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <ios>
using namespace std;

int main() {
  vector<string> lines;
  ifstream f("D:\\tf\\cpp\\8_IO\\hello.txt");

  if (!f.is_open()) {
    cerr<<"open hello.txt failed"<<endl;
    return -1;
  }

  char line[256];
  while (!f.eof())
  {
    f.getline(line, 100);
    lines.push_back(line);
  }
  f.close();

  cout<<"hello.txt contents: "<<endl;
  for (auto s:lines) {
    cout<<s<<endl;
  }

  return 0;
}
