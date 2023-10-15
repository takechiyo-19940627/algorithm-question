#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  map<int, int> mp;
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    // i未満の数のうち、既に出現しているiと一致するものの数を引く
    ans += i - mp[a[i]];
    mp[a[i]]++;
  }

  cout << ans << endl;
  return 0;
}

// int facctorialMethod(int k){
//   int sum = 1;
//   for (int i = 1; i <= k; i++) sum *= i;
//   return sum;
// }

// int main() {
//   int n;
//   int ans = 0;
//   cin >> n;
//   vector<long> a(n);
//   for (int i = 0; i < n; i++) cin >> a[i];
//   sort(a.begin(), a.end());
//   a.erase(unique(a.begin(), a.end()), a.end());

//   ans = facctorialMethod(a.size());

//   cout << ans << endl;
  
//   return 0;
// }

// int main() {
//   int n;
//   int ans = 0;
//   cin >> n;
  
//   vector<pair<long, long> > a(n);
//   for (int i = 0; i < n; i++) {
//     int m;
//     cin >> m;
//     a[i] = make_pair(m, i + 1);
//   };

//   for (int i = 0; i < n - 1; i++) for (int j = i + 1; j < n; j++) if (a[i].first != a[j].first) ans++;

//   cout << ans << endl;
  
//   return 0;
// }
