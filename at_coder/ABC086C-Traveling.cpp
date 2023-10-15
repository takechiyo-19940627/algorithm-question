#include <iostream>
using namespace std;

int main() {
  int n;
  int t[110000], x[110000], y[110000];
  cin >> n;
  t[0] = x[0] = y[0] = 0;
  for (int i = 0; i < n; i++) cin >> t[i+1] >> x[i+1] >> y[i+1];

  bool can = true;
  for (int i = 0; i < n; ++i) {
    int dt = t[i+1] - t[i];
    int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
    if (dt < dist) can = false; // 移動距離は移動時間未満でないといけない
    if (dist % 2 != dt % 2) can = false; // dist と dt の偶奇は一致する必要がある
  }
  
  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
}