#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <istream>
#include <ostream>
using namespace std;

struct Person
{
  public:
    Person() = default;
    Person(string name, string address) {
      this->name = name;
      this->address = address;
    }

    string getName() const {
      return name;
    }

    string getAddress() const {
      return address;
    }

  private:
    string name = "";
    string address = "";
};

istream& read(istream &is, Person &p) {
  // is>>p.getName();
  // is>>p.add;

  return is;
}

ostream& print(ostream &os, Person &p) {
  os<<"name: "<<p.getName()<<", address: "<<p.getAddress();

  return os;
}
#endif
