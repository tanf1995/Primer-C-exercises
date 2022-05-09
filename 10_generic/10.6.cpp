#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> vec(5, 1);
  auto iter = fill_n(vec.begin(), 5, 0);

  return 0;
}
