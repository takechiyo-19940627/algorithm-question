#include <iostream>
using namespace std;

int main() {
  int n;
  int res = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if (tmp > 10) {
      res += (tmp - 10);
    }
  }
  cout << res << endl;
  return 0;
}