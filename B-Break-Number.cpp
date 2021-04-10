#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int n[7] = {64, 32, 16, 8, 4, 2, 1};

  for (int i = 0; i < 8; ++i) {
    if (n[i] <= N) {
      cout << n[i] << endl;
      break;
    }
  }

  return 0;
}
