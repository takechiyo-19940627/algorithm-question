#include <iostream>
using namespace std;

int main() {
  long double a;
  long double b;
  cin >> a >> b;
  long double dicount = a - b;
  long double ans = (dicount * 100) / a;

  cout << ans << endl;
  return 0;
}
