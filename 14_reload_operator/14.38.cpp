#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <cctype>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class statisticReportWord{
  public:
    void operator()(string word) {
      words[word.size()].push_back(word);
    };
    void showWords() {
      for_each(words.begin(), words.end(), [](auto item) {
        cout<<item.first<<" chars word is "<<item.second.size()<<" times"<<endl;
      });
    };

  private:
    map<size_t, vector<string>> words;
};

int main() {
  ifstream reportFile("D:\\tf\\cpp\\14_reload_operator\\report.txt");
  string line;
  statisticReportWord sr;

  while (getline(reportFile, line))
  {
    stringstream lineStream(line);
    string word;

    while (lineStream>>word)
    {
      word.erase(
        remove_if(
          word.begin(), 
          word.end(), 
          [](char c) -> bool {
            return ispunct(c) != 0;
          }
        ),
        word.end()
      );
      sr(word);
    }
  };
  sr.showWords();

  return 0;
};
