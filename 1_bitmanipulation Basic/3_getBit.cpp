#include <iostream>
using namespace std;

int main() {
  // get iTH bit
  cout << "The num is : ";
  int num;
  cin >> num;
  cout << num << endl;

  cout << "The iTH bit, i = ";
  int i;
  cin >> i;
  cout << i << endl;

  int mask = 1;
  mask <<= i;

  if ((num & mask) != 0)
    cout << i << "th bit is 1." << endl;
  else
    cout << i << "th bit is 0." << endl;

  return 0;
}
