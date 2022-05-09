#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> strV;
  string str;

  while(cin>>str) {
    strV.push_back(str);
  }

  for(string &str:strV) {
    for(char &c:str) {
      c = toupper(c);
    }
  }

  for(string str:strV) {
    cout<<str<<endl;
  }

  return 0;
}
