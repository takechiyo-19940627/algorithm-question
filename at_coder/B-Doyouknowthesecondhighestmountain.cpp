#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, string> > mountains(n);
  for (int i = 0; i < n; i++) {
    int h;
    string name;
    cin >> name;
    cin >> h;
    mountains[i] = make_pair(h, name);
  }

  sort(mountains.begin(), mountains.end());

  cout << mountains[n - 2].second << endl;
  
  return 0;
}
