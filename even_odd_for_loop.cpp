#include <iostream>

using namespace std;

int main(void){
    int range_num;
    cout << "enter your range: " << endl;
    cin >> range_num;
    for (int i; i <= range_num ; i++){
        if (i % 2 == 0) {
            cout << i << " is even" << endl;
        }
        else{
            cout << i << " is odd" << endl;
            
        }
    }
    return 0;
}