#include <iostream>

using namespace std;

class Numbered {
  public:
    Numbered() {
      mysn = num++;
    };
    Numbered(Numbered &n) {
      mysn = num++;
    };
    void showSn() {
      cout<<mysn<<endl;
    };

  private:
    static int num;
    int mysn;
};

void f(Numbered &n);

int Numbered::num = 0;

int main() {
  Numbered a, b = a, c = b;

  f(a);
  f(b);
  f(c);

  return 0;
}

void f(Numbered &n) {
  n.showSn();
}
