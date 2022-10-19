#include <iostream>

using namespace std;

int main(void){
    int phone_price , exes_price , budget = 60000;
    cout << "enter your phone price: " << endl;
    cin >> phone_price;
    cout << "enter your exes price: " << endl;
    cin >> exes_price ;

    if(phone_price + exes_price <= budget){
        cout << "yes! you can buy the phone..." << endl; 
    }else{
        cout << "budget overload" << endl;
    }
    return 0;
}