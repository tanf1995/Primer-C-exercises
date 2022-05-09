#ifndef STR_BLOB_H
#define STR_BLOB_H

#include <vector>
#include <string>
#include <memory>
#include <stdexcept>
using namespace std;

class StrBlob {
  public:
    StrBlob();
    StrBlob(initializer_list<string> sl);

    unsigned int size();
    bool empty();
    string& front();
    string& back();
    string& front() const;
    string& back() const;
    void push_back(string s);
    void pop_back();

  private:
    shared_ptr<vector<string>> data;

    void check(unsigned int index, const string &msg);
    void check(unsigned int index, const string &msg) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) {};
StrBlob::StrBlob(initializer_list<string> sl): data(make_shared<vector<string>>(sl)) {};

void StrBlob::check(unsigned int index, const string &msg) {
  if (index >= data->size()) {
    throw out_of_range(msg);
  }
}

void StrBlob::check(unsigned int index, const string &msg) const {
  if (index >= data->size()) {
    throw out_of_range(msg);
  }
}

unsigned int StrBlob::size() {
  return data->size();
}

bool StrBlob::empty() {
  return data->empty();
}

string& StrBlob::front() {
  check(0, "front on empty strBlob");
  return data->front();
}

string& StrBlob::back() {
  check(0, "back on empty strBlob");
  return data->back();
}

string& StrBlob::front() const {
  check(0, "front on empty strBlob");
  return data->front();
}

string& StrBlob::back() const {
  check(0, "back on empty strBlob");
  return data->back();
}

void StrBlob::push_back(string s) {
  data->push_back(s);
}

void StrBlob::pop_back() {
  data->pop_back();
}

#endif
