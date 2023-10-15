#include <iostream>
using namespace std;

int main() {
  int n;
  int ans;
  cin >> n;

  if (n % 100 == 0) {
    ans = n / 100;
  } else {
    ans = n / 100 + 1;
  }

  cout << ans << endl;
  
  return 0;
}