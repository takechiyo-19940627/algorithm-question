#include <iostream>
using namespace std;

// NOTE: 通貨は1 ~ 10!

int factorical(int i) { return i ? factorical(i - 1) * i : 1; }

int main() {
  int P;
  cin >> P;

  int answer = 0;
  // for (int i = 1; i <= 10; i++) {
  //   int d = factorical(i + 1);
  //   int r = P % d;
  //   answer += r / factorical(i);
  //   P -= r;
  // }
  int x = 2;
  // NOTE: PをXで割った余りが (X - 1)!円で払う最適の枚数 
  while (P > 0) {
    answer += P % x;
    P /= x;
    x++;
  }
  cout << answer << endl;
  return 0;
}
