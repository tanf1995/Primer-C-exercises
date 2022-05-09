#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  cout<<"int: "<<sizeof(int)<<endl;
  cout<<"char: "<<sizeof(char)<<endl;
  cout<<"float: "<<sizeof(float)<<endl;
  cout<<"double: "<<sizeof(double)<<endl;
  cout<<"bool: "<<sizeof(bool)<<endl;
  cout<<"unsigned int: "<<sizeof(unsigned int)<<endl;
  cout<<"string: "<<sizeof(string)<<endl;
  cout<<"vector<int>: "<<sizeof(vector<int>)<<endl;
  cout<<"vector<string>: "<<sizeof(vector<string>)<<endl;
  cout<<"vector<double>: "<<sizeof(vector<double>)<<endl;

  return 0;
}
