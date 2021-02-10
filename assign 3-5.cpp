#include <iostream>
using namespace std;
int main()
{
  int num1,num2,num3;
  srand(time(NULL));
  num1 = rand()%(100);
  num2 = rand()%(100);
  num3 = rand()%(100);
  cout << "The random numbers are: " << num1 << ", " << num2 << ", and " << num3 << ".\n";
  double sum, average;
  sum = num1 + num2 + num3;
  average = sum / 3.0;
  cout << "The summination is: " << sum << "\n";
  cout << "The average is: "<< average << "\n";
}