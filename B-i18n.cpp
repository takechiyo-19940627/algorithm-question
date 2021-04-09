#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string s;
  ostringstream oss;
  cin >> s;
  
  int count = s.length() - 2;
  oss << count;

  string start_str = s.substr(0, 1);
  string end_str = s.substr(count + 1, 1);

  cout << start_str + oss.str() + end_str << endl;

  // 公式回答
  // string s;
  // cin >> s;
  // int N = s.length();
  // cout << s[0] << N - 2 << s[N - 1] << endl;

  return 0;
}



