#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  cout<<"请输入带标点的字符串:"<<endl;
  cin>>s;
  for (char &c:s) {
    if (ispunct(c)) c = '\0';
  }
  cout<<"去除标点后："<<endl<<s<<endl;

  return 0;
}
