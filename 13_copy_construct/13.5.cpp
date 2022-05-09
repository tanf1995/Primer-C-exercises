#include <string>
#include <iostream>

using namespace std;

class HasPtr {
  public:
    HasPtr(const string &s = string()): ps(new string(s)), i(0) {};
    HasPtr(const HasPtr& hasPtr): ps(new string(*hasPtr.ps)), i(hasPtr.i) {};
    ~HasPtr() {
      delete ps;
    }

    HasPtr& operator=(const HasPtr& hp) {
      ps = new string(*hp.ps);
      i = hp.i;

      return *this;
    };

    void content() {
      cout<<*ps<<endl;
    };
    void setContent(string s) {
      *ps = s;
    };

  private:
    string *ps;
    int i;
};

int main() {
  HasPtr hp("ololol");
  HasPtr hp1("hello");
  HasPtr hp2(hp1);

  hp1 = hp;

  hp.content();
  hp1.content();
  hp2.content();

  hp1.setContent("gogogo");

  hp.content();
  hp1.content();
  hp2.content();

  return 0;
}
