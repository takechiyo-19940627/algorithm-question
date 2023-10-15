#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans;
  for (char c : s) {
    if (c == '.') break;
    ans += c;
  }

  cout << ans << endl;
  
  return 0;
}
