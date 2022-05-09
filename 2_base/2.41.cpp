#include <iostream>
#include <string>
#include "Sales_Data.h"
using namespace std;

int main() {
  Sales_Data s1, s2;

  cin>>s1.bookNo>>s1.saleNumber>>s1.price;
  s1.revenue = s1.saleNumber * s1.price;
  cin>>s2.bookNo>>s2.saleNumber>>s2.price;
  s2.revenue = s2.saleNumber * s2.price;

  if (s1.bookNo == s2.bookNo) {
    cout<<"total: "<<s1.bookNo<<" "<<s1.saleNumber + s2.saleNumber<<" "<<s1.revenue+s2.revenue<<endl;
  } else {
    cout<<"input books is not the same"<<endl;
  }

  return 0;
}
