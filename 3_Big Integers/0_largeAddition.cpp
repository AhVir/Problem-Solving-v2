#include <algorithm>
#include <iostream>
using namespace std;

string addNum(string s1, string s2) {
  // making the first string, the bigger string
  int n1 = s1.length(), n2 = s2.length();
  if (n2 > n1) {
    string temp = s1;
    s1 = s2;
    s2 = temp;

    n1 = s1.length(), n2 = s2.length();
  }

  string ans = "";
  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());

  int reminder = 0;
  for (int i = 0; i < n2; i++) {
    int add = (s1[i] - '0') + (s2[i] - '0') + reminder;
    reminder = add / 10;
    add %= 10;
    ans.push_back(add + '0');
  }
  if (n1 != n2) {
    int temp = n2;
    while (temp < n1) {
      int cal = (s1[temp] - '0') + reminder;
      reminder = cal / 10;
      cal %= 10;
      ans.push_back(cal + '0');

      temp++;
    }
  }

  // if n1 & n2 is same, but there's reminder remaining.
  if (reminder) {
    ans.push_back(reminder + '0');
  }

  // reversing the final calculated result
  reverse(ans.begin(), ans.end());

  return ans;
}

int main() {
  string str1, str2;
  cin >> str1 >> str2;

  string addition = addNum(str1, str2);

  cout << "Addition: " << addition << endl;

  return 0;
}
