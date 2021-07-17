#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1') {
      if (i % 2 == 0) {
        cout << "Takahashi" << endl;
        break;
      } else {
        cout << "Aoki" << endl;
        break;
      }
    }
  }

  return 0;
}