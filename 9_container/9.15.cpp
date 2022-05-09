#include <vector>
#include <list>
#include <iostream>

int main() {
  std::vector<int> v1{1, 2, 3, 4};
  std::vector<int> v2{1, 2, 3, 4};
  std::list<int> l1{1, 2, 3, 4};
  std::vector<int> v3;

  if (v1 == v2) {
    std::cout<<"v1 == v2 true"<<std::endl;
  } else {
    std::cout<<"v1 == v2 false"<<std::endl;
  }

  v3.assign(l1.cbegin(), l1.cend());
  if (v1 == v3) {
    std::cout<<"v1 == l1 true"<<std::endl;
  } else {
    std::cout<<"v1 == l1 false"<<std::endl;
  }

  return 0;
}
