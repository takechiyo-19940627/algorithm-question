#include <iostream>
using namespace std;

int main() {
  int r, g, b;
  int N;
  cin >> r >> g >> b;
  N = 100 * r + 10 * g + b;
  if (N % 4 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

