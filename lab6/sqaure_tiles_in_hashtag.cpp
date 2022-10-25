#include <iostream>

using namespace std;

int main(void){
    int user_input , max_num;
    cout << "enter a number: " << endl;
    cin >> user_input;
    max_num = user_input * user_input;
    
    for (int i; i < max_num; i++){
        if(i % user_input == 0){
            cout << "\n" ;
        }
        cout << "#" ;
    }

    cout << "\n";
    return 0;
}