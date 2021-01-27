#include <iostream>
using namespace std;
int main(){
  double mealPrice = 88.67, mealTipPercent = 0.2;
  float mealTaxPrice = 0.0675;
  double mealTax = mealPrice * mealTaxPrice,
  mealTip = (mealTax + mealPrice) * mealTipPercent,
  mealTotal = mealTip + mealTax + mealPrice;

  cout << "Meal Cost: $" << mealPrice << endl;
  cout << "Tax Amount: $" << mealTax << endl;
  cout << "Tip Amount: $" << mealTip << endl;
  cout << "Total: $" << mealTotal << endl;
}