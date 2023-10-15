#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, M;
  long long R = 0;
  cin >> N;
  M = N * 3;
  vector<int> vec(M);

  for (int i = 0; i < M; i++) cin >> vec[i];
  sort(vec.begin(), vec.end(), greater<int>());

  for (int i = 1; i < N + 1; i++) { R += vec[i]; }
  cout << R << endl;
}