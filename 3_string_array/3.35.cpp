#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int *p = begin(arr);
  int *pend = end(arr);

  while (p != pend)
  {
    *p = 0;
    *p++;
  }
  for (auto n:arr) {
    cout<<n<<" ";
  }

  return 0;
}
