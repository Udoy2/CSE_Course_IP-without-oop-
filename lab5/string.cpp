#include <iostream>
#include <string.h>
using namespace std;

int main(void){
    // init variable
    char first_name[30] , last_name[30], id[30];
    int length;
    // taking input of all the info---------------------------------------------------------------------------------------------------------------
    cout << "enter your first name: " <<endl;
    cin >> first_name;
    cout << "enter your last name: " <<endl;
    cin >> last_name;
    cout << "enter your last: " <<endl;
    cin >> id;
    // storing the length of the full name of user
    length = strlen(strcat(first_name,last_name));
    // printing the message
    cout << "your name is " 
        << strcat(first_name,last_name) 
        << "which contains " 
        <<  length
        << " letters" << endl; 
    
    // use of all the 5 function
    if(strcmp(first_name,last_name) != 0 ){
        cout << "the name is not same" << endl;
    }else{
        cout << "the name is same" << endl;
    }
    // strncmp view
    cout << strncmp(first_name,last_name,2) << endl;
    cout << strcpy(first_name,last_name) << endl;
    cout << first_name << endl;
    cout << strncpy(last_name,"udoy",3) << endl;
    cout << last_name << endl;
    return 0;
}