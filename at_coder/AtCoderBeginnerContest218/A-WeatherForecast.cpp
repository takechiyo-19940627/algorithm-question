#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  char w = s[n - 1];
  if (w == 'o') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}