#include <string>
#include <iostream>
#include "str_blob.h"

using namespace std;

int main() {
  StrBlob sb1({ "A", "B", "C", "D", "E", "F", "G" });
  const StrBlob sb2({"A", "B", "C", "D", "E", "F", "G"});
  StrBlob sb3 = sb1;
  
  cout<<sb1.size()<<endl;
  cout<<sb1.back()<<endl;
  cout<<sb1.front()<<endl;
  sb1.pop_back();
  cout<<sb1.size()<<endl;
  cout<<sb1.back()<<endl;
  sb1.push_back("Z");
  cout<<sb1.size()<<endl;
  cout<<sb1.back()<<endl;

  cout<<sb2.back()<<endl;
  cout<<sb2.front()<<endl;

  cout<<sb3.back()<<endl;

  return 0;
}
