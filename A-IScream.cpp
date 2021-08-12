#include <iostream>
using namespace std;

int main() {
  int a, b;
  int ans = 4;
  cin >> a >> b;

  if (a + b >= 15 && b >= 8) {
    ans = 1;
  } else if (a + b >= 10 && b >= 3) {
    ans = 2;
  } else if (a + b >= 3) {
    ans = 3;
  }

  cout << ans << endl;

  return 0;
}
