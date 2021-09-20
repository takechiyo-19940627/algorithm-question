#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
  long n;
  cin >> n;
  vector<vector<long> > vec(n);
  long min = 0;
  rep(i,n) {
    vector<long> tmp(3);
    cin >> tmp[0] >> tmp[1] >> tmp[2];
    vec[i] = tmp;
  }

  rep(i,n) {
    if((vec[i][2] - vec[i][0]) > 0) {
      if (min == 0) {
        min = vec[i][1];
      } else {
        if (min > vec[i][1]) min = vec[i][1];
      }
    }
  }

  if (min > 0) {
    cout << min << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
