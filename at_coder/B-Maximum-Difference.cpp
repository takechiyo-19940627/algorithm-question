#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  int array[N];

  for (int i = 0; i < N; ++i) {
    int num;
    cin >> num;
    array[i] = num;
  }

  sort(array, array + N);

  cout << array[N - 1] - array[0] << endl;
}
