#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> vecA(N);
  vector<int> vecB(N);

  for (int i = 0; i < N; ++i) { cin >> vecA[i]; }
  for (int i = 0; i < N; ++i) { cin >> vecB[i]; }

  
  int res = 0;

  for (int i = 1; i < 1001; ++i) {
    for (int j = 0; j < N; ++j) {
      if (i >= vecA[j] && i <= vecB[j]) {
        if (j == N - 1) {
          res = res + 1;
        }
      } else {
        break;
      }
    }
  }

  cout << res << endl;
}