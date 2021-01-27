#include <iostream>
using namespace std;

int main ();
{
  double regularWages, basePayRate, overtimePayRate = 27.78, regularHours = 40, overtimeHours, totalWages, workHours = 50, overtimeWages;

  regularWages = regularHours * basePayRate;
  overtimeHours = workHours - regularHours;
  overtimeWages = overtimeHours * overtimePayRate;
  totalWages = regularWages + overtimeWages;

  cout << "Regular wages: " << regularWages << endl;
  cout << "Total wages: " << totalWages << endl;
  cout << "Overtime wages: " << overtimeWages << endl;
}