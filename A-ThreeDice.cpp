#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int reverseA = 7 - a;
  int reverseB = 7 - b;
  int reverseC = 7 - c;

  cout << reverseA + reverseB + reverseC << endl;

  return 0;
}