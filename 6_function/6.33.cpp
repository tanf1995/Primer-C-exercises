#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printVector(vector<string> v = {"no content"});

int main() {
  vector<string> stringList {"hello", "world"};

  printVector(stringList);
  printVector();
}

void printVector(vector<string> v) {
  if (v.size() == 0) return;

  cout<<v[0]<<endl;
  v.erase(v.begin());
  printVector(v);
}
