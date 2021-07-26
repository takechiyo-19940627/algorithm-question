#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  long long ans = 0;

  if ((b * 2) < (a + c)) {
    if ((a + c) % 2 == 0) {
      ans = (a + c) / 2 - b;
    } else {
      ans = ((a + c + 1) / 2) - b;
    }
  } else {
    ans = (b * 2) - (a + c);
  }

  cout << ans << endl;

  return 0;
}