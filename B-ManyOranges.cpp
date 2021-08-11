#include <iostream>
#include <math.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int a, b, w;
  cin >> a >> b >> w;
  w *= 1000;
  const int INF = 1001001001;
  int l = INF, r = -INF;
  for(int n = 1; n <= w; ++n) {
    if (a * n <= w && w <= b * n) {
      l = min(l, n);
      r = max(r, n);
    }
  }

  if (l == INF) cout << "UNSATISFIABLE" << endl;
  else cout << l << " " << r << endl;
  return 0;
}
