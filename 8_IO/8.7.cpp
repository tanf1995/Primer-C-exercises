#include <iostream>
#include <fstream>
#include <ios>

using namespace std;

int main() {
  ofstream o("D:\\tf\\cpp\\8_IO\\hello-w.txt", ios::app);

  if (!o.is_open()) {
    cerr<<"open file failed"<<endl;
    return -1;
  }

  o<<"hello world"<<endl;

  return 0;
}
