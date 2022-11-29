#include <iostream>

using namespace std;

class Mobile {
private:
  int imeiNo=123224;

protected:
  string screen="gorilla";

public:
  string model="65at saturn";

  void s() { cout << "your phone screen type is :" << screen << endl; }

  void m() { cout << "your phone model type is : " << model << endl; }
};


class Samsung : private Mobile {
public:
  Samsung() { cout << "default constructor of samsung" << endl; }

  Samsung(string modell) {
    cout << "parameter constructor is : " << modell << endl;
  }
};

class Nokia : public Mobile {
public:
  Nokia() { cout << "default constructor of Nokia" << endl; }

  Nokia(string modell) {
    cout << "parameter constructor is : " << modell << endl;
  }
};

class Iphone : protected Mobile {
public:
  Iphone() {
       cout << "default constructor of Iphone" << endl; 
    }

  Iphone(string modell) {
    cout << "parameter constructor is : " << modell << endl;
  }
};

int main(void) {
    
    Mobile mobile;
    mobile.s();
    mobile.m();

    Samsung sam1;
    Samsung sam2("galaxy s1") ;


    Nokia nok1;
    Nokia nok2("nok s1") ;
    
    Iphone iphn1;
    Iphone iphn2("iphn s1");
    
    Nokia child;
    child.s();
    child.m();

    // Iphone child1;
    // child1.s();
    // child1.m();

     return 0; 
     
    }