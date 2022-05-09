#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;
map<string, string> buildRuleMap(ifstream &ruleFile);
void transformPhrase(ifstream &ruleFile, ifstream &phraseFile);

int main() {
  ifstream ruleFile("D:\\tf\\cpp\\11_r_container\\rule.txt");
  ifstream phraseFile("D:\\tf\\cpp\\11_r_container\\result.txt");

  transformPhrase(ruleFile, phraseFile);

  return 0;
}

void transformPhrase(ifstream &ruleFile, ifstream &phraseFile) {
  map<string, string> ruleMap = buildRuleMap(ruleFile);
  string line;

  while (getline(phraseFile, line))
  {
    istringstream stream(line);
    string word;

    while (stream>>word)
    {
      if (ruleMap.count(word)) {
        cout<<ruleMap[word];
      } else {
        cout<<word;
      }
      cout<<" ";
    }
    cout<<endl;
  }
}

map<string, string> buildRuleMap(ifstream &ruleFile) {
  map<string, string> ruleMap;
  string key;
  string rule;

  while (ruleFile>>key && getline(ruleFile, rule))
  {
    if (rule.size()) {
      ruleMap[key] = rule.substr(1);
    } else {
      throw runtime_error("no rule for key: " + key);
    }
  }
  
  return ruleMap;
}
