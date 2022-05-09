#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
  Sales_item total;

  if (cin>>total) {
    Sales_item current;

    while (cin>>current)
    {
      if (total.isbn() == current.isbn()) {
        total += current;
      } else {
        cout<<"invalid book!"<<endl;
      }
    }
  } else {
    cout<<"invalid book!"<<endl;
  }

  cout<<total<<endl;
  return 0; 
}
