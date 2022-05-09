#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
  double a, b;
  char isFinally = 'y';

  while(isFinally == 'y') {
    isFinally = 'n';
    try {
      cin>>a>>b;
      if (b == 0) {
        throw exception();
      }
      double rel = a / b;
      cout<<"result: "<<rel<<endl;
    } catch (exception) {
      cout<<"divisor is zero!Do you want to try again?(y/n)"<<endl;
      cin>>isFinally;
    }
  }

  return 0;
}
