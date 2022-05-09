#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v(10);
  vector<int>::size_type n = v.size();

  for(vector<int>::size_type i = 0; i != v.size(); i++, n--) {
    v[i] = n;
  }

  for(auto n:v) {
    cout<<n<<" ";
  }

  return 0;
}
