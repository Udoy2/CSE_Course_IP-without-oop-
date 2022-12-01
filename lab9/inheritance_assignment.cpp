#include <iostream>
using namespace std;

/**
 * main parent class-> Mobile
 */
class Mobile
{
private:
    int imeiNo = 123224;

protected:
    string screen = "gorilla 1.0";

public:
    string model = "default model ";
    /**
     * s function just show the screen type of mobile
     */
    void s() { cout << "your phone screen type is :" << screen << endl; }

    /**
     * m function just show the screen type of mobile
     */
    void m() { cout << "your phone model type is : " << model << endl; }
};

/**
 * Samsung is a class that inherits privately from Mobile
 *
 */
class Samsung : private Mobile
{
public:
    /**
     * default constructor of samsung
     * param none
     */
    Samsung() { cout << "default constructor of samsung" << endl; }

    /**
     * param constructor
     * param type string, model
     */
    Samsung(string modell)
    {
        cout << "parameter constructor running and model is : " << modell << endl;
    }

    /**
     * setter getter function of Samsung
     */
    void setData(string scrn, string modell)
    {
        screen = scrn;
        model = modell;
        cout << "setData of samsung " << endl;
    }

    void getData(void)
    {
        s();
        m();
    }
};

class Nokia : public Mobile
{
public:
    /**
     * default constructor of samsung
     * param none
     */
    Nokia() { cout << "default constructor of Nokia" << endl; }

    /**
     * param constructor
     * param type string, model
     */
    Nokia(string modell)
    {
        cout << "parameter constructor is running and model : " << modell << endl;
    }
};

class Iphone : protected Mobile
{
public:
    /**
     * default constructor of samsung
     * param none
     */
    Iphone()
    {
        cout << "default constructor of Iphone" << endl;
    }

    /**
     * param constructor
     * param type string, model
     */
    Iphone(string modell)
    {
        cout << "parameter constructor is running and model : " << modell << endl;
    }

    /**
     * setter getter function of Iphone
     */
    void setData(string scrn, string modell)
    {
        screen = scrn;
        model = modell;
        cout << "setData of Iphone " << endl;
    }
    void getData(void)
    {
        s();
        m();
    }
};

int main(void)
{
    string screen, model;
    // mobile object

    Mobile mobile;
    mobile.s();
    mobile.m();
    // samsung object
    Samsung sam1;
    Samsung sam2("galaxy s1");
    cout << "enter glass type of samsung: " << endl;
    cin >> screen;
    cout << "enter model of Samsung: " << endl;
    cin >> model;
    sam1.setData(screen, model);
    sam1.getData();
    // nokia object
    Nokia nok1;
    Nokia nok2("nok s1");
    nok1.s();
    nok1.m();
    // iphone object
    Iphone iphn1;
    Iphone iphn2("iphn s1");
    cout << "enter glass type of Iphone: " << endl;
    cin >> screen;
    cout << "enter model of Iphone: " << endl;
    cin >> model;
    iphn1.setData(screen, model);
    iphn1.getData();

    return 0;
}