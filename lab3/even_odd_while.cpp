#include <iostream>

using namespace std;

int main(void) {
  int range_num, i;
  cout << "enter your range number: " << endl;
  cin >> range_num;

  while (i < range_num) {
      if (i%2 == 0){
          cout << "The number is even" << endl;
      }
      else{
          cout << "The number is odd" << endl;
      }
      i++;
  }
  return 0;
}