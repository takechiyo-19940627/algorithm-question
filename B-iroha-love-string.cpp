#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;

  vector<string> vec{};

  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    vec.emplace_back(S);
  }

  sort(vec.begin(), vec.end());

  string res;
  for (int i = 0; i < N; i++) {
    res += vec[i];
  }
  
  cout << res << endl;
}
