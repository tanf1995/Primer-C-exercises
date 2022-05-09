#include <string>
#include <iostream>

using namespace std;

class Employee {
  public:
    Employee(): name("number" + to_string(++number_count)), number(number_count) {};
    Employee(string _name): name(_name), number(++number_count) {};
    Employee(const Employee&);
    Employee& operator=(const Employee&);

    void info() {
      cout<<"name: "<<name<<", number: "<<number<<endl;
    }

  private:
    string name;
    unsigned int number;
    static unsigned int number_count;
};

unsigned int Employee::number_count = 0;
Employee::Employee(const Employee &ep) {
  name = ep.name;
  number = ++number_count;
};
Employee& Employee::operator=(const Employee &ep) {
  name = ep.name;
  number = ++number_count;

  return *this;
};

int main() {
  Employee ep1;
  Employee ep2("tf");
  Employee ep3("zs");
  Employee ep4(ep3);
  Employee ep5 = ep2;

  ep1.info();
  ep2.info();
  ep3.info();
  ep4.info();
  ep5.info();

  return 0;
}
