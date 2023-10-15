#include <iostream>
using namespace std;

int main() {
  int s, t;
  cin >> s >> t;
  int ans = 0;
  for (int a = 0; a <= s; a++) {
    for (int b = 0; b <= s; b++) {
      for (int c = 0; c <= s; c++) {
        int mul = a * b * c;
        int pul = a + b + c;
        if (pul <= s && mul <= t) ans++;
      }
    }
  }

  cout << ans << endl;
  
  return 0;
}