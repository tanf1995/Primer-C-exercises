#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator change_value(int n, vector<int>::iterator it);

int main() {
  vector<int> v{1, 2, 3, 4, 5};
  auto it = v.begin();
  it = change_value(10, it);
  it = change_value(20, ++it);
  
  for(auto n:v) {
    cout<<n<<endl;
  }

  return 0;
}

vector<int>::iterator change_value(int n, vector<int>::iterator it) {
  *it = n;

  return it;
}
