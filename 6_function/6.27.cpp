#include <iostream>
#include <vector>
using namespace std;

int sum(initializer_list<int> list);

int main(int argc, char *argv[]) {
  vector<int> nums {};

  for (int i = 1; i < argc; i++) {
    string s = argv[i];
    int n = atoi(s.c_str());

    nums.push_back(n);
  }

  cout<<"sum: "<<sum({1, 2, 3})<<endl;

  return 0;
}

int sum(initializer_list<int> list) {
  int result = 0;

  // for (const int *p = list.begin(); p != list.end(); p++) {
  //   result += *p;
  // }
  for (const int &n:list) {
    result += n;
  }

  return result;
}
