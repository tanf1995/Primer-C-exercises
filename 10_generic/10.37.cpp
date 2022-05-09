#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for(auto iter = vec.rbegin() + 3; iter != vec.rbegin() + 8; iter++) {
    cout<<*iter<<" ";
  }

  return 0;
}
