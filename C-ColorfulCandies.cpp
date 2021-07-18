#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> candies(n);
  for (int i = 0; i < n; i++) cin >> candies[i];
  int ans = 0;
  map<int, int> variationMap;
  int currentVari = 0;
  for (int i = 0; i < n; i++) {
    // i が variationMap 内にまだない key だった場合、key のバリエーションが増えることになるから currentVariを 1 増やす
    if (variationMap[candies[i]] == 0) currentVari++;
    // candies[i] の出現頻度を一つ増やす
    variationMap[candies[i]]++;
    if (i >= k) {
      variationMap[candies[i - k]]--;
      // 出現頻度を減らした candies[i - k] を key とする variationMapが 0 の場合、currentVariationは1減る
      if (variationMap[candies[i - k]] == 0) currentVari--;
    }
    ans = max(ans, currentVari);
  }
  cout << ans << endl;
  return 0;
}

// int main() {
//   long long n, k;
//   cin >> n >> k;
//   vector<long long> candies(n);
//   vector<long long> ans;
//   for (int i = 0; i < n; i++) cin >> candies[i];

//   const int range = candies.size() - k;
//   for (int i = 0; i < range; i++) {
//     vector<long long> tmpvec(k);
//     for (int j = 0; j < k; j++) {
//       int index = i + j;
//       tmpvec[j] = candies[index];
//     }
//     sort(tmpvec.begin(), tmpvec.end());
//     tmpvec.erase(unique(tmpvec.begin(), tmpvec.end()), tmpvec.end());
//     ans.push_back(tmpvec.size());
//     if (tmpvec.size() == k) {
//       break;
//     }
//   }
  
//   sort(ans.begin(), ans.end(), greater<int>());
//   cout << ans[0] << endl;

//   return 0;
// }