#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;

  reverse(s.begin(), s.end());

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '9') {
      s[i] = '6';
    } else if (s[i] == '6') {
      s[i] = '9';
    }
  }
  

  cout << s << endl;

  return 0;
}
