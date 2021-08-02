#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  char s1 = s[0];
  s.erase(0, 1);
  cout << s + s1 << endl;
  return 0;
}
