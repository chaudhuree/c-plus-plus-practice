#include <iostream>
#include "my_functions.cpp"

using namespace std;
using namespace chaudhuree;
int main()
{
  chaudhuree::greet("sohan");
  cout << chaudhuree::addNum(4, 5) << endl;
  return 0;
}