#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, K;
  int res = 0;
  cin >> N >> K;
  vector<int> vec(N);
  for (int i = 0; i < N; i++) { cin >> vec.at(i); }
  sort(vec.begin(), vec.end(), greater<int>());
  for (int i = 0; i < K; i++) { res += vec[i]; }
  cout << res << endl;
  return 0;
}