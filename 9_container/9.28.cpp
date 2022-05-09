#include <forward_list>
#include <string>

using namespace std;

void insertBy(forward_list<string> *fli, string sMark, string s);
void insertBy(forward_list<string> &fli, string sMark, string s);

int main() {
  forward_list<string> fli {"hello", "my", "name", "is", "Feng"};
  insertBy(&fli, "is", "Tan");
  insertBy(fli, "lll", "Bye");

  return 0;
}

void insertBy(forward_list<string> *fli, string sMark, string s) {
  auto iter = (*fli).begin();
  auto prev = (*fli).before_begin();

  while (iter != (*fli).end())
  {
    if (*iter == sMark) {
      (*fli).insert_after(iter, s);
      break;
    } else {
      prev = iter;
      iter++;
    }
  }
  (*fli).insert_after(prev, s);
}

void insertBy(forward_list<string> &fli, string sMark, string s) {
  auto iter = fli.begin();
  auto prev = fli.before_begin();

  while (iter != fli.end())
  {
    if (*iter == sMark) {
      fli.insert_after(iter, s);
      break;
    } else {
      prev = iter;
      iter++;
    }
  }
  fli.insert_after(prev, s);
}
