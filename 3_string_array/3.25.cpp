#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> scoreArr(11, 0);
  int score;

  while (cin>>score)
  {
    auto it = scoreArr.begin();

    it += score / 10;
    *it += 1;
  }

  for(int i = 0; i < 11; i++) {
    if (i == 10) {
      cout<<i*10<<": "<<scoreArr[i]<<endl;
    } else {
      cout<<i*10<<" ~ "<<i*10 + 9<<": "<<scoreArr[i]<<endl;
    }
  }
  

  return 0;
}
