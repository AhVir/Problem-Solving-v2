#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  int i;
  cout << "iTH bit, i = ";
  cin >> i;
  cout << i << endl;

  cout << "set to 0/1, ? ";
  int val;
  cin >> val;
  cout << val << endl;
  int mask = 1 << i;

  if (val == 0) {
    if ((num & mask) == 0)
      cout << "already " << i << "TH bit is 0." << endl;
    else {
      num ^= mask;
      cout << i << "TH bit is changed, num is " << num << " now.";
    }
  } else if (val == 1) {
    if (num & mask)
      cout << "already " << i << "TH bit is 1.";
    else {
      num ^= mask;
      cout << i << "TH bit is changed, num is " << num << " now.";
    }
  }

  return 0;
}
