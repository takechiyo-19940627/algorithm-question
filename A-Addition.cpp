#include <iostream>
#include <vector>
using namespace std;

int main () {
  int N; cin >> N;
  int odd_count = 0;
  int even_count = 0;
  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    if (tmp % 2 == 0) {
      even_count += 1;
    } else {
      odd_count += 1;
    }
  }
  if (odd_count % 2 == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}
