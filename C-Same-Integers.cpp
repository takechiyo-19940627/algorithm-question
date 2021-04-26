#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> vec(3);
  for (int i = 0; i < 3; i++) cin >> vec.at(i);
  int maxv = *max_element(vec.begin(), vec.end());
  int diff = 0;
  for (int i = 0; i < 3; i++) {
    diff += maxv - vec.at(i);
  }
  if (diff % 2 == 0) cout << diff / 2 << endl;
  else cout << (diff + 3) / 2 << endl;
}
