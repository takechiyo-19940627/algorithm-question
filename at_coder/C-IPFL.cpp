#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  int N; cin >> N;
  string S; cin >> S;
  int Q; cin >> Q;
  bool reverse = false;

  for (int i = 0; i < Q; i++) {
    int T, A, B; cin >> T >> A >> B;
    if (T == 2) {
      reverse = !reverse;
      continue;
    }

    if (reverse) {
      if (N >= A) A = A + N;
      else A = A - N;
      if (N >= B) B = B + N;
      else B = B - N;
    }

    string tmp1;
    string tmp2;
    if (T == 1) {
      tmp1 = S[A - 1];
      tmp2 = S[B - 1];
      S.replace(A - 1, 1, tmp2);
      S.replace(B - 1, 1, tmp1);
    }
  }

  if (reverse) {
    string tmp1;
    string tmp2;
    tmp1 = S.substr(0, N);
    tmp2 = S.substr(N, N);
    S = tmp2 + tmp1;
  }

  cout << S << endl;
}