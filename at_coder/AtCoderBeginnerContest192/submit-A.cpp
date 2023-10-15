#include <iostream>
using namespace std;

int main() {
  int n;
  int ans;
  cin >> n;
  n %= 100;
  ans = 100 - n;

  cout << ans << endl;

  return 0;
}
