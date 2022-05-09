#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>
#include <set>
#include <algorithm>
#include "Folder.h"
using namespace std;

class Message {
  friend class Folder;

  public:
    explicit Message(string s): content(s) {};
    Message(const Message& msg): content(msg.content), folders(msg.folders) {
      add_to_folder(*this);
    };
    Message& operator=(const Message& msg) {
      remove_from_folder(*this);
      content = msg.content;
      folders = msg.folders;
      add_to_folder(*this);

      return *this;
    };
    ~Message() {
      remove_from_folder(*this);
    };
    // actions
    void save(Folder& folder) {
      folders.insert(&folder);
      folder.save_message(*this);
    };
    void quit(Folder& folder) {
      folders.erase(&folder);
      remove_from_folder(*this);
    }
    friend void swap(Message &lMsg, Message &rMsg);

  private:
    string content;
    set<Folder*> folders;

    void remove_from_folder(Message &msg) {
      for_each(folders.begin(), folders.end(), [&msg](Folder* f) {
        f->delete_message(msg);
      });
    };
    void add_to_folder(Message &msg) {
      for_each(folders.begin(), folders.end(), [&msg](Folder* f) {
        f->save_message(msg);
      });
    };
};

void swap(Message &lMsg, Message &rMsg) {
  using std::swap;
  lMsg.remove_from_folder(lMsg);
  rMsg.remove_from_folder(rMsg);
  swap(lMsg.content, rMsg.content);
  swap(lMsg.folders, rMsg.folders);
  lMsg.add_to_folder(lMsg);
  rMsg.add_to_folder(rMsg);
}
#endif
