#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int> > vec(n);
  for (int i = 0; i < n; i++) {
    int score;
    cin >> score;
    vec[i] = make_pair(score, i + 1);
  };
  sort(vec.begin(), vec.end());

  cout << vec[n - 2].second << endl;
  
  return 0;
}