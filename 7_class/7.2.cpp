#include <iostream>
#include <string>
using namespace std;

struct Sales_data
{
  string bookNo = "";
  int sale_count = 0;
  double sale_price = 0;

  Sales_data(string bookNo, int sale_count = 0, double sale_price = 0) {
    this->bookNo = bookNo;
    this->sale_count = sale_count;
    this->sale_price = sale_price;
  }

  string isbn() {
    return bookNo;
  }

  Sales_data& combinate(Sales_data &s);
  double avg_price() const;
};

Sales_data& Sales_data::combinate(Sales_data &s) {
  if (this->isbn() == s.isbn()) {
    this->sale_count += s.sale_count;
    this->sale_price += s.sale_price;
  }

  return *this;
}

double Sales_data::avg_price() const {
  return sale_price / sale_count;
}


int main() {
  Sales_data s1("luxiaofeng", 20, 20 * 42.0);
  Sales_data s2("luxiaofeng", 30, 30 * 41.0);
  Sales_data s3("chuliuxiang", 40, 40 * 52.0);

  cout<<s1.isbn()<<endl;
  s1.combinate(s2);
  s1.combinate(s3);
  cout<<"luxiaofeng sale count: "<<s1.sale_count<<endl;
  cout<<"luxiaofeng sale average price: "<<s1.avg_price()<<endl;

  return 0;
}
