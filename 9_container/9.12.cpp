#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1 {1, 2, 3, 4, 5};
  vector<int> v2 = v1;
  vector <int> v3(v1.begin(), v1.end());

  cout<<&v1<<" "<<&v2<<" "<<&v3<<endl;

  return 0;
}
