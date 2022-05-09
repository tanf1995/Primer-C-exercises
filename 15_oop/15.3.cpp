#include <iostream>
#include <string>
using namespace std;

class Quote {
  public:
    Quote(string bn, double p, size_t n): bookNo(bn), price(p), num(n) {};
    string getBn() const {
      return bookNo;
    };
    virtual double total_price() const {
      return price * num;
    };
    virtual void debug() const {
      cout<<"bookNo: "<<bookNo<<endl;
      cout<<"price: "<<price<<endl;
      cout<<"num: "<<num<<endl;
    };

  private:
    string bookNo;

  protected:
    double price = 0.0;
    size_t num = 0;
};

class Bulk_Quote: public Quote {
  public:
    Bulk_Quote() = default;
    Bulk_Quote(string bn, double p, size_t n, double dc): Quote(bn, p, n), discount(dc) {};
    double total_price() const override {
      return price * num * 0.8;
    };
    void debug() const override {
      cout<<"---"<<endl;
      Quote::debug();
    };

  private:
    double discount;
};

int main() {
  Quote q("luxiaofeng", 24, 20);
  Bulk_Quote bq("luxiaofeng", 24, 40, 0.8);

  q.debug();
  bq.debug();

  return 0;
}
