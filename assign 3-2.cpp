#include <iostream>
using namespace std;
int main()
{
  int numPeople,numMales,numFemales;
  double percentM,percentF;
  cout << "How many people total are in the class: ";
  cin >> numPeople;
  cout << "How many are males: ";
  cin >> numMales;
  cout << "How many are females: ";
  cin >> numFemales;

  percentF = (double(numFemales) / numPeople) * 100;
  percentM = (double(numMales) / numPeople) * 100;

 cout << "The percentage of females is " << percentF << "%.\n";
 cout << "The percentage of males is " << percentM << "%.\n";
}