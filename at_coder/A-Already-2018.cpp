#include <iostream>
#include <regex>
using namespace std;

int main(int argc, char const *argv[]) {
  string S;
  string ns;
  cin >> S;
  ns = regex_replace(S, regex("^2017"), "2018");
  cout << ns << endl;
  
  return 0;
}
