#include <iostream>
using namespace std;

int compare(const int n, const int *p);
void exchange(int *p1, int *p2);

int main() {
  int n = 100, m = 200;

  cout<<"max value is "<<compare(n, &m)<<endl;
  exchange(&n, &m);
  cout<<"after exchange, n is "<<n<<" and m is "<<m<<endl;

  return 0;
}

int compare(const int n, const int *p) {
  if (n > *p) {
    return n;
  } else {
    return *p;
  }
}

void exchange(int *p1, int *p2) {
  int temp = *p2;

  *p2 = *p1;
  *p1 = temp;
}
