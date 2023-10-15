#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  int a = s.find('A') + 1;
  int z = s.rfind('Z') + 1;

  cout << z - a << endl;
}
