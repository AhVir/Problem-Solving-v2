#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << n << endl;

  cout << "set iTH bit, i = ";
  int i;
  cin >> i;
  cout << i;

  int mask = 1 << i;

  if (n & mask)
    cout << i << "TH bit is already set.";
  else {
    n = n | mask;
    cout << i << "TH bit is set now.";
    cout << "The num is " << n << " now." << endl;
  }

  return 0;
}
