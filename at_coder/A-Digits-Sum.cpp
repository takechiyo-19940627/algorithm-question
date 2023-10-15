#include <cmath>
#include <limits>
#include <algorithm>
#include <iostream>

using namespace std;

long long calc(int N) {
  // 各桁の和を計算する
  int res = 0;
  while (N > 0) {
      res += N % 10;
      N /= 10;
  }
  return res;
}

int main() {
  long long N;

  while (cin >> N) {
    long long res = 1LL<<60;
    for (long long i = 1; i < N; ++i) {
      long long j = N - i;
      long long tmp = calc(i) + calc(j);
      // 最小の値を常にresへ代入する
      res = min(res, tmp);
    }
    cout << res << endl;
  }
  

  // if (N % 10 == 0) {
  //   cout << 10 << endl;
  // } else {
  //   int tmp = N - 2;
  //   int incre = 0;
  //   if (tmp > 9) {
  //     for (int i = 0; i < digits; i++) {
  //       int s = pow(10, i);
  //       int t = tmp / s % 10;
  //       incre += t;
  //     }
  //   } else {
  //     incre = 2 + tmp;
  //   }

  //   cout << incre + 2 << endl;
  // }
  
  return 0;
}
