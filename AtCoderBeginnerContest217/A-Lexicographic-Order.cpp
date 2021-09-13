#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  vector<string> vec(2);
  vec[0] = s;
  vec[1] = t;
  sort(vec.begin(), vec.end());
  if (vec[0] == s) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}