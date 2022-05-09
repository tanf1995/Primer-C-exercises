#include <iostream>
using namespace std;

int main() {
  // int i = -1, &r = 0;
  int i2 = 10;
  int i3 = 20;
  int *const p2 = &i2;
  const int i = -1, &r = 0;
  const int *const p3 = &i2;
  const int *p1 = &i2;
  // const int &const r2;

  // i2 = 12;
  // *p2 = 20;
  // i2 = 30;

  return 0;
}
