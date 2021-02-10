#include <iostream>
using namespace std;
int main()
{
  int A,B,C,Total;
  cout << "How many class A tickets were sold?: \n";
  cin >> A;
  cout << "How many class B tickets were sold?: \n";
  cin >> B;
  cout << "How many class C tickets were sold?: \n";
  cin >> C;
  
  Total = (A * 15) + (B * 12) + (C * 9);
  cout << "The total income is " << Total << endl;
}