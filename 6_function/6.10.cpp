#include <iostream>
using namespace std;

void swap(int *p1, int *p2) {
  int temp = *p1;
  
  *p1 = *p2;
  *p2 = temp;
}

void swap2(int &p1, int &p2) {
  int temp = p1;

  p1 = p2;
  p2 = temp;
}

int main() {
  int a = 10, b = 20;
  int c = 30, d = 40;

  swap(&a, &b);
  cout<<"a、b: "<<a<<" "<<b<<endl;

  swap2(c, d);
  cout<<"c、d: "<<c<<" "<<d<<endl;

  return 0;
}
