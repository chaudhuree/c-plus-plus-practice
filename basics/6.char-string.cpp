#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

  bool isMarried = false;
  cout << left << setw(10) << "isMarried" << boolalpha << isMarried << noboolalpha << endl;

  char character = 'a';
  cout << character << endl;
  string name;
  cout << "what is your name?" << endl;
  // cin >> name;
  // getline(cin, name);
  name = "sohan chaudhuree";
  cout << "Hi," << name;

  return 0;
}