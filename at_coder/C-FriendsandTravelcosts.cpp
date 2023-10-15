#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  long long k;
  cin >> n >> k;
  vector<pair<long long, int> > f(n);
  rep(i, n) {
    cin >> f[i].first >> f[i].second;
  }
  sort(f.begin(), f.end());
  int j = 0;
  long long ans = k;
  // j < n 友人の数分loopまわす
  // f[j].first <= ans 村番号と現在の所持金を比較。所持金のほうが多ければたどり着ける
  while (j < n && f[j].first <= ans) {
    ans += f[j].second;
    j++;
  }

  cout << ans << endl;
  return 0;
}

// int main() {
//   long n;
//   long long k;
//   cin >> n >> k;
//   map<long long, long long> mp;
//   rep(i,n) {
//     int a, b;
//     cin >> a >> b;
//     mp[a] += b;
//   }

//   long long v = 1;
//   rep(j, pow(10, 100) + 1) {
//     if (mp[v] > 0) k += (mp[v] - 1);
//     else k -= 1;
//     if (k <= 0) break;
//     v++;
//   }

//   cout << v << endl;

//   return 0;
// }
