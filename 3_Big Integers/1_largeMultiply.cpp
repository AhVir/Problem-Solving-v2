#include <algorithm>
#include <iostream>
using namespace std;

string multiple(string s1, int s2) {
  reverse(s1.begin(), s1.end());
  int n = s1.length();
  string ans = "";

  int reminder = 0;
  for (int i = 0; i < n; i++) {
    int digit = s1[i] - '0';
    int cal = digit * s2 + reminder;

    reminder = cal / 10;

    ans.push_back((cal % 10) + '0');
  }

  // if any reminder remains
  if (reminder) {
    while (reminder) {
      char temp = (reminder % 10) + '0';
      reminder /= 10;
      ans.push_back(temp);
    }
  }

  // reversing the answer
  reverse(ans.begin(), ans.end());
  return ans;
}

int main() {
  string s1 = "1231";
  int s2 = 123231231;

  string multiply = multiple(s1, s2);
  cout << "Multiply: " << multiply << endl;

  return 0;
}
