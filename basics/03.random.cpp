#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  // imp:
  // {} used so that we cannot assign wrong types
  // int number={3.4};
  // cout<<number;

  // doc: print random number between 0 to 6
  srand(time(nullptr));
  int randomNumber = rand() % 6;
  cout << randomNumber;
  return 0;
}