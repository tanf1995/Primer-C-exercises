#include <iostream>
#include "Screen.h"

using namespace std;

int main() {
  Screen s1(20, 5);
  Screen s2(20, 5, 't');

  s1 = s2;

  return 0;
}
