#include <iostream>
#include <vector>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<long> s(n), t(n);
  rep(i,n) cin >> s[i];
  rep(i,n) cin >> t[i];
  // 少なくとも2周まわせば、n-1でもらったものをnに受け渡すケースもカバーできる
  rep(i,n*2) {
    // t[i+1] = min(t[i+1], t[i]+s[i]); のままだと、i > n のときの処理ができないので、i mod n を取る
    t[(i+1)%n] = min(t[(i+1)%n], t[i%n]+s[i%n]);
  }

  rep(i,n) cout << t[i] << endl;
  return 0;
}

// int main() {
//   int n;
//   cin >> n;
//   vector<long> s(n);
//   vector<long> t(n);
//   rep(i,n) cin >> s[i];
//   rep(i,n) cin >> t[i];
//   int fmt = t[0];
//   vector<long> ans(n);
//   rep(j,n) {
//     if (j == 0) ans[j] = fmt;
//     else fmt += s[j - 1];

//     if (fmt > t[j]) fmt = t[j];
//     ans[j] = fmt;
//   }

//   rep(k,n) {
//     cout << ans[k] << endl;
//   }

//   return 0;
// }
