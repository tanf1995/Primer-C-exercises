#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class HasPtr {
  public:
    HasPtr(): ps(new string("")), i(0), use(new unsigned int(1)) {};
    HasPtr(string s = "", int _i = 0): ps(new string(s)), i(_i), use(new unsigned int(1)) {};
    HasPtr(const HasPtr& hp): ps(hp.ps), i(hp.i), use(hp.use) {
      ++*use;
    };
    HasPtr& operator=(const HasPtr& hp) {
      ++*hp.use;
      if (!--*use) {
        delete ps;
        delete use;
      }
      ps = hp.ps;
      use = hp.use;
      i = hp.i;

      return *this;
    }
    bool operator<(const HasPtr& hp) {
      return i < hp.i;
    }
    ~HasPtr() {
      if (!*use) {
        delete ps;
        delete use;
      }
    }
    friend void swap(HasPtr&, HasPtr&);

  private:
    int i;
    string* ps;
    unsigned int* use;
};

inline void swap(HasPtr& hp1, HasPtr& hp2) {
  using std::swap;
  swap(hp1.i, hp2.i);
  swap(hp1.ps, hp2.ps);
  swap(hp1.use, hp2.use);
  cout<<"swap"<<endl;
}

int main() {
  HasPtr hp1("hello", 10);
  HasPtr hp2(hp1);
  HasPtr hp3 = hp2;
  HasPtr hp4("world", 20);

  // swap(hp1, hp4);

  vector<HasPtr> v;
  for (size_t i = 0; i < 100; i++)
  {
    v.push_back(HasPtr("", i));
    v.push_back(HasPtr("", 200 - i));
  }

  sort(v.begin(), v.end());
  return 0;
}
