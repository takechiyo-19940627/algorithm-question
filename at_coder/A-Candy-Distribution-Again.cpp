#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, X;
  int R = 0;
  cin >> N >> X;
  vector<int> vec(N);

  for (int i = 0; i < N; i++) cin >> vec[i];
  sort(vec.begin(), vec.end());

  for (int i = 0; i < N; i++) {
    X = X - vec[i];
    if (X >= 0) {
      if (i != N - 1) {
        R += 1;
      }
      if (i == N -1 && X == 0) {
        R += 1;
      }
    } else {
      break;
    }
  }

  cout << R << endl;
}