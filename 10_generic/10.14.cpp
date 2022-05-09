using namespace std;

int main() {
  int base = 10;
  const auto sum = [](int a, int b) { return a + b; };
  const auto sum2 = [base](int a) { return base + a; };
  int n = sum(5, 6);
  int n2 = sum2(5);

  return 0;
}
