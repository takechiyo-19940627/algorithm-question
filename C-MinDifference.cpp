#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int ai = 0, bi = 0;
  int ans = 1001001001;
  while (ai < n && bi < m) {
    ans = min(ans, abs(a[ai] - b[bi]));
    if (a[ai] < b[bi]) ++ai; else ++bi;
  }

  cout << ans << endl;
  
  return 0;
}

// int main() {
//   long long n, m;
//   cin >> n >> m;

//   vector<long long> numberVecA(n);
//   vector<long long> numberVecB(m);

//   for (long long i = 0; i < n; i++) cin >> numberVecA[i];
//   for (long long i = 0; i < m; i++) cin >> numberVecB[i];
//   sort(numberVecA.begin(), numberVecA.end());
//   sort(numberVecB.begin(), numberVecB.end());
  

//   return 0;
// }
