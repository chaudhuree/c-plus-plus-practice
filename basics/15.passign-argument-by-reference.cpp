#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void greet(const string &name)
{
  cout << "Hello " << name << endl;
  // imp: if we don't declare it as const then the value at main function will also change
}

int changeNum(int &num)
{
  cout << "from changeNum function" << num << endl;
  num = 6;
}
int main()
{
  string name = "chaudhuree";
  greet(name);

  int num = 4;
  changeNum(num);
  // num value will be changed
  cout << "after modification in  changeNum:" << num << endl;
  // to prevent this we have to use const

  return 0;
}