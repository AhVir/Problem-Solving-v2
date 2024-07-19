#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  if (num & (num - 1)) {
    cout << num << " isn't a power of 2." << endl;
  } else {
    cout << num << " is a power of 2." << endl;
  }

  return 0;
}
