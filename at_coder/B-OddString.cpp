#include <iostream>
using namespace std;

int main() {
  string s;
  string result;

  cin >> s;

  for (int i = 0; i < s.length(); ++i) {
    if ((i + 1) % 2 == 1) {
      result += s[i];
    }
  }

  cout << result << endl;
}
