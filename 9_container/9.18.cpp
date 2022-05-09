#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
  deque<string> deq;
  string s;

  while (cin>>s)
  {
    deq.push_back(s);
  }

  auto iter = deq.begin();

  while (iter != deq.end())
  {
    cout<<*iter<<" ";
    iter++;
  }
  cout<<endl;
  
  return 0;
}
