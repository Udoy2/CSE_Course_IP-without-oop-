#include "iostream" 

using namespace std;

int main(void){
    char vehicle;
    cout << "type c for car, type b for bike , type t for thelagari: " << endl;
    cin >> vehicle;

    switch (vehicle) {
        case 'c':
            cout << "park your car in g15" << endl;
            break;
        case 'b':
            cout << "park your bike in g67" << endl;
            break;
        case 't':
            cout << "park your cycle in g58" << endl;
            break;
        default:
            cout << "park your thela gari in g17" << endl;
    }
    return 0;
}