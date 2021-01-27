#include <iostream>

using namespace std;

int main() {
  double regularPrice = 59.95,
  discountAmount = regularPrice * 0.2,
  salesPrice = regularPrice - discountAmount;

  cout << "Regular Price: " << regularPrice << endl;
  cout << "Discount Amount: " << discountAmount << endl;
  cout << "Sale Price: " << salesPrice << endl;
}