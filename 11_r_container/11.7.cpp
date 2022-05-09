#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
  map<string, vector<string>> families {
    { "tan", { "tanfeng", "tanyi", "taner" } },
    { "zhang", { "zhangsan", "zhangsi" } }
  };

  families["li"] = { "lisi", "liwu" };

  return 0;
}
