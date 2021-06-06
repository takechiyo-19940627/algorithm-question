#include <iostream>
using namespace std;

int main() {
  int x, y;
  int res;
  int arr[3] = {0, 1, 2};
  cin >> x >> y;
  

  if (x == y) {
    cout << x << endl;
  } else {
    for (int i = 0; i < 3; i++) {
      if (arr[i] != x && arr[i] != y) {
        cout << arr[i] << endl;
        break;
      }
    }
  }
}