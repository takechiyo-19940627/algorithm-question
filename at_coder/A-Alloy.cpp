#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  string ans;

  if (a > 0 && b > 0) ans = "Alloy";
  if (a > 0 && b == 0) ans = "Gold";
  if (a == 0 && b > 0) ans = "Silver";

  cout << ans << endl;

  return 0;
}
