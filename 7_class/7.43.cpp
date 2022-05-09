#include <iostream>
#include <vector>
using namespace std;

class NoDefault {
  public:
    NoDefault() = default;
    NoDefault(int n): num(n) {};

  private:
    int num;
};

class C {
  public:
    C() {};
    C(NoDefault _n): n(_n) {};
  private:
    NoDefault n;
};

int main() {
  NoDefault n(5);
  C c(n);

  vector<NoDefault> vec(10);
  vector<C> vec2(10);

  return 0;
}
