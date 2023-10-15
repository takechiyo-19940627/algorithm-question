#include <iostream>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int res = 0;

  for (int i = 0; i <= a; i++) {
    int c1 = 500 * i;
    for (int j = 0; j <= b; j++) {
      int c2 = 100 * j;
      for (int k = 0; k <= c; k++) {
        int c3 = 50 * k;
        if ((c1 + c2 + c3) == x) {
          ++res;
        }
      }
    }
  }
  cout << res << endl;
  return 0;
}
