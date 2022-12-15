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
  short minValue=1;
  short maxValue=6;
  srand(time(nullptr));
  int randomNumber1 = (rand() % (maxValue-minValue)+1)+minValue;
  int randomNumber2 = (rand() % (maxValue-minValue)+1)+minValue;
  cout << randomNumber1<<", "<<randomNumber2<<endl;
  return 0;
}