#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, C;
  int D = 1;
  cin >> N;
  vector<int> vec(N);
  vector<int> res;
  for (int i = 0; i < N; i++) cin >> vec.at(i);
  sort(vec.begin(), vec.end());

  for (int i = 0; i < N + 1; i++) {
    if (i == 0) {
      C = vec[i];
      continue;
    }

    if (vec[i] == C) {
      D += 1;
      continue;
    } else {
      if (D % 2 == 1) {
        res.push_back(C);
      }
      C = vec[i];
      D = 1;
    }
  }

  cout << res.size() << endl;
}
