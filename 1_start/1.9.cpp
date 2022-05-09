#include <iostream>
using namespace std;

int main() {
  int sum = 0, num = 50;

  while (num <= 100)
  {
    sum += num;
    num++;
  }
  
  cout<<"sum of 50 to 100 is: "<<sum<<endl;

  return 0;
}
