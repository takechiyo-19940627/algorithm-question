#include <iostream>

using namespace std;

int main() {
  int n, result;
  cin >> n;
  result = n * 1.08;
  if (result == 206) cout << "so-so" << endl;
  if (result > 206) cout << ":(" << endl;
  if (result < 206) cout << "Yay!" << endl;

  return 0;
}