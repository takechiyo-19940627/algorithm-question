#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec(3);
  for (int i = 0; i < 3; i++) {
    cin >> vec[i];
  };

  if (vec[0] == vec[1]) {
    cout << vec[2] << endl;
  } else if (vec[1] == vec[2]) {
    cout << vec[0] << endl;
  } else if (vec[0] == vec[2]) {
    cout << vec[1] << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}