#include <iostream>
#include "theAbs.h"
using namespace std;

int fact(int n);
double theAbs(double n);

int main() {
  int n;
  double m;

  cout<<"please input a number to get factorial value:"<<endl;
  cin>>n;
  cout<<"result: "<<fact(n)<<endl;

  cout<<"please input a number to get absolute value:"<<endl;
  cin>>m;
  cout<<"result: "<<theAbs(m)<<endl;

  return 0;
}

int fact(int n) {
  if (n > 1) {
    return n * fact(n - 1);
  } else {
    return 1;
  }
}
