#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
  string password;
  cin >> password;
  string ans = "Strong";

  if (password[0] == password[1] && password[1] == password[2] && password[2] == password[3]) ans = "Weak";

  int sameNumCount = 0;
  for (int i = 0; i < 3; i++) {
    int num1 = password[i] - '0';
    int num2 = password[i + 1] - '0';
    
    if (num1 != 9 && (num1 + 1) == num2) sameNumCount++;
    if (num1 == 9 && num2 == 0) ans = sameNumCount++;
  }

  if (sameNumCount == 3) ans = "Weak";

  cout << ans << endl;

  return 0;
}
