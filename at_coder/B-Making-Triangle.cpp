#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N; ++i) cin >> vec[i];
  sort(vec.begin(), vec.end());

  int ans = 0;

  for(int i = 0; i < N; ++i) {
    for (int j = 0; j < i; ++j) {
      for (int k = 0; k < j; ++k) {
        if (vec[k]!= vec[j] and vec[i] != vec[j] and
            vec[k] + vec[j] > vec[i]) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
