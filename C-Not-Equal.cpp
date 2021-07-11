// コンテンストで解けなかったもの
#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

const int mod = 1000000007;

int main() {
  int n;
  int countSameNum = 1;
  cin >> n;
  vector<int> c(n);

  rep(i, n) cin >> c[i];
  sort(c.begin(), c.end());

  int ans = 1;
  rep(i, n) {
    ans = ((long long)ans * max(c[i] - i, 0)) % mod;
  }
  cout << ans << endl;
  return 0;
}

// int main() {
//   int N;
//   int countSameNum = 1;
//   int ans;
//   long deviser = 1000000007;
//   cin >> N;
//   int arr[N];

//   for (int i = 0; i < N; i++) {
//     int num;
//     cin >> num;
//     arr[i] = num;
//   }

//   sort(arr, arr + N);

//   ans = arr[0];
//   for (int i = 1; i < N; i++) {
//     if (arr[i - 1] == arr[i]) {
//       countSameNum++;
//     } else {
//       countSameNum = 1;
//     }

//     if (countSameNum > arr[i]) {
//       ans = 0;
//       break;
//     }

//     ans *= (arr[i] - arr[i - 1]);
//   }

//   cout << ans % deviser << endl;

//   return 0;
// }