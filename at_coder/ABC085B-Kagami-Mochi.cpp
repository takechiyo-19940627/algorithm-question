#include <iostream>
#include <set>

using namespace std;

int main() {
  int n;
  int d[110];
  cin >> n;
  for (size_t i = 0; i < n; i++) cin >> d[i];
  set<int> values;
  for (int i = 0; i < n; i++) {
    values.insert(d[i]);
  }
  
  cout << values.size() << endl;
  return 0;
}
