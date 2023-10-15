#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  bool is_find = false;
  cin >> a >> b >> c;

  for (int i = a; i <= b; i++) {
    int mod = i % c;
    if (mod == 0) {
      cout << i << endl;
      is_find = true;
      break;
    }
  }

  if (!is_find) {
    cout << -1 << endl;
  }

  return 0;
}