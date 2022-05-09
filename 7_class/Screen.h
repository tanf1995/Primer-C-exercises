#ifndef SCREEN_H
#define SCREEN_H
#include <string>
#include <ostream>
using namespace std;

class Screen
{
  typedef string::size_type pos;

  private:
    int width = 0, height = 0;
    int cursor = 0;
    string contents = "";

    void do_display(ostream &os) const {
      // os<<contents;
      for(int i = 0; i < contents.size(); i++) {
        os<<contents[i];
        if ((i + 1) % width == 0) {
          cout<<endl;
        }
      }
    }

  public:
    Screen() = default;
    Screen(int w, int h);
    Screen(int w, int h, char c);
    // Screen(int w, int h, char c): width(w), height(h), contents(w * h, c) {};
    char get() const;
    inline char get(int r, int c) const;
    Screen& move(int r, int c);
    Screen& set(char);
    Screen& set(int, int, char);
    Screen& display(ostream &os) {
      do_display(os);
      return *this;
    }
    const Screen& display(ostream &os) const {
      do_display(os);
      return *this;
    }
    pos size() const;
};

Screen::Screen(int w, int h): Screen(w, h, ' ') {
  // width = w;
  // height = h;
  // contents.assign(w * h, ' ');
}

Screen::Screen(int w, int h, char c) {
  width = w;
  height = h;
  contents.assign(w * h, c);
}

char Screen::get() const {
  return contents[cursor];
}

inline char Screen::get(int r, int c) const {
  int index = r * width + c;

  return contents[index];
}

Screen& Screen::move(int r, int c) {
  int index = r * width + c;

  cursor = index;
  return *this;
}

Screen& Screen::set(char c) {
  contents[cursor] = c;

  return *this;
}

Screen& Screen::set(int row, int col, char c) {
  contents[row * width + col] = c;

  return *this;
}

string::size_type Screen::size() const {
  return width * height;
}
#endif
