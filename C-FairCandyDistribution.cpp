#include <iostream>
#include <vector>

#include <algorithm>
using namespace std;

// https://atcoder.jp/contests/abc208/tasks/abc208_c
// k / n は少なくとも

int main() {
  int n;
  long long k;
  cin >> n >> k;
  vector<int> allMen(n);
  for (int i = 0; i < n; i++) cin >> allMen[i];
  vector<long long> ans(n, k / n);
  k %= n;
  vector<pair<int, int> > p(n);
  // (国民番号, index)
  for (int i = 0; i < n; i++) p[i] = make_pair(allMen[i], i);
  // 国民番号が小さい順にソートする
  sort(p.begin(), p.end());
  // 国民番号とペアになっている index がもとの配列での index と一致している
  // 国民番号が小さい順から k個 取り出して個数を増やす
  for (int i = 0; i < k; i++) ans[p[i].second]++;
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}

// int main() {
//   long long n, k;
//   cin >> n >> k;
//   vector<long long> allMen(n);
//   for (long long i = 0; i < n; i++) cin >> allMen[i];
//   vector<long long> allMenCopy = allMen;

//   if (k >= n) {
//     if (k % n == 0) {
//       for (long long i = 0; i < n; i++) {
//         cout << k / n << endl;
//       }
//       return 0;
//     } else {
//       long long minimumSWCn = k / n;
//       long long restSwCn = k % n;
//       sort(allMenCopy.begin(), allMenCopy.end());

//       vector<long long> restCount(restSwCn);
//       for (long long i = 0; i < restSwCn; i++) restCount[i] = allMenCopy[i];

//       for (long long i = 0; i < n; i++) {
//         if (allMen[i]) {
//           /* code */
//         }
        
//         // if (i < restSwCn) {
//         //   cout << minimumSWCn + 1 << endl;
//         // } else {
//         //   cout << minimumSWCn <<  endl;
//         // }
//       }
      
//     }
//   }
  
//   return 0;
// }