#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans;
  if (n >= 1 && n <= 125) {
    ans = 4;
  } else if (n >= 126 && n <= 211) {
    ans = 6;
  } else if (n >= 212 && n <= 214) {
    ans = 8;
  }

  cout << ans << endl;
  
  return 0;
}
