#include <iostream>
using namespace std;

int main() {
  string str;
  cin >> str;

  int size = str.size();
  int loop = 4 - size;

  if (loop == 0) {
    cout << str << endl;
    return 0;
  }

  for (int i = 0; i < loop; i++) {
    str.insert(0, "0");
  }
  
  cout << str << endl;
}
