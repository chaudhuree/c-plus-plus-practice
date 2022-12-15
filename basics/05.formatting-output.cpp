#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout << setw(10) << "summer" << setw(20) << "hot" << endl;
  cout << left << setw(10) << "spring" << setw(20) << "nice" << endl;

  // for formatting number

  cout << 123.4567 << endl;
  cout << fixed << 123.4567 << endl;
  cout << fixed << setprecision(4) << 123.4567 << endl;

  return 0;
}