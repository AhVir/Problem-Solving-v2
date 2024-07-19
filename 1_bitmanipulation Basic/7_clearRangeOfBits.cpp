#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  int i, j;
  cin >> i >> j;

  // creating mask
  // (j+1) => because, iTH bit is 0 based, that's why.
  int first = -1 << (j + 1); // 11 00 00 00  considering, j=6
  first = ~first;            // 00 11 11 11

  int second = -1 << i; // 11 11 11 00  considering, i=2
  second = ~second;     // 00 00 00 11

  int mask = first ^ second;

  // 00 11 11 11
  // 00 00 00 11
  // -----------
  // 00 11 11 00

  cout << "The number is now " << (num ^ mask) << endl;

  return 0;
}
