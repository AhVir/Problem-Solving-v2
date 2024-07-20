#include <iostream>
using namespace std;

// approaches
// 1. brute force(O(n^2), space-> O(1))
// 2. frequencey table (O(n), space-> O(n))
// 3. using bit operations (0(n), space -> O(1))

int main() {
  cout << "Everything is working!!" << endl;

  int nums[] = {1, 4, 8, 8, 4, 9, 1};

  int num = 0;
  for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
    num ^= nums[i];
  }

  cout << "the unique number is: " << num << endl;

  return 0;
}
