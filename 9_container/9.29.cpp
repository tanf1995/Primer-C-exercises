#include <vector>
#include <string>

int main() {
  std::vector<std::string> vec(25, "h");

  vec.resize(100);

  vec.resize(10);

  return 0;
}
