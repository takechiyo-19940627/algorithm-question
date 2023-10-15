#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;

  // とある4桁の整数 iが下記の条件を満たしているかどうか
  // 条件(1): 文字列Sの j番目が 'o' のときに、iに jが含まれている
  // 条件(2): 文字列Sの j番目が 'x' のときに、iに jが含まれていない
  for (int i = 0; i < 10000; i++) {
    vector<int> a(10);
    int x = i;
    for (int j = 0; j < 4; j++) {
      int d = x % 10;
      // d 番目の数が 整数 i のいずれかの桁に含まれている場合1を入れる
      // e.g) a = [1, 0, 1, 1];
      a[d] = 1;
      // 10で割ることで桁を減らす
      // e.g) 812 / 10 = 81 となり、次のループで1の位を取り出す
      x /= 10;
    }
    bool ok = true;
    for (int j = 0; j < 10; j++) {
      // 条件(1)を満たさない
      if (s[j] == 'o' && a[j] != 1) ok = false;
      // 条件(2)を満たさない
      if (s[j] == 'x' && a[j] != 0) ok = false;
    }
    if (ok) ans++;
  }

  cout << ans << endl;
  return 0;
}
