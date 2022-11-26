#include <iostream>
using namespace std;

class Order {
private:
  int OrderNumber, Price;
  float DiscountPercentage;
  string CustomerLocation;

public:
  Order(int Pric, int OrderNum) {
    Price = Pric;
    OrderNumber = OrderNum;
  }
  void setData(float DiscountPercentag, string CustomerLoc) {
    DiscountPercentage = DiscountPercentag;
    CustomerLocation = CustomerLoc;
  }
  void getData(void) {
    cout << "customer location: " << CustomerLocation << endl;
    cout << "DiscountPercentage: " << DiscountPercentage << endl;
  }
  void showOrderDetails(void) {
    cout << "Order Number: " << OrderNumber << endl;
    cout << "customer location: " << CustomerLocation << endl;
    cout << "Price: " << Price << endl;
    cout << "Total Payable: " << (Price * DiscountPercentage + 50) << "Tk"
         << endl;
  }
};
int main(void) {
    int price,serialNum;
    float discount;
    string location;
  cout << "Price : " << endl;
  cin >> price;
  cout << "enter serial num: " << endl;
  cin >> serialNum;
  cout << "Discount: " << endl;
  cin >> discount;
  cout << "location: " << endl;
  cin >> location;
  Order order1(price, serialNum);
  order1.setData(discount, location);
  order1.getData();
  order1.showOrderDetails();
  return 0;
}