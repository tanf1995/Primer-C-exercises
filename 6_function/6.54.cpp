#include <iostream>
#include <vector>
using namespace std;

int sum(int, int);
int subtract(int, int);
int ride(int, int);
int divide(int, int);

int main() {
  int (*sumP) (int, int) = sum;
  int (*subtractP) (int, int) = subtract;
  int (*rideP) (int, int) = ride;
  int (*divideP) (int, int) = divide;
  vector<int (*) (int, int)> baseOperation { sumP, subtractP, rideP, divideP };

  cout<<"4 and 2 base operation: "<<endl;
  for(auto f:baseOperation) {
    cout<<f(4, 2)<<endl;
  }

  return 0;
}

int sum(int n, int m) {
  return n + m;
}

int subtract(int n, int m) {
  return n - m;
}

int ride(int n, int m) {
  return n * m;
}

int divide(int n, int m) {
  return n / m;
}
