#include <iostream>
using namespace std;

class employee{
    int salary;
    string address,name;
    int hiredate;
    string dob,phone;
    int eno;
    public:
        void init(int slry,string addrs,int hiredt,string dateOfBirth,string phn,int employeeNo){
            cout << "enter your name: " << endl;
            cin >> name;
            salary = slry;
            address = addrs;
            hiredate = hiredt;
            dob = dateOfBirth;
            phone = phn;
            eno = employeeNo;
            
        }
    public:
        void getData(void){
            cout << "Name: " << name << endl;
            cout << "salary: " << salary << endl;
            cout << "address: " << address << endl;
            cout << "hiredate: " << hiredate << endl;
            cout << "dob: " << dob << endl;
            cout << "phone: " << phone << endl;
            cout << "eno: " << eno << endl;
            if(hiredate >= 12){
                cout << "bonus ammount : " << salary * 0.1 << endl;
            }
            cout << endl;
        }


};
class departments{
    string dname,location;
    int budget,dno;
    public:
        void init(string dname,string location,int budget, int dno){
            dname = dname;
            location = location;
            budget = budget;
            dno = dno;
            cout << "dname: " << dname << endl;
            cout << "location: " << location << endl;
            cout << "budget: " << budget << endl;
            cout << "dno: " << dno << endl;
            cout << endl;
        }

};
class brances{
    string location;
    int managerID,bno;
public:
    void init(string location,int managerID,int bno){
        location = location;
        managerID = managerID;
        bno = bno;
            cout << "location: " << location << endl;
            cout << "managerid: " << managerID << endl;
            cout << "bno: " << bno << endl;
            cout << endl;
    }
};
int main(){
    employee emp[30];
    for (int i =0 ; i <3 ; i++){
        emp[i].init(30000,"kuratoli-12",13,"12-4-2021","01315041089",2);

    }
    for (int i =0 ; i <3 ; i++){
        emp[i].getData();

    }

    departments dept;
    dept.init("kuratoli pranto biddaloy","kuratoli dhaka" , 4560099 , 3);

    brances brnc;
    brnc.init("kuratoli dhaka",2234,45);

    return 0;
}
