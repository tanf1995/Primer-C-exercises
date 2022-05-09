#include <iostream>
using namespace std;

int main() {
  int i = 10;
  int j = 20;
  int *pi = &i;
  int *pi2 = 0;

  i++;
  cout<<*pi<<endl;
  *pi = *pi + 1;
  cout<<*pi<<" "<<i<<endl;
  pi = &j;
  cout<<*pi<<endl;

  return 0;
}
