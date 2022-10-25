#include <iostream>
using namespace std;

int main(void) {
  int user_input[5], recheck_input, i = 0, j = 0, memo = 0;
  cout << "Input 6 numbers: " << endl;

  while (i < 5) { // input number section
    cin >> user_input[i];
    i++;
  }

  cout << "Enter the number that needs to be checked: " << endl; //   check portion (looop)
  cin >> recheck_input;
  while (j < 5) {
    if (user_input[j] == recheck_input) {
      memo = 1;
    }
    j++;
  }

  if (memo == 1) { //   check portion (condition)
    cout << "Yes, it is present." << endl;
  } else {
    cout << "No, it is not present." << endl;
  }

  return 0;
}