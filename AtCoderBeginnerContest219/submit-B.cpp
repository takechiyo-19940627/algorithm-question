#include <iostream>
#include <map>
#include <string>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string s1, s2, s3;
  string t;
  map<char, string> mp;
  string ans = "";

  cin >> s1 >> s2 >> s3 >> t;

  mp['1'] = s1;
  mp['2'] = s2;
  mp['3'] = s3;

  rep(i,t.length()) {
    ans += mp[t[i]];
  }

  cout << ans << endl;

  return 0;
}
