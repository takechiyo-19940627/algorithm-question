#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<string> t(n);
  for (int i = 0; i < n; i++) {
    string tmpS, tmpT;
    cin >> tmpS >> tmpT;
    s[i] = tmpS;
    t[i] = tmpT;
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] == s[j] && t[i] == t[j]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;

  return 0;
}
