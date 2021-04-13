#include <iostream>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  int arr[n];
  int count = n;
  int total = 0;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    total += arr[i];
  }

  int rest = x - total;
  int min = *min_element(arr, arr + n);

  count += rest / min;

  cout << count << endl;

  return 0;
}
