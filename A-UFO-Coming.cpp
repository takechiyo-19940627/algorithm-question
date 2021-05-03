#include <iostream>
#include <regex>
using namespace std;

int main() {
  string S;
  cin >> S;
  int count = 0;

  for (int i = 0; i < S.size(); ++i) {
    if (S.substr(i, 4) == "ZONe") ++count;
  }
  cout << count << endl;
  return 0;
}
