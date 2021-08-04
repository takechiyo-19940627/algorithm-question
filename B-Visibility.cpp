#include <iostream>
#include <vector>
using namespace std;

// 上、左、下、右への移動
int di[] = {-1, 0, 1, 0};
int dj[] = {0, -1, 0, 1};

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  --x, --y;
  vector<string> s(h);
  for (int i = 0; i < h; i++) cin >> s[i];
  int ans = 1;
  // 4座標を試す
  for (int i = 0; i < 4; i++) {
    // start 地点の設定
    int ni = x, nj = y;
    while (1) {
      ni += di[i];
      nj += dj[i];
      // 範囲外にいく
      if (ni < 0 || nj < 0 || ni >= h || nj >= w) break;
      // "#" に出くわす
      if (s[ni][nj] == '#') break;
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}
