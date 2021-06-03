#include <iostream>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;
  int res10000 = -1, res5000 = -1, res1000 = -1;
  for (int i = 0; i <= n; i++) {
    for (int j = 0; i + j <= n; j++) {
      int k = n - i - j;
      int total = 10000 * i + 5000 * j + 1000 * k;
      if (total == y) {
        res10000 = i;
        res5000 = j;
        res1000 = k;
      }
    }
  }

  cout << res10000 << " " << res5000 << " " << res1000 << endl;
  
  return 0;
}
