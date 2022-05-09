#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  while (getline(cin, s))
  {
    if (!s.empty()) {
      cout<<s<<endl;
      cout<<"size: "<<s.size()<<endl;
    } else {
      cout<<"empty string!"<<endl;
      break;
    }
  }

  return 0;
}
