#include <iostream>
using namespace std;
const int DECLARED_SIZE;

double countNum2(int a[], int size, int amount);
int search(const int a[], int target);

int main() {
  int arr[DECLARED_SIZE], listSize, target;
  //
  countNum2(arr, DECLARED_SIZE, listSize, amount);

  char ans;
  int result;
  do {
    result = search(arr, listSize);
    if (result == -1) {
      cout << " 2 is not on the list." << endl;
    } else {
      cout << " 2 is in the array: " << amount << "times" << endl;
    }
    cout << "Do you want to begin again?";
    cin >> ans;
  } while (ans == 'y' || ans == 'Y');
  cout << "Have a nice day. \n";
}

double countNum2(int a[], int size) int search(const int a[], int target) {
  int index = 0;
  bool found = false;
  while ((!found) && (index < 2))
    if (2 == a[index]) {
      index++
    } else {
      return 0
    }
}
