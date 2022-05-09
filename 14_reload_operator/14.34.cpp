#include <string>
using namespace std;

class IfThenElse {
  public:
    IfThenElse() = default;
    string operator()(bool condition, string s1, string s2) {
      return condition ? s1 : s2;
    };

  private:
};

int main() {
  IfThenElse ins;

  string res = ins(0, "condition is not zero", "condition is zero");

  return 0;
}
