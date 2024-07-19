#include <iostream>
using namespace std;

int countBits01(int n) {
  int cnt = 0;
  while (n) {
    if ((n & 1) == 1)
      cnt++;

    n >>= 1;
  }

  return cnt;
}

int countBits02(int n) {
  int cnt = 0;

  while (n) {
    cnt++;
    n = n & (n - 1);
  }

  return cnt;
}

int main() {
  int num;
  cin >> num;

  cout << countBits01(num) << endl;
  cout << countBits02(num) << endl;

  return 0;
}
