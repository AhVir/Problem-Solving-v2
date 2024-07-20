#include <iostream>
#include <vector>
using namespace std;

int main() {
  int nums[] = {5, 2, 5, 3, 5, 2, 2, 3, 3, 9};
  vector<int> ans(5, 0);

  for (int i = 0; i < 5; i++) {
    int mask = 1 << i;
    for (int j = 0; j < 10; j++) {
      if ((nums[j] & mask))
        ans[i]++;
    }
  }

  for (int i = 0; i < 5; i++)
    ans[i] %= 3;

  int uniqueNum = 0;
  for (int i = 0; i < 5; i++) {
    if (ans[i])
      uniqueNum += (1 << i);
  }

  cout << "So, the unique number is: " << uniqueNum << endl;
  return 0;
}
