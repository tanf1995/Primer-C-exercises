#include <vector>
#include <numeric>

using namespace std;

int main() {
  vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8};
  int sum = accumulate(vec.begin(), vec.end(), 0);
  vector<double> vec2 {1.1, 2.1, 3.1, 4.1};
  double sum2 = accumulate(vec2.begin(), vec2.end(), 0.0);
  
  return 0;
}
