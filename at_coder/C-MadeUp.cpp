#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  map<int, int> a;
  vector<int> b(n);
  vector<int> c(n);
  rep(i,n) {
    int an;
    cin >> an;
    a[an] += 1;
  }

  rep(i,n) cin >> b[i];

  long long ans = 0;
  rep(i,n) {
    int cn; cin >> cn;
    if ((cn - 1) <= b.size()) {
      if (a[b[cn - 1]] > 0) {
        ans += a[b[cn - 1]];
      }
    }
  };

  cout << ans << endl;
  
  return 0;
}
