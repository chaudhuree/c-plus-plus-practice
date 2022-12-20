#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
// function define without parameter
void greet()
{
  cout << "good evening" << endl;
}
// function parameters
int addNum(int a, int b)
{
  return a + b;
}
// multiple num
int mulNum(int, int);
int main()
{
  greet();

  int resultAdd = addNum(1, 1);
  cout << resultAdd << endl;
  int resultmult = mulNum(2, 3);
  cout << resultmult << endl;

  return 0;
}
int mulNum(int a, int b)
{
  int multiplication = a * b;
  return multiplication;
}