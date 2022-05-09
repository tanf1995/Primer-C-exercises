#include <vector>
#include <string>
#include <set>
#include "Message.h"
using namespace std;

int main() {
  Folder f1("other");
  Folder f2("work");
  Message m1("hello, this is first email");
  m1.save(f1);
  Message m2("go to work!");
  m2.save(f2);
  Message m3(m1);

  m3 = m2;

  swap(m2, m1);

  return 0;
}
