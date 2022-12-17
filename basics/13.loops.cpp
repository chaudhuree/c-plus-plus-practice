/*
docs:(agenda of discussion)
-for loops
-ranged based for loops
-while loops
-do while loops
-break and continue statements
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  // docs: for loop
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << i << "\n";
  // }

  // for in range
  int number[] = {23, 45, 64};
  for (int i : number)
  {
    cout << i << endl;
  }
  return 0;
}