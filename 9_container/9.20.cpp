#include <list>
#include <deque>

using namespace std;

int main() {
  list<int> li { 1, 2, 3, 4, 5, 6, 7, 8 };
  list<int>::iterator iter = li.begin();
  deque<int> deq1;
  deque<int> deq2;

  while (iter != li.end())
  {
    if (*iter % 2 == 0) {
      deq1.push_back(*iter);
    } else {
      deq2.insert(deq2.end(), *iter);
    }
    iter++;
  }

  return 0;
}
