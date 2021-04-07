#include <iostream>
using namespace std;

int main() {
  int bp = 700;
  string s;
  cin >> s;
  if (s[0] == 'o') bp += 100;
  if (s[1] == 'o') bp += 100;
  if (s[2] == 'o') bp += 100;
  cout << bp << endl;
}
