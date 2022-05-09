#include <iostream>
using namespace std;

size_t hello() {
  static size_t count = 0;

  return ++count;
}

int main() {
  for(int i = 0; i < 20; i++) {
    cout<<hello()<<" ";
  }

  return 0;
}
