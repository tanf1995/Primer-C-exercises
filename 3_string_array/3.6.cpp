#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "hello world!";
  string s2 = s;
  int n = 0;

  for(char &c:s) {
    c = 'X';
  }

  cout<<"s: "<<s<<endl;

  while (n < s2.size())
  {
    auto &c = s2[n];
    c = 'X';
    n++;
  }
  cout<<"s2: "<<s2<<endl;

  return 0;
}
