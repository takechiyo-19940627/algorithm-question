#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  int increment = 0;
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (i % 2 == 0) {
      if (isupper(s[i]) == 0) increment++;
    } else {
      if (isupper(s[i]) != 0) increment++;
    }
  }

  if (increment == s.length()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
