#include <iostream>
using namespace std;

int decToBinary(int n) {
  int num = 0;
  int pow = 1;
  while (n) {
    int temp = (n & 1);
    num += (pow * temp);

    pow *= 10;
    n >>= 1;
  }

  return num;
}

int main() {
  int num;
  cin >> num;

  cout << "Number: " << num << endl;
  cout << "Number(In Binary): " << decToBinary(num) << endl;

  return 0;
}
