#include <iostream>

using namespace std;

int main(void){
    int arr[3] = {};
    for(int i=0; i < 3 ; i++ ){
        cout  << "enter value of index " << i << endl;
        cin >> arr[i];
    }
    for(int i=0; i < 3 ; i++ ){
        cout   << arr[i] << endl;
    }

    return 0;
}