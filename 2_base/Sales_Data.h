#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_Data
{
  std::string bookNo = "";
  unsigned saleNumber = 0;
  double price = 0;
  double revenue = 0;
};
#endif
