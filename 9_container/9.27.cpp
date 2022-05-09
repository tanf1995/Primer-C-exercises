#include <forward_list>

using namespace std;

int main() {
  forward_list<int> fli {1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto prev = fli.before_begin();
  auto curr = fli.begin();

  while (curr != fli.end())
  {
    if (*curr % 2) {
      curr = fli.erase_after(prev);
    } else {
      prev = curr;
      curr++; 
    }
  }
  
  return 0;
}
