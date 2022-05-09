#include <string>
#include <iostream>
using namespace std;
template <typename T>
int compare(const T &a, const T &b);

int main() {
  int a = 2, b = 3;

  cout<<compare(a, b);
  return 0;
}

template <typename T>
int compare(const T &a, const T &b) {
  if (a > b) return 1;
  if (a < b) return -1;
  return 0;
}
