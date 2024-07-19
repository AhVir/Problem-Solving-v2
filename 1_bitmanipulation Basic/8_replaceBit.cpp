#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int m;
  cin >> m;

  int i, j;
  cin >> i >> j;
  // making the mask
  int first = -1 << (j + 1);
  // first = ~first;

  int second = -1 << i;
  second = ~second;
  int clearingMask = first | second;
  // clearing the bits of that range
  n = (n & clearingMask);
  cout << "aftering clearing : " << n << endl;

  int mask = m << i;
  cout << "after the calculation, the num is: " << (n | mask) << endl;

  return 0;
}
