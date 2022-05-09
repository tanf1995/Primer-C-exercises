#include <iostream>
using namespace std;

int main() {
  int i = 0, &ri = i;
  int *p = &ri;

  i = 5;
  ri = 10;
  cout<<i<<" "<<ri<<" "<<*p<<p<<endl;

  return 0;
}
