#include <iostream>
#include <string>
using namespace std;

bool stringHasUpper(const string);
void toLower(string &s);

int main() {
  string name = "TanFeng";

  if (stringHasUpper(name)) {
    cout<<"name has upper char!"<<endl;
    toLower(name);
    cout<<"to lower: "<<name<<endl;
  } else {
    cout<<"name not has upper char!"<<endl;
  }

  return 0;
}

bool stringHasUpper(const string s) {
  for (auto c:s) {
    if (c >= 'A' && c <= 'Z') return true;
  }
  return false;
}

void toLower(string &s) {
  for (auto &c:s) {
    if (c >= 'A' && c <= 'Z') {
      c = c - 'A' + 'a';
    }
  }
}
