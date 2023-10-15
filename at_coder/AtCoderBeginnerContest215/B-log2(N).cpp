#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long n;
  cin >> n;
  if (n == 1) {
    cout << 0 << endl;
    return 0;
  }

  long long l = 2;
  long long cnt = 1;
  bool can_contiune = true;

  while (can_contiune) {
    l *=2;
    if (l > n) {
      can_contiune = false;
      break;
    }
    if (l <= n) {
      cnt++;
    }
  }
  
  cout << cnt << endl;
  return 0;
}
