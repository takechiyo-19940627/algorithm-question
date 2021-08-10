#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int e = max(a, b);
  int f = min(c, d);

  cout << e - f << endl;

  return 0;
}
