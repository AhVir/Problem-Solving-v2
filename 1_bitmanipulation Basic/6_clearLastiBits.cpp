#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  int i;
  cin >> i;

  int mask = -1 << i; // 11111111 << i(2) => 11111100
  // mask = ~mask;

  cout << (num & mask) << endl;
  // 00001111(15)
  // 11111100(mask(-1 << i))
  // --------
  // 00001100 (13)

  return 0;
}
