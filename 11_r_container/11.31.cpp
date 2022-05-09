#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  multimap<string, string> books {
    {"moyan", "jiuguo"},
    {"luoguanzhong", "sanguoyanyi"},
    {"moyan", "fengrufeitun"},
  };
  vector<string> authors {"moyan", "shinaian"};

  for_each(books.begin(), books.end(), [](multimap<string, string>::value_type item) {
    cout<<item.first<<": "<<item.second<<endl;
  });

  for_each(authors.begin(), authors.end(), [&books](string name) {
    auto del_range = books.equal_range(name);

    books.erase(del_range.first, del_range.second);
  });

  return 0;
}
