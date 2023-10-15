#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b;
  const double p = 32;
  cin >> a >> b;

  if (a == b) {
    cout << 1 << endl;
    return 0;
  }

  int diff = a - b;
  long long res = pow(p, diff);
  cout << res << endl;

  return 0;
}
