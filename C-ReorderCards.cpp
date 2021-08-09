#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

vector<int> compress(vector<int> a) {
  int n = a.size();
  map<int, int> mp;
  // vector a の数字をkeyとするmapを作る
  rep(i, n) mp[a[i]] = 0;
  int id = 1;
  // mapの値をidで上書きする
  for (auto& p:mp) p.second = id++;
  rep(i, n) a[i] = mp[a[i]];
  return a;
}

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  // a, b それぞれ座標圧縮する
  a = compress(a);
  b = compress(b);
  rep(i, n) {
    // スペース区切りだとprintf
    printf("%d %d\n", a[i], b[i]);
  }

  // vector<vector<int> > vec(n);
  // for (int i = 0; i < n; i++) {
  //   vector<int> vec1(2);
  //   cin >> vec1[0];
  //   cin >> vec1[1];
  //   vec.push_back(vec1);
  // }

  return 0;
}
