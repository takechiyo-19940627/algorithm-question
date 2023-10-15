#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  int res = 0;
  cin >> n >> k;
  vector<int> vec;

  for (int i = 0; i < n; i++) {
    int fn = i + 1;
    for (int j = 0; j < k; j++) {
      vec.push_back(fn * 100 + j + 1);
    }
  }

  for (int i = 0; i < vec.size(); i++) {
    res += vec[i];
  }
  cout << res << endl;
  return 0;
}