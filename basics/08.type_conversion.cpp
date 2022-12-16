#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  int a = 5;
  double b = 10.0;
  int result = a + static_cast<int>(b);
  cout<<result<<endl;

  return 0;
}