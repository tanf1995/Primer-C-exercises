#include <iostream>
using namespace std;

void reset(int &i);

int main() {
  int n = 100;

  cout<<"n init value: "<<n<<endl;
  reset(n);
  cout<<"now, n is "<<n<<endl;

  return 0;
}

void reset(int &i) {
  i = 0;
}
