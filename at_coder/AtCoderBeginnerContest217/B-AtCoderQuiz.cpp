#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<string> list = {"ABC", "ARC", "AGC", "AHC"};
  vector<string> list2(3);
  string ans;
  for (int i = 0; i < 3; i++) cin >> list2[i];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      if (list[i] == list2[j]) break;
      if (list[i] != list2[j] && j <= 1) continue;
      ans = list[i];
    }
  }

  cout << ans << endl;
  return 0;
}
