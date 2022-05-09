#include <vector>
#include <list>

using namespace std;

int main() {
  int arr[] {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  list<int> li;
  vector<int> vec;

  for (auto i:arr) {
    li.push_back(i);
    vec.push_back(i);
  }

  auto liIter = li.begin();
  auto vecIter = vec.begin();

  while (liIter != li.end())
  {
    if (*liIter % 2) {
      liIter = li.erase(liIter);
    } else {
      liIter++;
    }
  }

  while (vecIter != vec.end())
  {
    if (*vecIter % 2) {
      vecIter++;
    } else {
      vecIter = vec.erase(vecIter);
    }
  }
  
  return 0;
}
