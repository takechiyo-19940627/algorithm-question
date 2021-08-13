#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> l(n), r(n);
  rep(i, n) {
    int t;
    cin >> t >> l[i] >> r[i];
    // すべてを閉区間にする処理
    // すべて 0.5ずらす
    // すべて *2+1 or *2-1 する
    l[i] *= 2;
    r[i] *= 2;
    if (t >= 3) l[i]++;
    if (t % 2 == 0) r[i]--;
  }
  int ans = 0;
  rep(i, n)rep(j, i) {
    if (r[i] < l[j]) continue;
    if (r[j] < l[i]) continue;
    ++ans;
  }

  cout << ans << endl;
  return 0;
}
