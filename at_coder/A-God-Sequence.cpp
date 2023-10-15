#include <iostream>
#include <vector>
using namespace std;

int main() {
  signed int A, B, L;
  cin >> A >> B;
  L = A + B;
  vector<int> vec(L);

  if (A == B) {
    for (int i = 0; i < L; i++) {
      if (i % 2 == 0) {
        vec[i] = i + 1;
      } else {
        vec[i] = (-1) * vec[i - 1];
      }
    }
  }

  if (A > B) {
    signed int inc = 0;
    for (int i = 0; i < A; i++) {
      inc = inc + (i + 1);
      vec[i] = i + 1;
    }

    for (int i = 0; i < B; i++) {
      if (i != B - 1) {
        inc = inc - (i + 1);
        vec[A + i] = -1 * (i + 1);
      } else {
        vec[A + i] = -1 * inc;
      }
    }
  }

  if (B > A) {
    signed int dec = 0;
    for (int i = 0; i < B; i++) {
      dec = dec - (i + 1);
      vec[i] = -1 * (i + 1);
    }

    for (int i = 0; i < A; i++) {
      if (i != A - 1) {
        dec = dec + (i + 1);
        vec[B + i] = (i + 1);
      } else {
        vec[B + i] = -1 * dec;
      }
    }
  }

  for (int i = 0; i < L; i++){
    cout << vec[i] << " ";
  }
}