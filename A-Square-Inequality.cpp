#include <iostream>
using namespace std;

int main() {
  int A, B, C;
  int multi;
  cin >> A >> B >> C;
  
  multi = (A * A) + (B * B);

  if (multi < C * C) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}