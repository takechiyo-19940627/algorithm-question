#include <iostream>
using namespace std;

int main() {
  double a, b;
  double res;
  cin >> a >> b;
  double rate = a / 100;
  res = b * rate;

  cout << res << endl;
  return 0;
}
