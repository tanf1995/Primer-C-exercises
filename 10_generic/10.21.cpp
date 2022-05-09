#include <iostream>

using namespace std;

int main() {
  int num = 10;
  auto f = [&num]() mutable -> bool { num--;return num <= 0; };

  while (!f())
  {
    cout<<"num: "<<num<<endl;
  }
  cout<<"num is zero!"<<endl;

  return 0;
}
