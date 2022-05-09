#include <iostream>
#include <fstream>
#include <sstream>
#include <ios>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> persons;
  ifstream personFile("D:\\tf\\cpp\\8_IO\\person.txt");
  char line[256];

  if (!personFile.is_open()) {
    cerr<<"File open failed;"<<endl;
    return -1;
  }

  while (!personFile.eof())
  {
    personFile.getline(line, 100);
    persons.push_back(line);
  }
  
  for(auto s:persons) {
    istringstream person(s);
    string word;

    while (person>>word)
    {
      cout<<word<<endl;
    }
    
  }

  return 0;
}
