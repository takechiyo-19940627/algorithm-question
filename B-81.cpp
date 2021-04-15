#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool OK = false;

  for (int j = 1; j <= 9; j++) {
    for (int k = 1; k <= 9; k++) {
      if (j * k == n) {
        OK = true;
        break;
      }
    }
  }

  if (OK == false) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}
