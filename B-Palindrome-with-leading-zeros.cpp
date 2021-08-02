#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
  string rs = s;
  reverse(rs.begin(), rs.end());
  return (s == rs);
}

int main() {
  int n;
  cin >> n;

  if (n == 0) {
    cout << "Yes" << endl;
    return 0;
  }
  // 0をつけて回分になる => 120 のように末尾が 0のとき
  // 末尾の 0が消えるまで 10 で割り続ける
  while (n % 10 == 0) n /= 10;
  if (isPalindrome(to_string(n))) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}
