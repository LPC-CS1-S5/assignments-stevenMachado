#include <iostream>
using namespace std;
int main()
{
  string month1,month2,month3;
  double numMonth1,numMonth2,numMonth3,average;
  cout << "Enter the first month and rain amount\n";
  cin >> month1;
  cin >> numMonth1;
  cout << "Enter the second month and rain amount\n";
  cin >> month2;
  cin >> numMonth2;
  cout << "Enter the third month and rain amount\n";
  cin >> month3;
  cin >> numMonth3;

  average = (numMonth1 + numMonth2 + numMonth3) / 3.0;
  cout << "The average rain fall for the months " << month1 << ", " << month2 << ", and " << month3 << " is " << average << endl;
}