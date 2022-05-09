#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> numberV{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for(auto it = numberV.begin();it != numberV.end();it++) {
    *it *= *it;
  }

  for(auto i:numberV) {
    cout<<i<<endl;
  }

  return 0;
}
