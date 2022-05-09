#include <map>
#include <vector>
#include <list>

using namespace std;

int main() {
  vector<int> v {1, 2, 3, 4, 5};
  list<int> l {1, 2, 3, 4, 5};
  map<vector<int>::iterator, int> mapVI;
  map<list<int>::iterator, int> mapLI;

  for (auto iter = v.begin(); iter != v.end(); iter++)
  {
    mapVI[iter] = *iter;
  }

  // for (auto iter = l.begin(); iter != l.end(); iter++)
  // {
  //   mapLI[iter] = *iter;
  // }

  return 0;
}
