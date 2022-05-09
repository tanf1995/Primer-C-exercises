#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main() {
  list<int> l1{1, 2, 3, 4, 5};
  vector<int> v2{2, 3, 4, 5, 6};
  vector<double> v1(l1.begin(), l1.end());
  vector<double> v3(v2.begin(), v2.end());

  return 0;
}
