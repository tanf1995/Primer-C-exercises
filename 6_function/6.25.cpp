#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc < 3) {
    cout<<"no args input!"<<endl;
  } else {
    string s1 = argv[1];
    string s2 = argv[2];

    cout<<s1 + s2<<endl;
  }

  return 0;
}
