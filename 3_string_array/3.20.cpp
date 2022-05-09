#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> numberV;
  int n;

  while (cin>>n)
  {
    numberV.push_back(n);
  }

  for(int i = 0; i < numberV.size(); i++) {
    int lastI = numberV.size() - i - 1;

    if (i > lastI) {
      break;
    } else if (i == lastI) {
      cout<<numberV[i]<<endl;
    } else {
      cout<<numberV[i] + numberV[lastI]<<endl;
    }
  }
  

  return 0;
}
