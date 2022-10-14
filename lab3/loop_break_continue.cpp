#include <iostream>

using namespace std;

int main(void){
    int range_number;
    cout << "Enter your number: " << endl;
    cin >> range_number;
    for (int i = 0; i <= range_number; i++){
        if(i == 3){
            continue;
        }

        if(i == 5){
            break;
        }
        cout << i << endl;
    }
    return 0;
}