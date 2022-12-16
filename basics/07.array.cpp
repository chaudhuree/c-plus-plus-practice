#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  // static array
  int numbersS[5] = {10, 20, 43};
  // dynamic array
  int numbersD[] = {30, 14};
  cout << numbersS[2] << endl;
  cout << numbersD[2];
  return 0;
}