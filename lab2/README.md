# Here i will describe the logic of sort  using if else-> 

```cpp
#include <iostream>

using namespace std;

int main(void) {
  int a, b, c, temp;
  cin >> a >> b >> c;

  if (a > c) {

    temp = a;
    a = c;
    c = temp;
  }
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }
  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }

  cout << "the smallest number is : " << a << endl;
  cout << "the middle number is : " << b << endl;
  cout << "the biggest number is : " << c << endl;
  return 0;
}
```
