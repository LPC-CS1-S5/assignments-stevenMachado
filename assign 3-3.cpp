#include <iostream>
using namespace std;
int main()
{
  double C,F;
  cout << "Enter the temperature by Celcius: ";
  cin >> C;

  F = ((9.0/5) * C) + 32;

  cout << "Celcius " << C << " is " << F << " Fahrenheit";
}