#include <iostream>

using namespace std;

int main(void){
    int arr[7] = {1,2,3,4,5,6,7};
    arr[6] = 42;
    cout << arr[6] << endl;
    return 0;
}