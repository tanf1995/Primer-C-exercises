#include <iostream>
#include <vector>
using namespace std;

bool find(vector<int> &v, int n);
vector<int>::iterator find2(vector<int> &v, int n);

int main() {
  vector<int> li {1, 3, 6, 2, 2, 3, 4, 5};

  if (find(li, 4)) {
    cout<<"vector li has number 4"<<endl;
  } else {
    cout<<"vector li has not number 4"<<endl;
  }

  if (find2(li, 8) == li.end()) {
    cout<<"vector li has not number 8"<<endl;
  }

  return 0;
}

bool find(vector<int> &v, int n) {
  vector<int>::iterator it = v.begin();

  while (it != v.end())
  {
    if (*it == n) return true;
    it++;
  }
  
  return false;
}

vector<int>::iterator find2(vector<int> &v, int n) {
  vector<int>::iterator it = v.begin();

  while (it != v.end())
  {
    if (*it == n) return it;
    it++;
  }
  
  return it;
}
