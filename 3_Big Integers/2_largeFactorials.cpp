#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string cal = "1"; // 1! = 1
  int target = 100;

  reverse(cal.begin(), cal.end());

  for (int i = 2; i <= 100; i++) {
    int reminder = 0;
    for (int j = 0; j < cal.length(); j++) {
      int temp = (cal[j] - '0') * i + reminder;
      reminder = temp / 10;
      cal[j] = (temp % 10) + '0';
    }

    if (reminder) {
      while (reminder) {
        int temp = reminder % 10;
        cal.push_back(temp + '0');

        reminder /= 10;
      }
    }
  }

  reverse(cal.begin(), cal.end());
  cout << "100! => " << cal << endl;

  return 0;
}
