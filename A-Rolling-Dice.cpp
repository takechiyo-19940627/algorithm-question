#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a < b) {
    cout << "No" << endl;
    return 0;
  }
  if (a * 6 < b) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}