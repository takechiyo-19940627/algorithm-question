#include <iostream>
#include <vector>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

// 左向きに90度反転させる
vector<string> rolling(vector<string> s, int n) {
  vector<string> r(n);
  rep(i,n) {
    rep(j,n) {
      r[n-1-j]+= s[i][j];
    }
  }
  return r;
}

vector<int> find_left_top(vector<string> s, int n) {
  vector<int> r(2);
  rep(i,n)rep(j,n) {
    if(s[i][j] == '#') {
      r[0] = i;
      r[1] = j;
      return r;
    }
  };
}

bool is_same_shape(vector<string> s, vector<string> t, int n) {
  vector<int> lts = find_left_top(s, n);
  vector<int> ltt = find_left_top(t, n);
  int Si = lts[0];
  int Sj = lts[1];
  int Ti = ltt[0];
  int Tj = ltt[1];
  int offset_i = Ti - Si;
  int offset_j = Tj - Sj;
  rep(i,n)rep(j,n) {
    int ii = i + offset_i;
    int jj = j + offset_j;
    if (0 <= ii && ii < n && 0 <= jj && jj < n) {
      if (s[i][j] != t[ii][jj]) return false;
    } else {
      if(s[i][j] == '#') return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<string> vecS(n);
  vector<string> vecT(n);
  int cntS = 0;
  int cntT = 0;
  rep(i,n) cin >> vecS[i];
  rep(i,n) cin >> vecT[i];
  rep(i,n)rep(j,n) if (vecS[i][j] == '#') cntS++;
  rep(i,n)rep(j,n) if (vecT[i][j] == '#') cntT++;
  if (cntS != cntT) {
    cout << "No" << endl;
    return 0;
  }
  // Sを4回90度傾ける
  rep(i,4) {
    if (is_same_shape(vecS, vecT, n)) {
      cout << "Yes" << endl;
      return 0;
    }
    vecS = rolling(vecS, n);
  }

  cout << "No" << endl;
}