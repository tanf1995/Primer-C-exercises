#include <iostream>
using namespace std;

int main() {
  int n1, n2;
  int max = 0, min = 0;

  cout<<"请输入两个整数："<<endl;
  cin>>n1;
  cin>>n2;

  if (n1 > n2) {
    max = n1;
    min = n2;
  } else {
    max = n2;
    min = n1;
  }

  while (++min < max)
  {
    cout<<min<<endl;
  }
  
  return 0;
}
