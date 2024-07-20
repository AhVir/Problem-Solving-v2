#include <iostream>
#include <vector>
using namespace std;
// description:
// there is repeative numbers, except 2 numbers that will be unique.

int main() {
  cout << "come onnnn, dude" << endl;

  int nums[] = {1, 2, 6, 9, 2, 9, 8, 1};

  int num = 0;

  for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
    num ^= nums[i];
  }

  // finding out the 1st setBit from the right, within num
  int pos = 0;
  int tempNum = num;
  while (tempNum) {
    if (tempNum & 1)
      break;

    tempNum >>= 1;
    pos++;
  }
  int mask = 1 << pos;
  vector<int> temp;
  for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
    if (mask & nums[i])
      temp.push_back(nums[i]);
  }

  int firstNum = 0;
  for (int i = 0; i < temp.size(); i++)
    firstNum ^= temp[i];
  cout << "The first number is : " << firstNum << endl;

  int secondNum = (num ^ firstNum);
  cout << "The Second number is: " << secondNum << endl;

  return 0;
}
