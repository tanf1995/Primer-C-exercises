#include <string>
#include <istream>
#include <ostream>
#include <iostream>
#include <exception>
using namespace std;

class Sales_data {
  public:
    Sales_data(string n, double p = 0.0, size_t _num = 0): price(p), num(_num), name(n) {};
    Sales_data(const Sales_data& sd): name(sd.name), price(sd.price), num(sd.num) {};
    friend ostream& operator<<(ostream &os, const Sales_data &sd);
    friend istream& operator>>(istream &is, Sales_data &sd);
    friend Sales_data operator+(const Sales_data& lSd, const Sales_data& rSd);
    friend bool operator==(const Sales_data& lSd, const Sales_data& rSd);
    friend bool operator!=(const Sales_data& lSd, const Sales_data& rSd);
    friend bool operator<(const Sales_data& lSd, const Sales_data& rSd);
    Sales_data& operator+=(const Sales_data& sd) {
      if (name != sd.name) {
        return *this;
      }
      price = ((price * num) + (sd.price * sd.num)) / (num + sd.num);
      num += sd.num;

      return *this;
    };

  private:
    double price;
    size_t num;
    string name;
};

ostream& operator<<(ostream &os, const Sales_data &sd) {
  os<<"name: "<<sd.name<<" | price: "<<sd.price<<" | sale number: "<<sd.num;

  return os;
}

istream& operator>>(istream &is, Sales_data &sd) {
  is>>sd.price>>sd.num;

  return is;
}

Sales_data operator+(const Sales_data& lSd, const Sales_data& rSd) {
  Sales_data sum(lSd);

  sum += rSd;
  return sum;
};

bool operator==(const Sales_data& lSd, const Sales_data& rSd) {
  return lSd.name == rSd.name && lSd.price == rSd.price && lSd.num == rSd.num;
};

bool operator!=(const Sales_data& lSd, const Sales_data& rSd) {
  return !(lSd == rSd);
};

bool operator<(const Sales_data& lSd, const Sales_data& rSd) {
  return lSd.price * lSd.num < rSd.price * rSd.num;
};

int main() {
  Sales_data book1("luxiaofeng", 20, 10);
  Sales_data book2("luxiaofeng", 22, 10);
  Sales_data book3("chuliuxiang");

  bool isTh = book1 < book2;

  // cout<<book1<<endl;
  // cin>>book3;
  // cout<<book3<<endl;

  // book1 += book2;
  // book1 += book3;
  Sales_data book4 = book1 + book2;
  bool isEq = book1 == book2;

  return 0;
}
