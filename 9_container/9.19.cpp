#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
  list<string> li;
  string s;

  while (cin>>s)
  {
    li.push_back(s);
  }

  auto iter = li.begin();

  while (iter != li.end())
  {
    cout<<*iter<<" ";
    iter++;
  }
  cout<<endl;
  
  return 0;
}
