#include <iostream>
using namespace std;

int main() {
  cout << "if num is even or odd: " << endl;
  int num;
  cin >> num;

  if ((num & 1) != 0)
    cout << num << " is odd." << endl;
  else
    cout << num << " is even." << endl;

  return 0;
}
