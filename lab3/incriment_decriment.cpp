#include <iostream>

using namespace std;

int main(void){
    int input_number;
    cout << "enter your number: " << endl;
    cin >> input_number;
    cout << ++input_number << endl;
    cout <<  input_number++ << endl;
    cout << --input_number << endl;
    cout << input_number-- << endl;
    cout << ++(++input_number) << endl;
    cout << (++input_number)++ << endl;
    cout << --(++input_number) << endl;
    cout << (++input_number)-- << endl;
    cout << (--(++input_number))-- << endl;
    cout << (--(++input_number))++ << endl;
    return 0;
}