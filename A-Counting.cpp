#include <iostream>

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A > B) {
    cout << 0 << endl;
    return 0;
  }

  cout << B - A + 1 << endl;

  return 0;
}