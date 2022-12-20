#include <iostream>
#include "my_functions.hpp"

using namespace std;
namespace chaudhuree
{
  void greet(string name)
  {
    cout << "hello " << name << endl;
  }

  int addNum(int a, int b)
  {
    return a + b;
  }
}
