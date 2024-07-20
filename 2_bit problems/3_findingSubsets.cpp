#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string str;
  cin >> str;
  int n = str.length();

  vector<string> strings;

  for (int i = 0; i < (1 << n); i++) {
    int temp = i;
    string tempStr = "";
    int idx = 0;
    while (temp) {
      if (temp & 1)
        tempStr += str[idx];
      idx++;
      temp >>= 1;
    }
    strings.push_back(tempStr);
  }

  // Printng the answers
  cout << "ans: " << endl;
  cout << "Size of ans vector: " << strings.size() << endl;
  for (string x : strings) {
    cout << "'" << x << "'" << " ";
  }
  cout << endl;

  return 0;
}
