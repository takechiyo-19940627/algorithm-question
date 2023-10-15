#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  rep(i,n) cin >> vec[i];
  vector<int> cnt(200);
  rep(i,n) cnt[vec[i]%200]++;
  long long ans = 0;
  rep(i,200) ans += (long long)cnt[i]*(cnt[i]-1)/2;
  cout << ans << endl;
  return 0;
}
