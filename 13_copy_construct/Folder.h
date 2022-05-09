#ifndef FOLDER_H
#define FOLDER_H
#include <set>
#include <string>
using namespace std;

class Message;

class Folder {
  public:
    Folder(string s): name(s) {};
    void save_message(Message& msg) {
      messages.insert(&msg);
    };
    void delete_message(Message &msg) {
      messages.erase(&msg);
    }

  private:
    string name;
    set<Message*> messages;
};
#endif
