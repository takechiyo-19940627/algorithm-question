#include <iostream>
using namespace std;

int main() {
  int n, a, x, y;
  int ans = 0;
  cin >> n >> a >> x >> y;

  if (n <= a) {
    ans += x * n;
  } else {
    ans += x * a;
    ans += y * (n - a);
  }

  cout << ans << endl;
  return 0;
}