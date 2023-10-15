#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string s;
  int k;
  cin >> s >> k;
  sort(s.begin(), s.end());
  rep(i,k-1) next_permutation(s.begin(), s.end());
  cout << s << endl;
  return 0;
}

// int facctorialMethod(int k){
//     int sum = 1;
//     for (int i = 1; i <= k; ++i) {
//       sum *= i;
//     }
//     return sum;
// }

// int main() {
//   string s;
//   int n;
//   map<char, int> mp;
//   cin >> s >> n;
//   int s_len =  s.length();
//   sort(s.begin(), s.end());
//   rep(i,s_len) mp[s[i]]++;

//   long long accumu = 0;
//   long long start = 0;
//   string head_char;
//   for (const auto& [k, v]: mp){
//     int fact1 = facctorialMethod(v - 1);
//     int fact2 = facctorialMethod(s_len - 1);
//     accumu += (fact2 / fact1);
//     if (accumu >= n) {
//       head_char = k;
//       break;
//     }
//     start = accumu;
//   }

//   for (int i = start; i <= n; i++) {
    
//   }
  

//   cout << head_char << endl;

//   return 0;
// }
