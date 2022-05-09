#include <vector>
#include <string>
#include <new>
#include <iostream>
#include <memory>

using namespace std;
// void inputData(vector<string> *vec);
// void printData(vector<string> *vec);
void inputData(shared_ptr<vector<string>> vec);
void printData(shared_ptr<vector<string>> vec);

int main() {
  // auto vecP = new(nothrow) vector<string> {};

  // inputData(vecP);
  // delete vecP;

  shared_ptr<vector<string>> vecP2 = make_shared<vector<string>>(vector<string> {});
  inputData(vecP2);

  return 0;
}

// void inputData(vector<string> *vec) {
//   string line;

//   while (cin>>line)
//   {
//     vec->push_back(line);
//   }
//   printData(vec);
// }

// void printData(vector<string> *vec) {
//   for (auto iter = vec->begin(); iter != vec->end(); iter++)
//   {
//     cout<<*iter<<" ";
//   }
//   cout<<endl;
// }

void inputData(shared_ptr<vector<string>> vec) {
  string line;

  while (cin>>line)
  {
    vec->push_back(line);
  }
  printData(vec);
}

void printData(shared_ptr<vector<string>> vec) {
  for (auto iter = vec->begin(); iter != vec->end(); iter++)
  {
    cout<<*iter<<" ";
  }
  cout<<endl;
}
