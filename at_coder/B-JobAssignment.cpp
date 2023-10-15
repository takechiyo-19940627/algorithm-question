#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  int ans = 1000000000;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);

  rep(i, n) {
    cin >> a[i];
    cin >> b[i];
  }

  for (int i = 0; i < n; i++) {
    int t1 = a[i];
    for (int j = 0; j < n; j++) {
      int t2 = b[j];
      if (i == j) {
        ans = min(ans, a[i] + b[j]);
      } else {
        int t2 = max(a[i], b[j]);
        ans = min(ans, t2);
      }
    }
  }

  cout << ans << endl;
  
  return 0;
}
