#include <iostream>
using namespace std;

int main() {
  cout << "left Shift: " << endl;
  int num = 14;
  cout << num << " << 2 => " << (num << 2) << endl;

  cout << "right shift: " << endl;
  cout << num << " >> 2 => " << (num >> 2) << endl;

  return 0;
}
