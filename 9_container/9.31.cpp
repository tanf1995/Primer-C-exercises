#include <list>
#include <forward_list>
#include <vector>
#include <string>

using namespace std;

int main() {
  list<int> li {1, 2, 3, 4, 5, 6, 7, 8};
  auto iter = li.begin();

  while (iter != li.end())
  {
    if (*iter % 2) {
      li.insert(++iter, *iter);
    } else {
      iter = li.erase(iter);
    }
  }

  forward_list<int> fli {1, 2, 3, 4, 5, 6, 7, 8};
  auto fIter = fli.begin();
  auto prev = fli.before_begin();

  while (fIter != fli.end())
  {
    if (*fIter % 2) {
      fli.insert_after(fIter, *fIter);
      fIter++;
      fIter++;
      prev++;
      prev++;
    } else {
      fIter = fli.erase_after(prev);
    }
  }
  
  vector<char> vec{'h', 'e', 'l', 'l', 'o'};
  string s(vec.begin(), vec.end());
  
  return 0;
}
