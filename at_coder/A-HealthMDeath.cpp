#include <iostream>
using namespace std;

int main() {
  int m, h;
  cin >> m >> h;
  string ans;

  ans = h % m == 0 ? "Yes" : "No";

  cout << ans << endl;

  return 0;
}
