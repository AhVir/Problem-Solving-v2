#include <iostream>
using namespace std;

// array is passed as a reference
void updateArray(int arr[], int idx, int val) { arr[idx] = val; }

void printArr(int ar[], int n) {
  for (int i = 0; i < n; i++) {
    cout << ar[i] << ", ";
  }
  cout << endl;
}

int main() {
  int arr[] = {1, 2, 4, 9, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  // updating the array
  // and actual array is being updated
  updateArray(arr, 1, 88);

  // printing the array
  printArr(arr, n);

  cout << "Base address of the array is: " << arr << endl;

  return 0;
}
