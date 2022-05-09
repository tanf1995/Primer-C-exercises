#include <iostream>
#include <istream>
#include <string>
using namespace std;

istream& input(istream& is);

int main() {
  input(cin);

  return 0;
};

istream& input(istream& is) {
  string c = "";
  string s = "";
  auto state = is.rdstate();

  is.clear();
  while (is>>c)
  {
    s += c;
    c = "";
  }
  cout<<s;
  is.setstate(state);
  
  return is;
}
