#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) cin >> vec[i];
  sort(vec.begin(), vec.end(), greater<int>());
  int a = 0;
  int b = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      a += vec[i];
    } else {
      b += vec[i];
    }
  }
  cout << a - b << endl;
}
