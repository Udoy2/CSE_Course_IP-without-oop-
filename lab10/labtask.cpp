#include <iostream>

using namespace std;
class human {
protected:
  string name;
  double height, weightt;
  int age;
  void weight(void) { cout << "your weirght is : " << weightt << endl; }

public:
  void Age_cout() { cout << "your age is : " << age << endl; }

  void setData(string nme, int agge, double hight, double weigt) {
    name = nme;
    age = agge;
    height = hight;
    weightt = weigt;
  }

  void getData(void) {
    cout << "your name : " << name << endl;
    cout << "your height:" << height << endl;
  }
};

class person {
protected:
  string occupation;

public:
  void setData(string occu) { occupation = occu; }

  void getData(void) { cout << "your occupation is : " << occupation << endl; }
};

class male : public human, public person {
protected:
  int dob_id;

public:
  string name;

  void setData(string nme, int agge, double hight, double weigt, string occu,
               int dob) {
    name = nme;
    age = agge;
    height = hight;
    weightt = weigt;
    occupation = occu;
    dob_id = dob;
  }

  void getData() {
    cout << "your name is : " << name << endl;
    Age_cout();
    cout << "your height is : " << height << endl;
    weight();
    cout << "your occupation is : " << occupation << endl;
    cout << "your doc_id is : " << dob_id << endl;
  }
};

class female : public human, public person {
protected:
  int dob_id;

public:
  string name;

  void setData(string nme, int agge, double hight, double weigt, string occu,
               int dob) {
    name = nme;
    age = agge;
    height = hight;
    weightt = weigt;
    occupation = occu;
    dob_id = dob;
  }

  void getData() {
    cout << "your name is : " << name << endl;
    Age_cout();
    cout << "your height is : " << height << endl;
    weight();
    cout << "your occupation is : " << occupation << endl;
    cout << "your doc_id is : " << dob_id << endl;
  }
};
int main() {
  string name;
  int age, dob_id;
  double height, weight;
  string occupation, gender;

  cout << "enter your name: ";
  cin >> name;

  cout << "enter your age: ";
  cin >> age;

  cout << "enter your height: ";
  cin >> height;

  cout << "enter your weight: ";
  cin >> weight;

  cout << "enter your occupation: ";
  cin >> occupation;

  cout << "enter your dob_id: ";
  cin >> dob_id;

  cout << "enter your gender: ";
  cin >> gender;
  if (gender == "male") {
    male malee;
    malee.setData(name, age, height, weight, occupation, dob_id);
    cout << "------------------------------------------ output male " << endl;
    malee.getData();
  } else {
    female femaale;
    femaale.setData(name, age, height, weight, occupation, dob_id);
    cout << "------------------------------------------ output female" << endl;
    femaale.getData();
  }
  return 0;
}